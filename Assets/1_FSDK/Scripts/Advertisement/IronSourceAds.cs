namespace FSDK.Ads
{
    using com.adjust.sdk;
    using UnityEngine;

    public class IronSourceAds : IAdvertisement
    {
        private IConfigureData _configureData;
        public IConfigureData ConfigureData
        {
            get
            {
                if (this._configureData == null)
                {
                    this._configureData = new IronSourceConfigureData();
                }

                return this._configureData;
            }
        }

        private bool _useBanner;
        public bool UseBanner => this._useBanner;

        private BannerPosition _position;

        public void Init()
        {
            this._useBanner = true;
            this._position = BannerPosition.Bottom;

#if EXISTED_IRON_SOURCE
            IronSource.Agent.setConsent(true);
            IronSource.Agent.setMetaData("is_child_directed", "false");
            IronSource.Agent.shouldTrackNetworkState(true);

#if UNITY_ANDROID
            IronSource.Agent.init(RemoteConfig.instance.IRC_ADR);
#elif UNITY_IOS
            IronSource.Agent.init(RemoteConfig.instance.IRC_IOS);
#endif

            IronSource.Agent.validateIntegration();
            IronSource.Agent.shouldTrackNetworkState(true);
#endif
        }

        #region Banner
        public void InitBanner()
        {
#if EXISTED_IRON_SOURCE
            switch (_position)
            {
                case BannerPosition.Top:
                    IronSource.Agent.loadBanner(IronSourceBannerSize.SMART, IronSourceBannerPosition.TOP);
                    break;
                case BannerPosition.Bottom:
                    IronSource.Agent.loadBanner(IronSourceBannerSize.SMART, IronSourceBannerPosition.BOTTOM);
                    break;
            }

            IronSourceEvents.onBannerAdLoadFailedEvent += this.OnLoadBannerFailed;
#endif
        }

#if EXISTED_IRON_SOURCE
        private void OnLoadBannerFailed(IronSourceError obj)
        {
            switch (this._position)
            {
                case BannerPosition.Top:
                    IronSource.Agent.loadBanner(IronSourceBannerSize.SMART, IronSourceBannerPosition.TOP);
                    break;
                case BannerPosition.Bottom:
                    IronSource.Agent.loadBanner(IronSourceBannerSize.SMART, IronSourceBannerPosition.BOTTOM);
                    break;
            }
        }
#endif

        public void ShowBanner()
        {
#if EXISTED_IRON_SOURCE
            IronSource.Agent.displayBanner();
#endif
        }

        public void HideBanner()
        {
#if EXISTED_IRON_SOURCE
            IronSource.Agent.hideBanner();
#endif
        }
        #endregion


        #region Interstitial
        public void InitInterstitial()
        {
#if EXISTED_IRON_SOURCE
            IronSourceEvents.onInterstitialAdOpenedEvent += OnInterstitialOpenEvent;  //intershow
            IronSourceEvents.onInterstitialAdLoadFailedEvent += OnInterstitialAdLoadFailedEvent; //load failed
            IronSourceEvents.onInterstitialAdShowFailedEvent += OnInterstitialAdShowFailedEvent;
            IronSourceEvents.onInterstitialAdClosedEvent += OnInterstitialClosedEvent;
            IronSourceEvents.onInterstitialAdReadyEvent += OnInterstitialAdReadyEvent; //load success

            IronSource.Agent.loadInterstitial();
#endif
        }

        private void OnInterstitialOpenEvent()
        {
            Debug.Log("[IronSource] OnInterstitialAdOpenEvent");
            AdsServices.OnInterstitialAdOpenEvent?.Invoke();
            LogPlacement("ad_inter_show");
        }

        private void LogPlacement(string nameEvent)
        {
            Firebase.Analytics.Parameter[] AdParameters = {
                new Firebase.Analytics.Parameter("placement", PlacementManager.placement),
            };
            Firebase.Analytics.FirebaseAnalytics.LogEvent(nameEvent, AdParameters);
        }

#if EXISTED_IRON_SOURCE
        private void OnInterstitialAdLoadFailedEvent(IronSourceError error)
        {
            Debug.Log("[IronSource] OnInterstitialAdLoadFailedEvent");
            this.LoadInterstitial();
            LogPlacement("ad_inter_load_fail");
        }

        private void OnInterstitialAdShowFailedEvent(IronSourceError error)
        {
            Debug.Log("[IronSource] OnInterstitialAdShowFailedEvent");
            this.LoadInterstitial();
        }
#endif

        private void OnInterstitialClosedEvent()
        {
            Debug.Log("[IronSource] OnInterstitialAdCloseEvent");
            this.LoadInterstitial();

            AdsServices.OnInterstitialAdCloseEvent?.Invoke();
        }

        private void OnInterstitialAdReadyEvent()
        {
            Debug.Log("[IronSource] OnInterstitialAdReadyEvent");
            AdsServices.OnInterstitialAdReadyEvent?.Invoke();
            LogPlacement("ad_inter_load_success");
        }

        public bool IsInterstitialReady()
        {
#if EXISTED_IRON_SOURCE
            return IronSource.Agent.isInterstitialReady();
#else       
            return true;
#endif
        }

        public void LoadInterstitial()
        {
#if EXISTED_IRON_SOURCE
            IronSource.Agent.loadInterstitial();
#endif
        }

        public void ShowInterstitial()
        {
#if EXISTED_IRON_SOURCE
            IronSource.Agent.showInterstitial();
#endif
        }
        #endregion


        #region RewaredAd
        public void InitRewardedVideo()
        {
#if EXISTED_IRON_SOURCE
            IronSourceEvents.onRewardedVideoAdOpenedEvent += OnRewardedAdOpenEvent;  //show success
            IronSourceEvents.onRewardedVideoAdClosedEvent += OnRewardedAdCloseEvent;
            IronSourceEvents.onRewardedVideoAdReadyEvent += OnRewardedAdReadyEvent;  //reward load
            IronSourceEvents.onRewardedVideoAdLoadFailedEvent += OnRewardedAdLoadFailedEvent; //show failed
            IronSourceEvents.onRewardedVideoAdRewardedEvent += OnRewardedAdRewardedEvent; //complete
            IronSourceEvents.onRewardedVideoAvailabilityChangedEvent += OnRewardedAdAvailabilityChangedEvent;
#endif
        }

        public bool IsRewardedVideoReady()
        {
#if EXISTED_IRON_SOURCE
            return IronSource.Agent.isRewardedVideoAvailable();
#else       
            return true;
#endif
        }

        public void LoadRewardedVideo()
        {
            Debug.Log("[IronSource] RewardedAd automatically load");
        }

        private void OnRewardedAdOpenEvent()
        {
            Debug.Log("[IronSource] OnRewardedAdOpenEvent");
            AdsServices.OnRewardedAdOpenEvent?.Invoke();
            LogPlacement("ads_reward_show_success");
        }

        private void OnRewardedAdCloseEvent()
        {
            Debug.Log("[IronSource] OnRewardedAdCloseEvent");
            AdsServices.OnRewardedAdCloseEvent?.Invoke();
        }

        private void OnRewardedAdReadyEvent()
        {
            Debug.Log("[IronSource] OnRewardedAdReadyEvent");
            AdsServices.OnRewardedAdReadyEvent?.Invoke();
            LogPlacement("ads_reward_load");
        }

#if EXISTED_IRON_SOURCE
        private void OnRewardedAdLoadFailedEvent(IronSourceError error)
        {
            Debug.Log("[IronSource] OnRewardedAdLoadFailedEvent");
            AdsServices.OnRewardedAdLoadFailedEvent?.Invoke();
            LogPlacement("ads_reward_show_fail");
        }

        private void OnRewardedAdRewardedEvent(IronSourcePlacement obj)
        {
            Debug.Log("[IronSource] OnRewardedAdRewardedEvent");
            AdsServices.OnRewardedAdRewardedEvent?.Invoke();
            LogPlacement("ads_reward_complete");
        }
#endif

        private void OnRewardedAdAvailabilityChangedEvent(bool available)
        {
            Debug.Log("[IronSource] OnRewardedAdAvailabilityChangedEvent");
            AdsServices.OnRewardedAdAvailabilityChangedEvent?.Invoke(available);
        }

        public void ShowRewardedVideo()
        {
#if EXISTED_IRON_SOURCE
            IronSource.Agent.showRewardedVideo();
#endif
        }
        #endregion


        public void InitMeasureAdRevenue()
        {
#if EXISTED_ADJUST
            IronSourceEvents.onImpressionDataReadyEvent += ImpressionDataReadyEvent;
#endif
#if EXISTED_IRON_SOURCE
            IronSourceEvents.onImpressionDataReadyEvent += ImpressionSuccessEvent;
#endif
        }

        public void OnPause(bool pause)
        {
#if EXISTED_IRON_SOURCE
            IronSource.Agent.onApplicationPause(pause);
#endif
        }

        public void OnDestroy()
        {
#if EXISTED_IRON_SOURCE
            IronSourceEvents.onBannerAdLoadFailedEvent -= this.OnLoadBannerFailed;

            IronSourceEvents.onInterstitialAdOpenedEvent -= OnInterstitialOpenEvent;
            IronSourceEvents.onInterstitialAdLoadFailedEvent -= OnInterstitialAdLoadFailedEvent;
            IronSourceEvents.onInterstitialAdShowFailedEvent -= OnInterstitialAdShowFailedEvent;
            IronSourceEvents.onInterstitialAdClosedEvent -= OnInterstitialClosedEvent;
            IronSourceEvents.onInterstitialAdReadyEvent -= OnInterstitialAdReadyEvent;

            IronSourceEvents.onRewardedVideoAdOpenedEvent -= OnRewardedAdOpenEvent;
            IronSourceEvents.onRewardedVideoAdClosedEvent -= OnRewardedAdCloseEvent;
            IronSourceEvents.onRewardedVideoAdReadyEvent -= OnRewardedAdReadyEvent;
            IronSourceEvents.onRewardedVideoAdLoadFailedEvent -= OnRewardedAdLoadFailedEvent;
            IronSourceEvents.onRewardedVideoAdRewardedEvent -= OnRewardedAdRewardedEvent;
            IronSourceEvents.onRewardedVideoAvailabilityChangedEvent -= OnRewardedAdAvailabilityChangedEvent;
#endif
        }
#if EXISTED_ADJUST
        private void ImpressionDataReadyEvent(IronSourceImpressionData impressionData)
        {
            AdjustAdRevenue adjustAdRevenue = new AdjustAdRevenue(AdjustConfig.AdjustAdRevenueSourceIronSource);
            adjustAdRevenue.setRevenue(impressionData.revenue.Value, "USD");
            // optional fields
            adjustAdRevenue.setAdRevenueNetwork(impressionData.adNetwork);
            adjustAdRevenue.setAdRevenueUnit(impressionData.adUnit);
            adjustAdRevenue.setAdRevenuePlacement(impressionData.placement);
            // track Adjust ad revenue
            Adjust.trackAdRevenue(adjustAdRevenue);
        }
#endif
#if EXISTED_IRON_SOURCE
        private void ImpressionSuccessEvent(IronSourceImpressionData impressionData)
        {
            if (impressionData != null)
            {
                Firebase.Analytics.Parameter[] AdParameters = {
                new Firebase.Analytics.Parameter("ad_platform", "ironSource"),
                new Firebase.Analytics.Parameter("ad_source", impressionData.adNetwork),
                new Firebase.Analytics.Parameter("ad_unit_name", impressionData.instanceName),
                new Firebase.Analytics.Parameter("ad_format", impressionData.adUnit),
                new Firebase.Analytics.Parameter("currency","USD"),
                new Firebase.Analytics.Parameter("value", impressionData.revenue.Value)
            };
                Firebase.Analytics.FirebaseAnalytics.LogEvent("ad_impression", AdParameters);
            }
        }
#endif

    }
}