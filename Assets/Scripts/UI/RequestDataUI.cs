using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class RequestDataUI : MonoBehaviour
{
    public void OnClickYes()
    {
        Close(1);
    }

    public void OnClickNo()
    {
        Close(0);
    }

    private void Start()
    {
        Show();
    }

    public void Close(int consent)
    {
        Hide(consent);
    }

    public void Show()
    {
        transform.localScale = Vector3.zero;
        transform.DOScale(Vector3.one, 0.3f);
        PlayerPrefs.SetInt(GameDefine.is_show_request_data, 1);
    }

    public void Hide(int consent)
    {
        transform.DOScale(Vector3.zero, 0.3f).OnComplete(() => {
            PlayerPrefs.SetInt(GameDefine.irc_consent, consent);
            PlayerPrefs.SetInt(GameDefine.is_cache_irc_consent, 1);
            GlobalConfig.instance.isCacheIrcConsent = true;
            Destroy(gameObject); 
        });
    }
}
