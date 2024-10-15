using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class UIWin : UIElement
{
    public override bool ManualHide => false;
    public override bool DestroyOnHide => true;
    public override bool UseBehindPanel => true;

    [SerializeField] Button nextLevelButton;
    [SerializeField] Button homeButton;

    [SerializeField] TextMeshProUGUI levelText;
    [SerializeField] TextMeshProUGUI wisdomText;
    public void NextLevelButton()
    {
        if (GameManager.Instance.userData.health <= 0)
        {
            Debug.Log("Out of Health");
            HomeButton();
            return;
        }
        AudioManager.Instance.PlayButtonSound();
        LevelController.Instance.OnStart();
        Hide();
    }
    
    public void HomeButton()
    {
        AudioManager.Instance.PlayButtonSound();
        GameUI.Instance.EnableAllSliderElement();
        Hide();
    }
    private void Start()
    {
        levelText.text = "Level " + (GameManager.Instance.userData.level + 1).ToString();
        wisdomText.text = GameManager.Instance.userData.wisdom.ToString();
        homeButton.onClick.AddListener(HomeButton);
        nextLevelButton.onClick.AddListener(NextLevelButton);
    }
}

