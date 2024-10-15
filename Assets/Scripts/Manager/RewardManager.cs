using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RewardManager : Singleton<RewardManager>
{
    [SerializeField] List<RewardHeartAndCoinSO> rewardHeartAndCoinSOs;
    public List<RewardHeartAndCoinSO> RewardHeartAndCoinSOs => rewardHeartAndCoinSOs;
}
