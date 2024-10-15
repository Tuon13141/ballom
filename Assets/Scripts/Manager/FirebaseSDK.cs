using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Firebase;
using Firebase.Database;
using Firebase.Extensions;
using System.Threading.Tasks;
using System.IO;
using System;

public class FirebaseSDK : MonoBehaviour
{
    public enum FirebaseStatus
    {
        INIT,
        AVAILABLE,
        READY,
        FAILED
    }
    
    public delegate void InitializedHandler(bool success);
    public event InitializedHandler onInitialized;

    public static FirebaseSDK instance;
    static FirebaseStatus firebaseStatus = FirebaseStatus.INIT;

    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }
        else if (instance != null)
        {
            Destroy(gameObject);
        }
    }
    void Start()
    {
        Firebase.FirebaseApp.CheckAndFixDependenciesAsync().ContinueWithOnMainThread(task =>
        {
            if (task.Result == DependencyStatus.Available)
            {
                firebaseStatus = FirebaseStatus.READY;
            }
            else
            {
                Logger.Error(String.Format("Could not resolve all Firebase dependencies: {0}", task.Result));
                firebaseStatus = FirebaseStatus.FAILED;
            }
            onInitialized(firebaseStatus == FirebaseStatus.READY);
        });
    }
}
