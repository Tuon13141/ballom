using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UILeaderboard : UIElement
{
    public override bool ManualHide => false;
    public override bool DestroyOnHide => false;
    public override bool UseBehindPanel => false;


    [SerializeField] Button weeklyWinnerButton;
    [SerializeField] GameObject weeklyWinnerPanel;
    [SerializeField] GameObject weeklyWinnerUnselected;

    [SerializeField] Button topPlayerButton;
    [SerializeField] GameObject topPlayerPanel;
    [SerializeField] GameObject topPlayerUnselected;

    public void WeeklyWinnerButton()
    {
        weeklyWinnerUnselected.SetActive(true);
        weeklyWinnerPanel.SetActive(true);
        topPlayerPanel.SetActive(false);
        topPlayerUnselected.SetActive(false);
        AudioManager.Instance.PlayButtonSound();
    }

    public void TopPlayerButton()
    {
        weeklyWinnerUnselected.SetActive(false);
        weeklyWinnerPanel.SetActive(false);
        topPlayerPanel.SetActive(true);
        topPlayerUnselected.SetActive(true);
        AudioManager.Instance.PlayButtonSound();
    }

    public override void Show()
    {
        base.Show();

        GameUI.Instance.AddSliderElements(this, 5);
    }

    private void Start()
    {
        weeklyWinnerButton.onClick.AddListener(WeeklyWinnerButton);
        topPlayerButton.onClick.AddListener(TopPlayerButton);
    }
}
