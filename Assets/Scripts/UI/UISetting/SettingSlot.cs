using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SettingSlot : MonoBehaviour
{
    [SerializeField] SettingType settingType;

    [SerializeField] GameObject TurningOn;
    [SerializeField] GameObject TurningOff;

    private void Start()
    {
        UserData userData = GameManager.Instance.userData;
        switch (settingType)
        {
            case SettingType.Sound:
                if (userData.soundOn)
                {
                    TurningOn.SetActive(true);
                    TurningOff.SetActive(false);
                }
                else
                {
                    TurningOn.SetActive(false);
                    TurningOff.SetActive(true);
                }

                break;
            case SettingType.Music:
                if (userData.musicOn)
                {
                    TurningOn.SetActive(true);
                    TurningOff.SetActive(false);
                }
                else
                {
                    TurningOn.SetActive(false);
                    TurningOff.SetActive(true);
                }

                break;
            case SettingType.Vibrate:
                if (userData.vibrateOn)
                {
                    TurningOn.SetActive(true);
                    TurningOff.SetActive(false);
                }
                else
                {
                    TurningOn.SetActive(false);
                    TurningOff.SetActive(true);
                }

                break;
        }
    }

    public void OnClickTurnOn()
    {
        TurningOn.SetActive(true);
        TurningOff.SetActive(false);
        switch (settingType)
        {
            case SettingType.Sound:
                AudioManager.Instance.TurnOnSound();

                break;
            case SettingType.Music:
                AudioManager.Instance.TurnOnMusic();

                break;
            case SettingType.Vibrate:
                AudioManager.Instance.TurnOnVibrate();

                break;
        }

        AudioManager.Instance.PlayButtonSound();
    }

    public void OnClickTurnOff()
    {
        TurningOn.SetActive(false);
        TurningOff.SetActive(true);
        switch (settingType)
        {
            case SettingType.Sound:
                AudioManager.Instance.TurnOffSound();

                break;
            case SettingType.Music:
                AudioManager.Instance.TurnOffMusic();

                break;
            case SettingType.Vibrate:
                AudioManager.Instance.TurnOffVibrate();

                break;
        }

        AudioManager.Instance.PlayButtonSound();
    }
}

public enum SettingType
{
    Sound, Music, Vibrate
}
