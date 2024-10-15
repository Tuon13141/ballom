using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AudioManager : Singleton<AudioManager>
{
    [SerializeField] AudioSource buttonSound;
    [SerializeField] AudioSource backgroundMusic;

    public void TurnOffSound()
    {
        buttonSound.volume = 0;
        GameManager.Instance.userData.soundOn = false;
    }

    public void TurnOnSound()
    {
        buttonSound.volume = 1;
        GameManager.Instance.userData.soundOn = true;
    }

    public void TurnOffMusic()
    {
        backgroundMusic.volume = 0;
        GameManager.Instance.userData.musicOn = false;
    }

    public void TurnOnMusic()
    {
        backgroundMusic.volume = 1;
        GameManager.Instance.userData.musicOn = true;
    }

    public void TurnOffVibrate()
    {
        GameManager.Instance.userData.vibrateOn = false;
    }

    public void TurnOnVibrate()
    {
        GameManager.Instance.userData.vibrateOn = true;
    }

    public void Vibrate()
    {
        if (GameManager.Instance.userData.vibrateOn)
        {
            Handheld.Vibrate();
        }       
    }

    public void PlayBackgroundMusic()
    {
        backgroundMusic.Play();
    }

    public void PlayButtonSound()
    {
        buttonSound.Play();
    }

    private void Start()
    {
        UserData userData = GameManager.Instance.userData;

        if (userData.musicOn)
        {
            backgroundMusic.volume = 1;
        }
        else
        {
            backgroundMusic.volume = 0;
        }

        if (userData.soundOn)
        {
            buttonSound.volume = 1;
        }
        else
        {
            buttonSound.volume = 0;
        }    
        
        //backgroundMusic.Play();
    }
}
