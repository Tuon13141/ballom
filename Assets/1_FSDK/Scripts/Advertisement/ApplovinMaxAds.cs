﻿namespace FSDK.Ads
{
    using UnityEngine;

    public class ApplovinMaxAds : IAdvertisement
    {
        private IConfigureData _configureData;
        public IConfigureData ConfigureData
        {
            get
            {
                if (this._configureData == null)
                {
                    this._configureData = new MaxConfigureData();
                }

                return this._configureData;
            }
        }

        private bool _useBanner;
        public  bool UseBanner => this._useBanner;
        
        private BannerPosition _position;

        private string _bannerAdId;
        private string _interstitialAdId;
        private string _rewardedAdId;

        public void Init()
        {
            this._useBanner = true;
            this._position  = BannerPosition.Bottom;

#if UNITY_IOS
            this._bannerAdId = RemoteConfig.instance.Max_BannerAdUnitId_IOS;
            this._interstitialAdId = RemoteConfig.instance.Max_InterstitialAdUnitId_IOS;
            this._rewardedAdId = RemoteConfig.instance.Max_RewardedAdUnitId_IOS;
#else
            this._bannerAdId = RemoteConfig.instance.Max_BannerAdUnitId;
            this._interstitialAdId = RemoteConfig.instance.Max_InterstitialAdUnitId;
            this._rewardedAdId = RemoteConfig.instance.Max_RewardedAdUnitId;
#endif

#if EXISTED_MAX_SDK
            MaxSdk.SetSdkKey(RemoteConfig.instance.Max_SDKKey);
            MaxSdk.InitializeSdk();
#endif
        }

        #region Banner
        public void InitBanner()
        {
#if EXISTED_MAX_SDK
            switch (_position)
            {
                case BannerPosition.Top:
                    MaxSdk.CreateBanner(this._bannerAdId, MaxSdkBase.BannerPosition.TopCenter);
                    break;
                case BannerPosition.Bottom:
                    MaxSdk.CreateBanner(this._bannerAdId, MaxSdkBase.BannerPosition.BottomCenter);
                    break;
            }

            if (RemoteConfig.instance.UpdateBannerSize == 1)
            {
                MaxSdk.SetBannerWidth(this._bannerAdId, (float)Screen.width * 160 / Screen.dpi);
            }
            else
            {
                if (FSDKServices.IsTablet())
                {
                    MaxSdk.SetBannerWidth(this._bannerAdId, 728);
                }
                else
                {
                    MaxSdk.SetBannerWidth(this._bannerAdId, 320);
                }
            }

            MaxSdk.SetBannerBackgroundColor(this._bannerAdId, Color.clear);
            MaxSdkCallbacks.Banner.OnAdLoadFailedEvent += OnBannerAdLoadFailed;
#endif
            
            //this.ShowBanner();
        }
        
#if EXISTED_MAX_SDK
        private void OnBannerAdLoadFailed(string adUnit, MaxSdkBase.ErrorInfo error) 
        {
            switch (this._position)
            {
                case BannerPosition.Top:
                    MaxSdk.CreateBanner(this._bannerAdId, MaxSdkBase.BannerPosition.TopCenter);
                    break;
                case BannerPosition.Bottom:
                    MaxSdk.CreateBanner(this._bannerAdId, MaxSdkBase.BannerPosition.BottomCenter);
                    break;
            }

            if (FSDKServices.IsTablet())
            {
                MaxSdk.SetBannerWidth(this._bannerAdId, 728);
            }
            else
            {
                MaxSdk.SetBannerWidth(this._bannerAdId, 320);
            }
            
            MaxSdk.SetBannerBackgroundColor(this._bannerAdId, Color.clear);
        }
#endif

        public void ShowBanner()
        {
#if EXISTED_MAX_SDK
            MaxSdk.ShowBanner(this._bannerAdId);
#endif
        }
        
        public void HideBanner()
        {
#if EXISTED_MAX_SDK
            MaxSdk.HideBanner(this._bannerAdId);
#endif
        }
        #endregion

        
        #region Interstitial
        public void InitInterstitial()
        {
#if EXISTED_MAX_SDK
            MaxSdkCallbacks.Interstitial.OnAdDisplayedEvent     += OnInterstitialAdOpenEvent;
            MaxSdkCallbacks.Interstitial.OnAdLoadedEvent        += OnInterstitialAdReadyEvent;
            MaxSdkCallbacks.Interstitial.OnAdLoadFailedEvent    += OnInterstitialFailedEvent;
            MaxSdkCallbacks.Interstitial.OnAdDisplayFailedEvent += OnInterstitialFailedToDisplayEvent;
            MaxSdkCallbacks.Interstitial.OnAdHiddenEvent        += OnInterstitialAdCloseEvent;
            
            MaxSdk.LoadInterstitial(this._interstitialAdId);
#endif
        }
        
#if EXISTED_MAX_SDK
        private void OnInterstitialAdOpenEvent(string adUnitId, MaxSdkBase.AdInfo info)
        {
            Debug.Log("[MAX] OnInterstitialAdOpenEvent");
            AdsServices.OnInterstitialAdOpenEvent?.Invoke();
        }
        
        private void OnInterstitialAdReadyEvent(string adUnitId, MaxSdkBase.AdInfo info)
        {
            Debug.Log("[MAX] OnInterstitialAdReadyEvent");
            AdsServices.OnInterstitialAdReadyEvent?.Invoke();
        }
        
        private void OnInterstitialFailedEvent(string adUnitId, MaxSdkBase.ErrorInfo error)
        {
            Debug.Log("[MAX] OnInterstitialFailedEvent");
            this.LoadInterstitial();
        }
        
        private void OnInterstitialFailedToDisplayEvent(string adUnitId, MaxSdkBase.ErrorInfo error, MaxSdkBase.AdInfo info)
        {
            Debug.Log("[MAX] OnInterstitialFailedToDisplayEvent");
            this.LoadInterstitial();
        }
        
        private void OnInterstitialAdCloseEvent(string adUnitId, MaxSdkBase.AdInfo info)
        {
            Debug.Log("[MAX] OnInterstitialAdCloseEvent");
            this.LoadInterstitial();
            
            AdsServices.OnInterstitialAdCloseEvent?.Invoke();
        }
#endif

        public bool IsInterstitialReady()
        {
#if EXISTED_MAX_SDK
            return MaxSdk.IsInterstitialReady(this._interstitialAdId);
#else       
            return true;
#endif
        }
        
        public void LoadInterstitial()
        {
#if EXISTED_MAX_SDK
            MaxSdk.LoadInterstitial(this._interstitialAdId);
#endif
        }
        
        public void ShowInterstitial()
        {
#if EXISTED_MAX_SDK
            MaxSdk.ShowInterstitial(this._interstitialAdId);
#endif
        }
        #endregion

        
        #region RewaredAd
        public void InitRewardedVideo()
        {
#if EXISTED_MAX_SDK
            MaxSdkCallbacks.Rewarded.OnAdDisplayedEvent      += OnRewardedAdOpenEvent;
            MaxSdkCallbacks.Rewarded.OnAdLoadFailedEvent     += OnRewardedAdLoadFailedEvent;
            MaxSdkCallbacks.Rewarded.OnAdLoadedEvent         += OnRewardedAdLoadedEvent;
            MaxSdkCallbacks.Rewarded.OnAdDisplayFailedEvent  += OnRewardedAdFailedToDisplayEvent;
            MaxSdkCallbacks.Rewarded.OnAdHiddenEvent         += OnRewardedAdCloseEvent;
            MaxSdkCallbacks.Rewarded.OnAdReceivedRewardEvent += OnRewardedAdRewardedEvent;
            
            MaxSdk.LoadRewardedAd(this._rewardedAdId);
#endif
        }
        
#if EXISTED_MAX_SDK
        private void OnRewardedAdOpenEvent(string adUnitId, MaxSdkBase.AdInfo info)
        {
            Debug.Log("[MAX] OnRewardedAdOpenEvent");
            AdsServices.OnRewardedAdOpenEvent?.Invoke();
        }
        
        private void OnRewardedAdCloseEvent(string adUnitId, MaxSdkBase.AdInfo info)
        {
            Debug.Log("[MAX] OnRewardedAdCloseEvent");
            AdsServices.OnRewardedAdCloseEvent?.Invoke();
        }

        private void OnRewardedAdLoadFailedEvent(string adUnitId, MaxSdkBase.ErrorInfo error)
        {
            Debug.Log("[MAX] OnRewardedAdLoadFailedEvent");
            AdsServices.OnRewardedAdLoadFailedEvent?.Invoke();
        }
        
        private void OnRewardedAdLoadedEvent(string adUnitId, MaxSdkBase.AdInfo info)
        {
            Debug.Log("[MAX] OnRewardedAdReadyEvent");
            AdsServices.OnRewardedAdReadyEvent?.Invoke();
        }
        
        private void OnRewardedAdFailedToDisplayEvent(string adUnitId, MaxSdkBase.ErrorInfo error, MaxSdkBase.AdInfo info)
        {
            Debug.Log("[MAX] OnRewardedAdFailedToDisplayEvent");
            this.LoadRewardedVideo();
        }

        private void OnRewardedAdRewardedEvent(string adUnitId, MaxSdkBase.Reward reward, MaxSdkBase.AdInfo info)
        {
            Debug.Log("[MAX] OnRewardedAdRewardedEvent");
            AdsServices.OnRewardedAdRewardedEvent?.Invoke();
        }
#endif
        
        public bool IsRewardedVideoReady()
        {
#if EXISTED_MAX_SDK
            return MaxSdk.IsRewardedAdReady(this._rewardedAdId);
#else
            return true;
#endif
        }
        
        public void LoadRewardedVideo()
        {
            Debug.Log("[MAX] RewardedAd load");
#if EXISTED_MAX_SDK
            MaxSdk.LoadRewardedAd(this._rewardedAdId);
#endif
        }

        public void ShowRewardedVideo()
        {
#if EXISTED_MAX_SDK
            MaxSdk.ShowRewardedAd(this._rewardedAdId);
#endif
        }
        #endregion
        

        public void InitMeasureAdRevenue()
        {
#if EXISTED_MAX_SDK
            MaxSdkCallbacks.Interstitial.OnAdRevenuePaidEvent += OnAdRevenuePaidEvent;
            MaxSdkCallbacks.Rewarded.OnAdRevenuePaidEvent += OnAdRevenuePaidEvent;
            MaxSdkCallbacks.Banner.OnAdRevenuePaidEvent += OnAdRevenuePaidEvent;
            MaxSdkCallbacks.MRec.OnAdRevenuePaidEvent += OnAdRevenuePaidEvent;
#endif
        }

#if EXISTED_MAX_SDK
        private void OnAdRevenuePaidEvent(string adUnitId, MaxSdkBase.AdInfo impressionData)
        {
            double revenue = impressionData.Revenue;
            var impressionParameters = new[] {
                new Firebase.Analytics.Parameter("ad_platform", "AppLovin"),
                new Firebase.Analytics.Parameter("ad_source", impressionData.NetworkName),
                new Firebase.Analytics.Parameter("ad_unit_name", impressionData.AdUnitIdentifier),
                new Firebase.Analytics.Parameter("ad_format", impressionData.Placement),
                new Firebase.Analytics.Parameter("value", revenue),
                new Firebase.Analytics.Parameter("currency", "USD"), // All AppLovin revenue is sent in USD
            };
            Firebase.Analytics.FirebaseAnalytics.LogEvent("ad_impression", impressionParameters);
        }
#endif

        public void OnPause(bool pause)
        {
#if EXISTED_MAX_SDK
            
#endif
        }
        
        public void OnDestroy()
        {
#if EXISTED_MAX_SDK
            MaxSdkCallbacks.Banner.OnAdLoadFailedEvent          -= OnBannerAdLoadFailed;
            
            MaxSdkCallbacks.Interstitial.OnAdDisplayedEvent     -= OnInterstitialAdOpenEvent;
            MaxSdkCallbacks.Interstitial.OnAdLoadedEvent        -= OnInterstitialAdReadyEvent;
            MaxSdkCallbacks.Interstitial.OnAdLoadFailedEvent    -= OnInterstitialFailedEvent;
            MaxSdkCallbacks.Interstitial.OnAdDisplayFailedEvent -= OnInterstitialFailedToDisplayEvent;
            MaxSdkCallbacks.Interstitial.OnAdHiddenEvent        -= OnInterstitialAdCloseEvent;
            
            MaxSdkCallbacks.Rewarded.OnAdDisplayedEvent      -= OnRewardedAdOpenEvent;
            MaxSdkCallbacks.Rewarded.OnAdLoadFailedEvent     -= OnRewardedAdLoadFailedEvent;
            MaxSdkCallbacks.Rewarded.OnAdLoadedEvent         -= OnRewardedAdLoadedEvent;
            MaxSdkCallbacks.Rewarded.OnAdDisplayFailedEvent  -= OnRewardedAdFailedToDisplayEvent;
            MaxSdkCallbacks.Rewarded.OnAdHiddenEvent         -= OnRewardedAdCloseEvent;
            MaxSdkCallbacks.Rewarded.OnAdReceivedRewardEvent -= OnRewardedAdRewardedEvent;

            MaxSdkCallbacks.Interstitial.OnAdRevenuePaidEvent   -= OnAdRevenuePaidEvent;
            MaxSdkCallbacks.Rewarded.OnAdRevenuePaidEvent       -= OnAdRevenuePaidEvent;
            MaxSdkCallbacks.Banner.OnAdRevenuePaidEvent         -= OnAdRevenuePaidEvent;
            MaxSdkCallbacks.MRec.OnAdRevenuePaidEvent           -= OnAdRevenuePaidEvent;
#endif
        }
    }
}