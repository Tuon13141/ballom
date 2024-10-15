using System.Collections;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class UIGameplay : UIElement
{
    public override bool ManualHide => true;
    public override bool DestroyOnHide => true;
    public override bool UseBehindPanel => false;

    [SerializeField] TextMeshProUGUI levelText;
    [SerializeField] TextMeshProUGUI timeText;

    [SerializeField] Button settingButton;

    [SerializeField] float time;

    public void SettingButton()
    {
        AudioManager.Instance.PlayButtonSound();
        Time.timeScale = 0f;
        LevelController.Instance.Pause(false);
        GameUI.Instance.Get<UISettingInGame>().Show();
    }

    private void Start()
    {
        levelText.text = "Level " + (LevelController.Instance.LevelRenderer.currentLevel + 1).ToString();
        LevelController.Instance.CountDown(timeText);

        settingButton.onClick.AddListener(SettingButton);
    }

}
