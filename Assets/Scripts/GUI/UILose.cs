using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class UILose : UIElement
{
    public override bool ManualHide => false;
    public override bool DestroyOnHide => true;
    public override bool UseBehindPanel => true;

    [SerializeField] Button homeButton;
    [SerializeField] Button retryButton;

    public void RetryButton()
    {
        if (GameManager.Instance.userData.health <= 0)
        {
            Debug.Log("Out of Health");
            HomeButton();
            return;
        }
        LevelController.Instance.OnStart();
        AudioManager.Instance.PlayButtonSound();
        Hide();
    }

    public void HomeButton()
    {
        GameUI.Instance.EnableAllSliderElement();
        AudioManager.Instance.PlayButtonSound();
        Hide();
    }
    private void Start()
    {
        retryButton.onClick.AddListener(RetryButton);
        homeButton.onClick.AddListener(HomeButton);
    }
}

