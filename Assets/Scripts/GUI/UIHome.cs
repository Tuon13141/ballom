using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;
using TMPro;

public class UIHome : UIElement
{
    public override bool ManualHide => false;
    public override bool DestroyOnHide => false;
    public override bool UseBehindPanel => false;

    [SerializeField] private Button playButton;

    [SerializeField] private Text levelText;
    [SerializeField] private Text wisdomText;

    [SerializeField] private Button settingButton;
    [SerializeField] TextMeshProUGUI healthIndexText;
    [SerializeField] TextMeshProUGUI healthCountText;
    [SerializeField] Image infiniteImage;

    [SerializeField] TextMeshProUGUI coinText;
    [SerializeField] TextMeshProUGUI starText;

    [SerializeField] TextMeshProUGUI levelChestText;
    [SerializeField] TextMeshProUGUI starChestText;
    [SerializeField] Button levelChestButton;
    [SerializeField] Button starChestButton;
    [SerializeField] Image levelChestSlider;
    [SerializeField] Image starChestSlider;

    public void SettingButton()
    {
        GameUI.Instance.Get<UISetting>().Show();
        AudioManager.Instance.PlayButtonSound();
    }

    public void TestButton()
    {
        GameManager.Instance.userData.infiniteHeathTime += 5;
        HealthManager.Instance.OnStart();
    }
    public void PlayButton()
    {
        if(GameManager.Instance.userData.health <= 0)
        {
            Debug.Log("Out of Health");
            return;
        }

        //GameUI.Instance.Get<UIBG>().Hide();
        //GameUI.Instance.Get<UIBottom>().Hide();
        GameUI.Instance.HideAll();
        GameUI.Instance.Get<UIGameplay>().Show();
        AudioManager.Instance.PlayButtonSound();
        //Hide();


        LevelController.Instance.OnStart();
    }

    public void LevelChestButton()
    {
        UserData userData = GameManager.Instance.userData;

      
        if(userData.chestLevelIndex < RewardManager.Instance.RewardHeartAndCoinSOs.Count)
        {
            RewardHeartAndCoinSO rewardHeartAndCoinSO = RewardManager.Instance.RewardHeartAndCoinSOs[userData.chestLevelIndex];

            GameManager.Instance.AddCoin(rewardHeartAndCoinSO.coinIndex);
            GameManager.Instance.AddHear(rewardHeartAndCoinSO.heartIndex);

            GameUI.Instance.Get<UIRewardHeartAndCoin>().Show();
            GameUI.Instance.Get<UIRewardHeartAndCoin>().SetUp(rewardHeartAndCoinSO);
        }
        else
        {
            Debug.Log("Not created Gift !");
            return;
        }
        AudioManager.Instance.PlayButtonSound();
        userData.chestLevelIndex++;

        float chestLevel = (userData.level + 0) / (float)DefaultData.levelChests[userData.chestLevelIndex];
        levelChestText.text = (userData.level + 1).ToString() + "/" + DefaultData.levelChests[userData.chestLevelIndex].ToString();
        levelChestSlider.fillAmount = chestLevel;
       
        if (chestLevel >= 1)
        {
            
            
            return;
        }

        levelChestButton.onClick.RemoveAllListeners();
    }

    public void StarChestButton()
    {
        UserData userData = GameManager.Instance.userData;
        AudioManager.Instance.PlayButtonSound();
        userData.chestStarIndex++;

        float chestStar = (userData.star + 0) / (float)DefaultData.starChests[userData.chestStarIndex];
        starChestText.text = (userData.star + 0).ToString() + "/" + DefaultData.starChests[userData.chestStarIndex].ToString();
        starChestSlider.fillAmount = chestStar;

        if (chestStar >= 1)
        {

            return;
        }

        starChestButton.onClick.RemoveAllListeners();
    }

    public override void Show()
    {
        //GameUI.Instance.Get<UIBG>().Show();

        levelText.text = "Level " + (GameManager.Instance.userData.level + 1).ToString();
        wisdomText.text = GameManager.Instance.userData.wisdom.ToString();

        GameManager.Instance.ChangeState(GameStates.Home);
        base.Show();
        GameUI.Instance.AddSliderElements(this, 3);
        UpdateStat();
        HealthManager.Instance.SetUp(healthCountText, healthIndexText);
        GameUI.Instance.Get<UIBottom>().Show();
    }
    private void Start()
    {
        settingButton.onClick.AddListener(SettingButton);
        playButton.onClick.AddListener(PlayButton);
       
        
    }

    public void ShowInfintieImage(bool b)
    {
        infiniteImage.SetActive(b);
        healthIndexText.SetActive(!b);
    }
    public void UpdateStat()
    {
        UserData userData = GameManager.Instance.userData;

        starText.text = userData.star.ToString();
        coinText.text = userData.coin.ToString();

        float chestLevel = (userData.level + 0) / (float)DefaultData.levelChests[userData.chestLevelIndex];
        if(chestLevel >= 1)
        {
            levelChestButton.onClick.RemoveAllListeners();
            levelChestButton.onClick.AddListener(LevelChestButton);
        }
           
      
        float chestStar = (userData.star + 0) / (float)DefaultData.starChests[userData.chestStarIndex];
        if(chestStar >= 1)
        {
            starChestButton.onClick.RemoveAllListeners();
            starChestButton.onClick.AddListener(StarChestButton);
        }
            

        levelChestText.text = (userData.level + 0).ToString() + "/" + DefaultData.levelChests[userData.chestLevelIndex].ToString();
        levelChestSlider.fillAmount = chestLevel;

        starChestText.text = (userData.star + 0).ToString() + "/" + DefaultData.starChests[userData.chestStarIndex].ToString();
        starChestSlider.fillAmount = chestStar;
    }

    public void StartAnim()
    {
        Animator animator = GetComponent<Animator>();

        animator.SetTrigger("StartAnim");
    }
}
