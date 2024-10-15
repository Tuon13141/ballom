using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class UIPauseInGame : UIElement
{
    public override bool ManualHide => false;
    public override bool DestroyOnHide => true;
    public override bool UseBehindPanel => true;

    [SerializeField] PauseInGameType pauseInGameType;

    [SerializeField] Button stayButton;
    [SerializeField] Button backButton;
    [SerializeField] Button exitButton;

    [SerializeField] TextMeshProUGUI exitButtonText;

    public void SetUp(PauseInGameType pauseInGameType)
    {
        this.pauseInGameType = pauseInGameType;
        switch (pauseInGameType)
        {
            case PauseInGameType.Home:
                exitButtonText.text = "Home";
                break;
            case PauseInGameType.Replay:
                exitButtonText.text = "Replay";
                break;
        }
    }

    public void BackButton()
    {
        AudioManager.Instance.PlayButtonSound();
        Hide();
    }

    public void ExitButton()
    {
        AudioManager.Instance.PlayButtonSound();
        GameUI.Instance.Get<UISettingInGame>().Hide();
        Time.timeScale = 1f;
        Hide();
        switch (pauseInGameType)
        {
            case PauseInGameType.Home:
                LevelController.Instance.Reset();
                GameUI.Instance.Get<UIGameplay>().Hide();
                GameUI.Instance.EnableAllSliderElement(); 
                break;
            case PauseInGameType.Replay:
                LevelController.Instance.Refresh();
                
                break;
        }
    }

    public void StayButton()
    {
        AudioManager.Instance.PlayButtonSound();
        LevelController.Instance.Pause(true);
        Time.timeScale = 1f;
        GameUI.Instance.Get<UISettingInGame>().Hide();
       
        Hide();
    }

    private void Start()
    {
        backButton.onClick.AddListener(BackButton);
        stayButton.onClick.AddListener(StayButton);
        exitButton.onClick.AddListener(ExitButton); 
    }
}

public enum PauseInGameType
{
    Replay, Home
}
