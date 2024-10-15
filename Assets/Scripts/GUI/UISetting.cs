using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class UISetting : UIElement
{
    public override bool ManualHide => false;
    public override bool DestroyOnHide => false;
    public override bool UseBehindPanel => true;

    [SerializeField] Button changeNameButton;
    [SerializeField] Button confirmChangeNameButton;
    [SerializeField] Button cancelChangeNameButton;
    [SerializeField] Button backButton;
    [SerializeField] Button soundOnButton;
    [SerializeField] Button soundOffButton;
    [SerializeField] Button musicOnButton;
    [SerializeField] Button musicOffButton;
    [SerializeField] Button vibrateOnButton;
    [SerializeField] Button vibrateOffButton;
    [SerializeField] Button languageButton;
    [SerializeField] Button TOUButton;
    [SerializeField] Button privacyButton;

    [SerializeField] TextMeshProUGUI idAndVerText;
    [SerializeField] TextMeshProUGUI nameText;
    [SerializeField] TMP_InputField changeNameInputField;

    [SerializeField] GameObject changeNamePanel;

    public void ConfirmChangeNameButton()
    {
        Debug.Log(changeNameInputField.text);
        GameManager.Instance.ChangePlayerName(changeNameInputField.text);
        changeNamePanel.SetActive(false);
        nameText.text = changeNameInputField.text;
    }
    public void CancelChangeNameButton()
    {
        changeNamePanel.SetActive(false);
    }
    public void ChangeNameButton()
    {
        changeNamePanel.SetActive(true);
    }
    public void BackButton()
    {
        AudioManager.Instance.PlayButtonSound();
        Hide();
    }

    public void SoundOnButton()
    {
        
    }

    public void SoundOffButton() 
    {
        
    }

    public void MusicOnButton()
    {

    }

    public void MusicOffButton() { }

    public void VibrateOnButton()
    {
    }

    public void VibrateOffButton()
    {
    }

    public void LanguageButton()
    {
        AudioManager.Instance.PlayButtonSound();
    }

    public void ToUButton()
    {
        AudioManager.Instance.PlayButtonSound();
    }

    public void PrivacyButton()
    {
        AudioManager.Instance.PlayButtonSound();
    }

    public override void Show()
    {
        base.Show();
        nameText.text = GameManager.Instance.userData.name;
    }

    private void Start()
    {
        backButton.onClick.AddListener(BackButton);
        soundOnButton.onClick.AddListener(SoundOnButton);
        soundOffButton.onClick.AddListener(SoundOffButton);
        musicOnButton.onClick.AddListener(MusicOnButton);
        musicOffButton.onClick.AddListener(MusicOffButton);
        vibrateOnButton.onClick.AddListener(VibrateOnButton);
        vibrateOffButton.onClick.AddListener(VibrateOffButton);
        languageButton.onClick.AddListener(LanguageButton);
        TOUButton.onClick.AddListener(ToUButton);
        privacyButton.onClick.AddListener(PrivacyButton);
        changeNameButton.onClick.AddListener(ChangeNameButton);
        cancelChangeNameButton.onClick.AddListener(CancelChangeNameButton);
        confirmChangeNameButton.onClick.AddListener(ConfirmChangeNameButton);  
    }
}
