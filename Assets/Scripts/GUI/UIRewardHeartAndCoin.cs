using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class UIRewardHeartAndCoin : UIElement
{
    public override bool ManualHide => false;
    public override bool DestroyOnHide => true;
    public override bool UseBehindPanel => true;

    [SerializeField] Button claimButton;

    [SerializeField] TextMeshProUGUI heartIndex;
    [SerializeField] TextMeshProUGUI coinIndex;

    RewardHeartAndCoinSO rewardHeartAndCoinSO;

    public void SetUp(RewardHeartAndCoinSO rewardHeartAndCoinSO)
    {
        this.rewardHeartAndCoinSO = rewardHeartAndCoinSO;
        heartIndex.text = rewardHeartAndCoinSO.heartIndex.ToString();
        coinIndex.text = rewardHeartAndCoinSO.coinIndex.ToString();
    }
    public void ClaimButton()
    {
        AudioManager.Instance.PlayButtonSound();
        Hide();
    }

    private void Start()
    {
        claimButton.onClick.AddListener(ClaimButton);
    }
}
