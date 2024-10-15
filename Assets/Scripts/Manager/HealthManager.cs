using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
public class HealthManager : Singleton<HealthManager>
{
    int health;
    [SerializeField] float timeInterval = 15 * 60f;

    [SerializeField] float countdownTime;
    public float CountDownTime => countdownTime;

    private TextMeshProUGUI healthCountText; 
    private TextMeshProUGUI healthIndexText;

    private float infiniteHealthTime;
    public bool isInfiniteHealth = false;

    Coroutine regen;
    Coroutine infiniteHealth;
    public void OnStart()
    {
        infiniteHealthTime = GameManager.Instance.userData.infiniteHeathTime;
        if(infiniteHealthTime > 0)
        {
            StartCoroutine(CountDownInfiniteHealth());
            return;
        }

        health = GameManager.Instance.userData.health;

        string lastExitTimeString = GameManager.Instance.userData.lastExitTime;

        if(lastExitTimeString != "" && lastExitTimeString != null)
        {
            DateTime lastExitTime = DateTime.Parse(lastExitTimeString);
            TimeSpan timeSinceExit = DateTime.Now - lastExitTime;

            int healthIncrease = Mathf.FloorToInt((float)timeSinceExit.TotalSeconds / timeInterval);

            if (health < 5)
            {
                health += healthIncrease;
                if (health > 5) health = 5; 

                if (health < 5)
                {
                    float secondsPassed = (float)timeSinceExit.TotalSeconds - healthIncrease * timeInterval;
                    countdownTime = timeInterval - secondsPassed;
                }
            }
        }
        else
        {
            countdownTime = timeInterval;
        }

        UpdateHealthUI();

        if (health < 5)
        {
            if (regen != null)
            {
                StopCoroutine(regen);
            }
            regen = StartCoroutine(Regen());
        }
    }
    IEnumerator Regen()
    {
        while (health < 5)
        {
            while (countdownTime > 0)
            {
                countdownTime -= Time.deltaTime;
                UpdateCountdownText();
                yield return null;
            }
            health += 1;
            countdownTime = timeInterval;
            UpdateHealthUI();
        }
    }

    IEnumerator CountDownInfiniteHealth()
    {
        if (isInfiniteHealth)
        {
            yield break;
        }
        if (regen != null)
        {
            StopCoroutine(regen);
        }

        GameUI.Instance.Get<UIHome>().ShowInfintieImage(true);
        while (infiniteHealthTime > 0)
        {
            isInfiniteHealth = true;
            infiniteHealthTime -= 1;
            GameManager.Instance.userData.infiniteHeathTime = infiniteHealthTime;
            TimeSpan time = TimeSpan.FromSeconds(infiniteHealthTime);
            healthCountText.text = string.Format("{0:D2}:{1:D2}", (int)time.TotalMinutes, time.Seconds);
            yield return new WaitForSeconds(1);
        }
        GameUI.Instance.Get<UIHome>().ShowInfintieImage(false);
        isInfiniteHealth = false;
        OnStart();
    }
    public void UpdateCountdownText()
    {
        TimeSpan time = TimeSpan.FromSeconds(countdownTime);
        healthCountText.text = string.Format("{0:D2}:{1:D2}", time.Minutes, time.Seconds);
    }

    public void UpdateHealthUI()
    {
        healthIndexText.text = health.ToString();
        if (health == 5)
        {
            healthCountText.text = "Full";
        }
    }

    public void SetUp(TextMeshProUGUI healthCountText, TextMeshProUGUI healthIndexText)
    {
        this.healthCountText = healthCountText;
        this.healthIndexText = healthIndexText;

        OnStart();
    }
}
