using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoundManager : MonoBehaviour
{
    public static SoundManager instance;

    private void Awake()
    {
        instance = this;
    }

    public AudioSource audioSource;
    public AudioClip btnSound;
    public AudioClip coinSound;
    public AudioClip victorySound;
    public AudioClip defeatSound;

    public void PlayButton()
    {
        if (!GlobalConfig.instance.isTurnOnSound)
            return;

        audioSource.PlayOneShot(btnSound);
    }

    public void PlayCoin()
    {
        if (!GlobalConfig.instance.isTurnOnSound)
            return;

        audioSource.PlayOneShot(coinSound);
    }

    public void PlayVictory()
    {
        if (!GlobalConfig.instance.isTurnOnSound)
            return;

        audioSource.PlayOneShot(victorySound);
    }

    public void PlayDefeat()
    {
        if (!GlobalConfig.instance.isTurnOnSound)
            return;

        audioSource.PlayOneShot(defeatSound);
    }
}
