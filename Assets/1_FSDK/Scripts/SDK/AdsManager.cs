namespace FSDK.Ads
{
    using com.adjust.sdk;
    using GoogleMobileAds.Api;
    using GoogleMobileAds.Ump.Api;
    using System;
    using System.Collections;
    using System.Threading.Tasks;
    using UnityEngine;
#if UNITY_IOS
    using Unity.Advertisement.IosSupport;
#endif

    public partial class AdsManager : PersistentSingleton<AdsManager>
    {
        private const string BannerAdType = "banner";
        private const string RewardedAdType = "rewarded_video";
        private const string InterstitialAdType = "interstitial";

        private IAdvertisement _ads;

        private Action OnReward;
        private Action OnFail;

        private bool _isFinishWatchAds;
        private bool isCaching;
        private float nextAdsTime = 0;
        private int nextGameCount = 0;

        private string aj_inters_show = "axsy1f";
        private string aj_inters_displayed = "nechw7";

        private string aj_rewarded_show = "j466i0";
        private string aj_rewarded_displayed = "qvzhuf";

        protected override void Awake()
        {
            this.Setup();
            base.Awake();
        }

        private void Setup()
        {
#if EXISTED_IRON_SOURCE
            this._ads = new IronSourceAds();
#elif EXISTED_MAX_SDK
            this._ads = new ApplovinMaxAds();
#else
            this._ads = new DummyAds();
#endif

            RemoteConfig.onLoaded += Init;
        }

        public void Init()
        {
            StartCoroutine(InitIRC());
        }

        private IEnumerator InitIRC()
        {
#if EXISTED_IRON_SOURCE
            while (!GlobalConfig.instance.isCacheIrcConsent)
            {
                yield return null;
            }
#endif
#if UNITY_IOS
            try
            {
                iOS_SetFanFlag();
            }
            catch (Exception ex)
            {

            }
#endif

            this._ads.Init();

            if (this._ads.UseBanner)
            {
                this._ads.InitBanner();
            }
            this._ads.InitInterstitial();
            this._ads.InitRewardedVideo();

            this.InitEvents();
            this._ads.InitMeasureAdRevenue();

            SetNextAdsTime(1);

            if (RemoteConfig.instance.GoogleCMPMode == 1)
            {
                // Create a ConsentRequestParameters object.
                ConsentRequestParameters request = new ConsentRequestParameters();

                // Check the current consent information status.
                ConsentInformation.Update(request, OnConsentInfoUpdated);
            }

            yield return null;
        }

        void OnConsentInfoUpdated(FormError consentError)
        {
            if (consentError != null)
            {
                // Handle the error.
                UnityEngine.Debug.LogError(consentError);
                return;
            }

            // If the error is null, the consent information state was updated.
            // You are now ready to check if a form is available.
            ConsentForm.LoadAndShowConsentFormIfRequired((FormError formError) =>
            {
                if (formError != null)
                {
                    // Consent gathering failed.
                    UnityEngine.Debug.LogError(consentError);
                    return;
                }

                // Consent has been gathered.
                if (ConsentInformation.CanRequestAds())
                {
                    MobileAds.Initialize((InitializationStatus initstatus) =>
                    {
                        // TODO: Request an ad.
                    });
                }
            });

        }

        private void InitEvents()
        {
            AdsServices.OnInterstitialAdOpenEvent = OnInterstitialAdOpen;
            AdsServices.OnInterstitialAdCloseEvent = OnInterstitialAdClosed;
            AdsServices.OnInterstitialAdReadyEvent = OnInterstitialAdReady;

            AdsServices.OnRewardedAdOpenEvent = OnRewardedAdOpen;
            AdsServices.OnRewardedAdCloseEvent = OnRewardedAdClosed;
            AdsServices.OnRewardedAdReadyEvent = OnRewardedAdReady;
            AdsServices.OnRewardedAdLoadFailedEvent = OnRewardedAdLoadFailed;
            AdsServices.OnRewardedAdRewardedEvent = OnRewardedAdRewarded;

        }

#if UNITY_IOS
        public void iOS_SetFanFlag()
        {
            bool setFanFlag;

            if ((int)ATTrackingStatusBinding.GetAuthorizationTrackingStatus() == 3)
                setFanFlag = true; //If==3, App is AUTHORIZED in settings
            else setFanFlag = false;  //DENIED, RESTRICTED or NOT DETERMINED (==2,1,0)

            AudienceNetwork.AdSettings.SetAdvertiserTrackingEnabled(setFanFlag);

        }
#endif

        #region Events
        private void OnInterstitialAdOpen()
        {
            LogAnalytic.LogInterstitialAdDisplayedEvent();
            LogAnalytic.LogAdOpenCustomEvent(InterstitialAdType);
            Firebase.Analytics.FirebaseAnalytics.LogEvent("show_inter_succeeded");
        }

        private void OnInterstitialAdClosed()
        {
            this._isFinishWatchAds = true;
            LogAnalytic.LogAdCompleteCustomEvent(InterstitialAdType);

            this.CheckReward();

            SetNextAdsTime(1);

            //LevelManager.Instance.ResetInter();
#if EXISTED_ADJUST
                LogEventAdjust(aj_inters_displayed);
#endif
        }

        private void OnInterstitialAdReady()
        {
            LogAnalytic.LogInterstitialAdApiCalledEvent();
        }

        private void OnRewardedAdOpen()
        {
            LogAnalytic.LogRewardedAdDisplayedEvent();
            LogAnalytic.LogAdOpenCustomEvent(RewardedAdType);
            Firebase.Analytics.FirebaseAnalytics.LogEvent("show_reward_successed");
        }

        private void OnRewardedAdClosed()
        {
            this.CheckReward();
            LoadRewardedAds();

            SetNextAdsTime(2);
#if EXISTED_ADJUST
                LogEventAdjust(aj_rewarded_displayed);
#endif
        }

        private void OnRewardedAdReady()
        {
            isCaching = false;
            LogAnalytic.LogRewardedAdApiCalledEvent();
        }

        private void OnRewardedAdLoadFailed()
        {
            isCaching = false;
        }

        private void OnRewardedAdRewarded()
        {
            this._isFinishWatchAds = true;
            LogAnalytic.LogRewardedAdCompleteEvent();
            LogAnalytic.LogAdCompleteCustomEvent(RewardedAdType);
        }
        #endregion

        private async void CheckReward()
        {
            await Task.Yield();

            if (this._isFinishWatchAds)
            {
                this.OnReward?.Invoke();
            }
            else
            {
                this.OnFail?.Invoke();
            }
        }

        public void ShowBanner()
        {
            if (this._ads.UseBanner)
            {
                this._ads.ShowBanner();
            }
        }

        public void HideBanner()
        {
            if (this._ads.UseBanner)
            {
                this._ads.HideBanner();
            }
        }

        public bool IsInterstitialAdReady()
        {
            return this._ads.IsInterstitialReady();
        }

        public void RequestInterstitialAd(Action onReward, Action onFail, int level, LevelDifficulty difficulty = LevelDifficulty.Normal, string where = "")
        {
            nextGameCount++;
            if ((Time.time > nextAdsTime || nextGameCount >= RemoteConfig.instance.Ad_MaxGamesBetweenFS) && GlobalConfig.instance.GetLv() >= 1)
            {
                ShowInterstitialAd(onReward, onFail, level, difficulty, where);
            }
        }

        public void ShowInterstitialAd(Action onReward, Action onFail, int level, LevelDifficulty difficulty = LevelDifficulty.Normal, string where = "")
        {

            LogAnalytic.LogInterstitialAdCallEvent();

            this._isFinishWatchAds = false;

            if (IsInterstitialAdReady())
            {
                this.OnReward = onReward;
                this.OnFail = onFail;

                this._ads.ShowInterstitial();

                LogAnalytic.LogAdShowMinorCustomEvent(InterstitialAdType, where);
                LogAnalytic.LogAdShowCustomEvent(InterstitialAdType, level, difficulty, where);

                AdjustEvent adjustEvent = new AdjustEvent("abc123");
                Adjust.trackEvent(adjustEvent);
#if EXISTED_ADJUST
                LogEventAdjust(aj_rewarded_show);
#endif
            }
            else
            {
                this._ads.LoadInterstitial();
            }
        }

        public bool IsRewardedAdReady()
        {
            return this._ads.IsRewardedVideoReady();
        }

        public void ShowRewardedAd(Action onReward, Action onFail, int level, LevelDifficulty difficulty = LevelDifficulty.Normal, string where = "", bool isRetry = false)
        {

#if UNITY_EDITOR
            //Debug.Log("ShowRewardAd");
            onReward?.Invoke();
            return;
#endif

            LogAnalytic.LogRewardedAdCallEvent();

            if (!this.IsRewardedAdReady())
            {
                LoadRewardedAds();
                if (isRetry)
                {
#if EXISTED_ADJUST
                    LogEventAdjust(aj_rewarded_show);
#endif
                    ShowInterstitialAd(onReward, onFail, level, difficulty, where);
                }
                else
                {
                    SceneFaded.instance.ShowOverlay();
                    StartCoroutine(RetryRewardedVideo(onReward, onFail, level, difficulty, where, true));
                }
                return;
            }

            this._isFinishWatchAds = false;
            this.OnReward = onReward;
            this.OnFail = onFail;

            this._ads.ShowRewardedVideo();

            LogAnalytic.LogAdShowMinorCustomEvent(RewardedAdType, where);
            LogAnalytic.LogAdShowCustomEvent(RewardedAdType, level, difficulty, where);
            //#if UNITY_EDITOR
            //            this.OnReward?.Invoke();
            //#endif
        }

        private void LoadRewardedAds()
        {
            isCaching = true;
            this._ads.LoadRewardedVideo();
        }

        private IEnumerator RetryRewardedVideo(Action onReward, Action onFail, int level, LevelDifficulty difficulty = LevelDifficulty.Normal, string where = "", bool isRetry = false)
        {
            var wait = new WaitForSeconds(0.2f);
            float time = Time.time;
            while (isCaching && Time.time - time < RemoteConfig.instance.Ad_WaitMaxTime)
            {
                yield return wait;
            }

            SceneFaded.instance.HideOverlay();
#if EXISTED_ADJUST
            LogEventAdjust(aj_rewarded_show);
#endif
            ShowRewardedAd(onReward, onFail, level, difficulty, where, isRetry);

        }

        // opt==0: Ad_DelayBeforeFirstFS
        // opt==1: Ad_DelayBetweenFS
        // opt==2: Ad_DelayBetweenRVAndFS
        public void SetNextAdsTime(int opt)
        {
            nextGameCount = 0;
            if (opt == 0)
            {
                nextAdsTime = Time.time + RemoteConfig.instance.Ad_DelayBeforeFirstFS;
            }
            else if (opt == 1)
            {
                nextAdsTime = Time.time + RemoteConfig.instance.Ad_DelayBetweenFS;
            }
            else
            {

                nextAdsTime = Time.time + RemoteConfig.instance.Ad_DelayBetweenRVAndFS;
            }
        }


        private void OnApplicationPause(bool pauseStatus)
        {
            this._ads.OnPause(pauseStatus);
        }

        private void OnDestroy()
        {
            this._ads.OnDestroy();
            this._ads = null;
        }
#if EXISTED_ADJUST
        private void LogEventAdjust(string eventName)
        {
            AdjustEvent adjustEvent = new AdjustEvent(eventName);
            Adjust.trackEvent(adjustEvent);
        }
    }
#endif

    }

