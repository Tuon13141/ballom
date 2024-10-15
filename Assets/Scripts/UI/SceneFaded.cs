using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneFaded : MonoBehaviour
{
    public static SceneFaded instance;

    public GameObject loadingUI;
    public CanvasGroup canvasGroup;
    public AnimationCurve fadeCurve;

    private void Awake()
    {
        instance = this;
    }

    private void Start()
    {
        SceneManager.sceneLoaded += OnSceneLoaded;
        StartCoroutine(Loading("GamePlay"));

    }

    private IEnumerator Loading(string scene)
    {
        loadingUI.SetActive(true);
        canvasGroup.alpha = 1f;

        while (!RemoteConfig.instance.IsLoaded() || !GlobalConfig.instance.isCacheIrcConsent)
        {
            yield return null;
        }

        SceneManager.LoadSceneAsync(scene);
    }

    private void OnSceneLoaded(Scene scene, LoadSceneMode mode)
    {
        StartCoroutine(FadeIn());
    }

    IEnumerator FadeIn()
    {
        float t = 0f;
        float duration = 0.5f;

        while (t < duration)
        {
            t += Time.deltaTime;

            canvasGroup.alpha = fadeCurve.Evaluate(t / duration);

            yield return null;
        }

        canvasGroup.alpha = 0f;
        loadingUI.SetActive(false);
    }

    public void ShowOverlay()
    {
        loadingUI.SetActive(true);
        canvasGroup.alpha = 1f;
    }

    public void HideOverlay()
    {
        loadingUI.SetActive(false);
    }
}
