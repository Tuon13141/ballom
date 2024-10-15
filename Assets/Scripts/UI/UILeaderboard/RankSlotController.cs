using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using SuperScrollView;
public class RankSlotController : MonoBehaviour
{
    [SerializeField] List<PlayerData> playerDatas = new();

    [SerializeField] List<PlayerData> weeklyWinnerDatas = new();
    [SerializeField] List<PlayerData> topPlayerDatas = new();

    [SerializeField] GridViewRankSlot weeklyRankGridView;
    [SerializeField] GridViewRankSlot topPlayerGridView;
    private void Start()
    {
        SetUp();
    }

    public void SetUp()
    {
        // Lấy data từ sv
        // Do demo nên sẽ fake 1 list

        playerDatas = new List<PlayerData>
        {
            new PlayerData { name = "Alice", score = 1200, weeklyScore = 200 },
            new PlayerData { name = "Bob", score = 1500, weeklyScore = 300 },
            new PlayerData { name = "Charlie", score = 1400, weeklyScore = 250 },
            new PlayerData { name = "Daisy", score = 1000, weeklyScore = 150 },
            new PlayerData { name = "Eve", score = 1100, weeklyScore = 180 }
        };
        
        SortByWeeklyScore();
        SortByScore();
    }

    private void SortByWeeklyScore()
    {
        weeklyWinnerDatas = playerDatas.OrderByDescending(p => p.weeklyScore).ToList();
        weeklyRankGridView.OnStart(weeklyWinnerDatas.Count, weeklyWinnerDatas, RankType.Weekly);
    }

    private void SortByScore()
    {
        topPlayerDatas = playerDatas.OrderByDescending(p => p.score).ToList();
        topPlayerGridView.OnStart(topPlayerDatas.Count, topPlayerDatas, RankType.Top);
    }
}
