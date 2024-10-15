using DG.Tweening;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RateUI : MonoBehaviour
{
    public static RateUI instance;
    public List<GameObject> liStar;
    private int starSelect;

    private void Awake()
    {
        instance = this;
    }

    private void Start()
    {
        Show();
    }

    public void OnClickStar(int star)
    {
        for(int i = 0; i < liStar.Count; i++)
        {
            liStar[i].SetActive(i < star);
        }

        starSelect = star;
    }

    public void Submit()
    {
        if(starSelect >= 5)
        {
            string url = GetAppUrl();
            if (!string.IsNullOrEmpty(url))
            {
                Application.OpenURL(url);
            }
        }

        Close();
        SoundManager.instance.PlayButton();
    }

    private string GetAppUrl()
    {
        string url = "";

#if UNITY_ANDROID
        string AndroidRatingURI = "http://play.google.com/store/apps/details?id={0}";
        url = AndroidRatingURI.Replace("{0}", Application.identifier);
#endif

        return url;
    }

    public void Close()
    {
        Hide();
        SoundManager.instance.PlayButton();
    }

    public void Show()
    {
        transform.localScale = Vector3.zero;
        transform.DOScale(Vector3.one, 0.3f);
        PlayerPrefs.SetInt(GameDefine.is_show_rate, 1);
    }

    public void Hide()
    {
        transform.DOScale(Vector3.zero, 0.3f).OnComplete(() => { Destroy(gameObject); });
    }
}
