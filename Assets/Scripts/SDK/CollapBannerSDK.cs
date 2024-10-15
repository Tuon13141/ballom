using System;
using UnityEngine;
using GoogleMobileAds.Api;
using System.Collections.Generic;

public class CollapBannerSDK : MonoBehaviour
{
    private BannerView _bannerView;
    [Header("Google Mobile Ads ID")]
    [SerializeField] private String Android = "ca-app-pub-3940256099942544/2014213617";
    [SerializeField] private String IOS = "ca-app-pub-3940256099942544/8388050270";
    [Header("ID Device Test")]
    [SerializeField] private String _Android = "96e23e80653bb28980d3f40beb58915c";
    [SerializeField] private String _IOS = "75EF8D155528C04DACBBA6F36F433035";
    private string _adUnitId;
    private void Start()
    {
        // Set your test devices.
        // https://developers.google.com/admob/unity/test-ads
        RequestConfiguration requestConfiguration = new RequestConfiguration
        {
            TestDeviceIds = new List<string>
                {
                    AdRequest.TestDeviceSimulator,
                    // Add your test device IDs (replace with your own device IDs).
                    #if UNITY_IPHONE
                    _IOS
                    #elif UNITY_ANDROID
                    _Android
                    #endif
                }
        };
        MobileAds.SetRequestConfiguration(requestConfiguration);

        // Initialize the Google Mobile Ads SDK.
        MobileAds.Initialize((InitializationStatus status) =>
        {
            RequestBanner();
        });
    }
    /// <summary>
    /// Creates a 320x50 banner view at top of the screen.
    /// </summary>
    public void CreateBannerView()
    {
        // These ad units are configured to always serve test ads.
#if UNITY_ANDROID
        _adUnitId = Android;
#elif UNITY_IPHONE
        _adUnitId = IOS;
#else
        _adUnitId = "unexpected_platform";
#endif
        // If we already have a banner, destroy the old one.
        if (_bannerView != null)
        {
            _bannerView.Destroy();
        }

        AdSize adaptiveSize =
            AdSize.GetPortraitAnchoredAdaptiveBannerAdSizeWithWidth(AdSize.FullWidth);

        // Create a 320x50 banner at top of the screen
        _bannerView = new BannerView(_adUnitId, adaptiveSize, AdPosition.Bottom);
        ListenToAdEvents();
    }

    /// <summary>
    /// Creates the banner view and loads a banner ad.
    /// </summary>
    public void RequestBanner()
    {
        // create an instance of a banner view first.
        if (_bannerView == null)
        {
            CreateBannerView();
        }

        // create our request used to load the ad.
        AdRequest adRequest = new AdRequest();
        adRequest.Extras.Add("collapsible", "bottom");
        adRequest.Extras.Add("collapsible_request_id", Guid.NewGuid().ToString());

        // send the request to load the ad.
        Debug.LogError("CollapsibleBanner > Loading banner ad.");
        _bannerView?.LoadAd(adRequest);
    }


    private void ListenToAdEvents()
    {
        // Register for ad events.
        _bannerView.OnBannerAdLoaded += OnBannerAdLoaded;
        _bannerView.OnBannerAdLoadFailed += OnBannerAdLoadFailed;
    }

    #region Banner callback handlers
    private void OnBannerAdLoaded()
    {
        Debug.Log("Banner view loaded an ad with response : "
                 + _bannerView.GetResponseInfo());
        Debug.Log("Ad Height: " + _bannerView.GetHeightInPixels().ToString() + ", width: " + _bannerView.GetWidthInPixels().ToString());
    }

    private void OnBannerAdLoadFailed(LoadAdError error)
    {
        Debug.LogError("Banner view failed to load an ad with error : "
                + error);
    }

    #endregion



    //private void Start()
    //{
    //    LoadAd();
    //}
    //public void CreateBannerView()
    //{
    //    Debug.LogError("CollapsibleBanner > CreateBannerView");

    //    // If we already have a banner, destroy the old one.
    //    if (_bannerView != null)
    //    {
    //        _bannerView.Destroy();
    //    }

    //    AdSize adaptiveSize =
    //        AdSize.GetPortraitAnchoredAdaptiveBannerAdSizeWithWidth(AdSize.FullWidth);

    //    // Create a 320x50 banner at top of the screen
    //    _bannerView = new BannerView(Android, adaptiveSize, AdPosition.Bottom);
    //}

    ///// <summary>
    ///// Creates the banner view and loads a banner ad.
    ///// </summary>
    //public void LoadAd()
    //{
    //    // create an instance of a banner view first.
    //    if (_bannerView == null)
    //    {
    //        CreateBannerView();
    //    }

    //    // create our request used to load the ad.
    //    var adRequest = new AdRequest();
    //    adRequest.Extras.Add("collapsible", "bottom");
    //    adRequest.Extras.Add("collapsible_request_id", Guid.NewGuid().ToString());

    //    // send the request to load the ad.
    //    Debug.LogError("CollapsibleBanner > Loading banner ad.");
    //    _bannerView?.LoadAd(adRequest);
    //}
}
