using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RemoteConfig : RemoteConfigSDK
{
    public static RemoteConfig instance;
    public string LvDesign;
    public string Max_BannerAdUnitId;
    public string Max_InterstitialAdUnitId;
    public string Max_RewardedAdUnitId;
    public string Max_BannerAdUnitId_IOS;
    public string Max_InterstitialAdUnitId_IOS;
    public string Max_RewardedAdUnitId_IOS;
    public string Max_SDKKey = "M4GLwqezVT2WDo75OWFGOV873pVg6-3S3Kpz8Rxe_-9CnHI9oXPB2TI5LpnRnqvr8hpH8kw7i4KTMcc891KCad";
    public string IRC_ADR;
    public string IRC_IOS;
    public float YSelected = 1f;
    public float ZSelected = 0f;
    public float TimeDelayNoThank = 5f;
    public int StartCoin = 500;
    public float Ad_WaitMaxTime = 10f;
    public float Ad_DelayBeforeFirstFS = 30;
    public float Ad_DelayBetweenFS = 30;
    public float Ad_DelayBetweenRVAndFS = 15;
    public int Ad_MaxGamesBetweenFS = 3;
    public float atkPrice = 100f;
    public float winBonusCoin = 10f;
    public float loseBonusCoin = 3f;
    public int lvLimitAtkPrice = 20;
    public int LvShowRate = 2;
    public int ClampCoin = 0;
    public float CoinSpawnRatio = 1.25f;
    public int ClampDinoPrice = 0;
    public int UpdateBannerSize = 1;
    public int ShowInterStartLevel = 1;
    public int LevelShowInterCountDown = 1;
    public int TestPositionButton = 0;
    public string LevelName = "1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100";
    public int GoogleCMPMode = 1;

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

    protected override void Start()
    {
        base.Start();
    }

    public override void EndLoad(bool isNew = false)
    {
        if (loaded)
        {
            return;
        }

        HandingData();
        base.EndLoad(isNew);
    }

    private void HandingData()
    {
        //LoadConfigLvDesign();
    }
}
