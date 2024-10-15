using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class UILoading : UIElement
{
    public override bool ManualHide => false;
    public override bool DestroyOnHide => true;
    public override bool UseBehindPanel => false;

    [SerializeField] Image slider;
    [SerializeField] TextMeshProUGUI loadingPercentText;

    [SerializeField] GameObject addressablePref;
    [SerializeField] float targetPercent;
    [SerializeField] float currentPercent = 0;

    private void Update()
    {
        currentPercent += Time.deltaTime;
        if(currentPercent >= targetPercent)
        {
            currentPercent = targetPercent;
        }


        loadingPercentText.text = (currentPercent * 100).ToString("F2") + "%";
        slider.fillAmount = this.currentPercent;

    }
    public void SetLoadingPercent(float percent)
    {
        this.targetPercent = percent;
       
    }

    public override void Hide()
    {
        AudioManager.Instance.PlayBackgroundMusic();
        base.Hide();
        GameUI.Instance.Get<UIHome>().StartAnim();
    }
}
