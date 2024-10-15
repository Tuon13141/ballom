using Firebase.Extensions;
using Firebase.RemoteConfig;
using System.Collections.Generic;
using UnityEngine;
using System.Threading.Tasks;
using System;
using System.Reflection;

/// <summary>
///  Firebase Remote config
/// </summary>
/// 
public class RemoteConfigSDK : MonoBehaviour
{
    public delegate void LoadedHandler();
    public static event LoadedHandler onLoaded;
    protected FirebaseRemoteConfig FbRemoteConfigInstance;
    protected static string prefix = "rc_";
    protected bool loaded = false;
    public bool enableRemoteSync = true;

    [Header("Core:")]
    [HideInInspector]public string IronSourceSegment = "";
    [HideInInspector]public string NewUserParams = "";
    public int ForceUpdate = 0;

    protected virtual void Start()
    {
        InitRemoteConfig();
    }

    public virtual void EndLoad(bool isNew = false)
    {
        if (!loaded && onLoaded != null)
        {
            onLoaded();
        }
        loaded = true;
    }

    public bool IsLoaded()
    {
        return loaded;
    }

    // Init config default values
    public void InitRemoteConfig()
    {
        loaded = false;
        if (enableRemoteSync)
        {
            // Load from the save config
            LoadFromPrefs();
            FirebaseSDK.instance.onInitialized += LoadRemoteConfig;
        }
        else
        {
            Logger.Warning("RemoteCfg Sync is disabled");
            Invoke(nameof(EndLoad),0.1f);
        }

    }

    public void Reset()
    {
        loaded = false;
    }
    // Load remote config when firebase is ready
    public void LoadRemoteConfig(bool firebaseReady)
    {
        FbRemoteConfigInstance = FirebaseRemoteConfig.DefaultInstance;
        if (firebaseReady)
        {
            FetchDataAsync();
        }
        else
        {
            EndLoad();
        }
    }

    void FetchDataAsync() {
        var setting = FbRemoteConfigInstance.ConfigSettings;
        setting.MinimumFetchInternalInMilliseconds = 0; // Do not need to cache
        FbRemoteConfigInstance.SetConfigSettingsAsync(setting).ContinueWithOnMainThread(task =>
        {
            System.Threading.Tasks.Task fetchTask = FbRemoteConfigInstance.FetchAsync().ContinueWithOnMainThread((f) => {
                //Debug.LogError("f Status: " + f.Status);
                //Debug.LogError("f ex: " + f.Exception);
                FbRemoteConfigInstance.ActivateAsync().ContinueWithOnMainThread((a) => {
                    //Debug.LogError("a Status: " + a.Status);
                    //Debug.LogError("a ex: " + a.Exception);
                    FetchComplete(a);
                });
            });
            //fetchTask.ContinueWithOnMainThread((ftask)=> {
            //    Debug.LogError("Ftask Status: " + ftask.Status);
            //    Debug.LogError("Ftask Status: " + ftask.Exception);
            //    FetchComplete(ftask); });
        });
    }

    void FetchComplete(Task fetchTask)
    {
        if (loaded) {
            return;
        }
        
        if (fetchTask.IsCanceled)
        {
            Logger.Debug("Fetch canceled.");
        }
        else if (fetchTask.IsFaulted)
        {
            Logger.Debug("Fetch encountered an error.");
        }
        else if (fetchTask.IsCompleted)
        {
            Logger.Debug("Fetch completed successfully!");
        }

        var info = FbRemoteConfigInstance.Info;
        switch (info.LastFetchStatus)
        {
            case Firebase.RemoteConfig.LastFetchStatus.Success:
                MergeAllKeys();
                SaveToPrefs();

                Logger.Debug(String.Format("Remote data loaded and ready (last fetch time {0}).",
                                       info.FetchTime));
                break;
            case Firebase.RemoteConfig.LastFetchStatus.Failure:
                switch (info.LastFetchFailureReason)
                {
                    case Firebase.RemoteConfig.FetchFailureReason.Error:
                        Logger.Debug("Fetch failed for unknown reason");
                        break;
                    case Firebase.RemoteConfig.FetchFailureReason.Throttled:
                        Logger.Debug("Fetch throttled until " + info.ThrottledEndTime);
                        break;
                }
                break;
            case Firebase.RemoteConfig.LastFetchStatus.Pending:
                Logger.Debug("Latest Fetch call still pending.");
                break;
        }

        EndLoad(info.LastFetchStatus == Firebase.RemoteConfig.LastFetchStatus.Success);
    }

    // Save config to PlayerPrefs
    void SaveToPrefs()
    {

        var list = this.GetType().GetFields(BindingFlags.Public | BindingFlags.Instance);
        foreach (var item in list)
        {
            if (item.FieldType == typeof(string))
            {
                PlayerPrefs.SetString(prefix + item.Name, item.GetValue(this) as string);

            }
            else if (item.FieldType == typeof(float))
            {
                PlayerPrefs.SetFloat(prefix + item.Name, (float)item.GetValue(this));
            }
            else if (item.FieldType == typeof(int))
            {
                PlayerPrefs.SetInt(prefix + item.Name, (int)item.GetValue(this));
            }
            else if (item.FieldType == typeof(bool))
            {
                PlayerPrefs.SetInt(prefix + item.Name, (bool)item.GetValue(this) ? 1 : 0);
            }
        }

        PlayerPrefs.Save();
    }

    // Load config from PlayerPrefs
    void LoadFromPrefs()
    {

        var list = this.GetType().GetFields(BindingFlags.Public | BindingFlags.Instance);
        foreach (var item in list)
        {

            if (item.FieldType == typeof(string))
            {
                item.SetValue(this, PlayerPrefs.GetString(prefix + item.Name, item.GetValue(this) as string));
            }
            else if (item.FieldType == typeof(float))
            {
                item.SetValue(this, PlayerPrefs.GetFloat(prefix + item.Name, (float)item.GetValue(this)));
            }
            else if (item.FieldType == typeof(int))
            {
                item.SetValue(this, PlayerPrefs.GetInt(prefix + item.Name, (int)item.GetValue(this)));
            }
            else if (item.FieldType == typeof(bool))
            {
                item.SetValue(this, PlayerPrefs.GetInt(prefix + item.Name, (bool)item.GetValue(this) ? 1 : 0) == 1 ? true : false);
            }
        }
    }

    //Merge remote config with local config
    public void MergeAllKeys()
    {
        System.Collections.Generic.IEnumerable<string> keys = FbRemoteConfigInstance.Keys;

        //Update new user params first
        string newUserParam_key = "NewUserParams";
        foreach (string k in keys)
        {
            if (k == newUserParam_key)
            {
                NewUserParams = FbRemoteConfigInstance.GetValue(k).StringValue;
            }
        }
        foreach (string k in keys)
        {

            if (IsSkipUpdate(k))
            {
                continue;
            }

            if (k.Contains("Settings"))
            {
                Dictionary<string, System.Object> jsonDict = JsonUtility.FromJson< Dictionary<string, System.Object> > (FbRemoteConfigInstance.GetValue(k).StringValue);
                MergePreKeys(jsonDict, k.Replace("Settings", ""));
            }
            else
            {
                try
                {
                    var item = typeof(RemoteConfig).GetField(k);

                    if (item != null)
                    {

#if UNITY_EDITOR
                        string oldValue = item.GetValue(this).ToString();

#endif
                        if (item.FieldType == typeof(string))
                        {
                            item.SetValue(this, FbRemoteConfigInstance.GetValue(k).StringValue);
                        }
                        else if (item.FieldType == typeof(float))
                        {
                            item.SetValue(this, (float)FbRemoteConfigInstance.GetValue(k).DoubleValue);
                        }
                        else if (item.FieldType == typeof(int))
                        {
                            item.SetValue(this, (int)FbRemoteConfigInstance.GetValue(k).LongValue);
                        }
                        else if (item.FieldType == typeof(bool))
                        {
                            item.SetValue(this, FbRemoteConfigInstance.GetValue(k).LongValue == 1 ? true : false);
                        }

#if UNITY_EDITOR
                        if (oldValue != item.GetValue(this).ToString())
                        {
                            Logger.Warning(k + ": Remote Value Updated: " + oldValue + "-->" + item.GetValue(this));
                        }
#endif
                    }
                    else
                    {
#if UNITY_EDITOR
                        Logger.Warning(k + ": Remote Key not found!");
#endif
                    }

                }

                catch (Exception ex)
                {
                    Logger.Warning("Invalid key: " + k + "--" + ex.Message);
                }
            }
        }

    }

    bool IsSkipUpdate(string key)
    {
        return NewUserParams != null && NewUserParams.Contains(key);
    }

    public void MergePreKeys(Dictionary<string, System.Object> jsonDict, string pre)
    {
        foreach (KeyValuePair<string, System.Object> data in jsonDict)
        {
            if (IsSkipUpdate(pre + data.Key))
            {
                continue;
            }
            try
            {
                var item = typeof(RemoteConfig).GetField(pre + data.Key);
                if (item != null)
                {
#if UNITY_EDITOR
                    string oldValue = item.GetValue(this).ToString();
#endif
                    if (item.FieldType == typeof(string))
                    {
                        item.SetValue(this, data.Value.ToString());
                    }
                    else if (item.FieldType == typeof(float))
                    {
                        item.SetValue(this, float.Parse(data.Value.ToString()));
                    }
                    else if (item.FieldType == typeof(int))
                    {
                        item.SetValue(this, int.Parse(data.Value.ToString()));
                    }
                    else if (item.FieldType == typeof(bool))
                    {
                        item.SetValue(this, int.Parse(data.Value.ToString()) == 1 ? true : false);
                    }
#if UNITY_EDITOR
                    if (oldValue != item.GetValue(this).ToString())
                    {
                        Logger.Warning(pre + data.Key + ": Remote Value Updated: " + oldValue + "-->" + item.GetValue(this));
                    }
#endif
                }
                else
                {
                    Logger.Warning(pre + data.Key + ": Remote Key not found!");
                }
            }
            catch (Exception ex)
            {
                Logger.Warning("Invalid key: " + pre + data.Key + "--" + ex.Message);
            }
        }
    }
}