using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UISettingInGame : UIElement
{
    public override bool ManualHide => false;
    public override bool DestroyOnHide => false;
    public override bool UseBehindPanel => true;

    [SerializeField] Button replayButton;
    [SerializeField] Button homeButton;
    [SerializeField] Button backgroundButton;
    [SerializeField] Button backButton;
    public void BackButton()
    {
        AudioManager.Instance.PlayButtonSound();
        LevelController.Instance.Pause(true);
        Time.timeScale = 1f;
        Hide();
    }

    public void ReplayButton()
    {
        AudioManager.Instance.PlayButtonSound();
        //Time.timeScale = 1f;
        GameUI.Instance.Get<UIPauseInGame>().Show();
        GameUI.Instance.Get<UIPauseInGame>().SetUp(PauseInGameType.Replay);
    }

    public void HomeButton()
    {
        AudioManager.Instance.PlayButtonSound();
        //Time.timeScale = 1f;
        GameUI.Instance.Get<UIPauseInGame>().Show();
        GameUI.Instance.Get<UIPauseInGame>().SetUp(PauseInGameType.Home);
    }

    public void BackgroundButton() { }

    private void Start()
    {
        replayButton.onClick.AddListener(ReplayButton);
        homeButton.onClick.AddListener(HomeButton);
        backgroundButton.onClick.AddListener(BackgroundButton);
        backButton.onClick.AddListener(BackButton);
    }
}
