using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class RankSlot : MonoBehaviour
{
    [SerializeField] GameObject[] medals;
    [SerializeField] GameObject[] treasures;

    [SerializeField] TextMeshProUGUI[] rankTexts;
    [SerializeField] TextMeshProUGUI scoreText;
    [SerializeField] TextMeshProUGUI playerNameText;

    RankSlotController RankSlotController;

    public void SetUp(int index, PlayerData playerData, RankType rankType, RankSlotController rankSlotController)
    {
        this.RankSlotController = rankSlotController;

        int rank = index + 1;
        string name = playerData.name;
        int score = playerData.score;
        if (rankType == RankType.Weekly)
        {
            score = playerData.weeklyScore;
        }
        switch (rank)
        {
            case 1:
                medals[0].SetActive(true);
                treasures[0].SetActive(true);
                rankTexts[0].SetActive(true);
                break;
            case 2:
                medals[1].SetActive(true);
                treasures[1].SetActive(true);
                rankTexts[0].SetActive(true);
                break;
            case 3:
                medals[2].SetActive(true);
                treasures[2].SetActive(true);
                rankTexts[0].SetActive(true);
                break;
            default:
                treasures[3].SetActive(true);
                rankTexts[1].SetActive(true);
                break;
        }

        foreach(TextMeshProUGUI text in rankTexts)
        {
            text.text = rank.ToString();
        }

        scoreText.text = score.ToString();

        playerNameText.text = name;
    }

}

public enum RankType
{
    Weekly, Top,
}