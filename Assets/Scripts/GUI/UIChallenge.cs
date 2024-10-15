using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UIChallenge : UIElement
{
    public override bool ManualHide => false;
    public override bool DestroyOnHide => false;
    public override bool UseBehindPanel => false;

    [SerializeField] Calendar calendar;
    [SerializeField] Button previousButton;
    [SerializeField] Button nextButton;

    int monthCount = 0;

    public void PreviousButton()
    {
        monthCount--;
        //Debug.Log("Prev");
        calendar.GetDate(monthCount);
        if(monthCount < 0)
        {
            nextButton.gameObject.SetActive(true);
        }
        AudioManager.Instance.PlayButtonSound();
    }

    public void NextButton()
    {
        monthCount++;
        calendar.GetDate(monthCount);

        if(monthCount >= 0)
        {
            monthCount = 0;
            nextButton.gameObject.SetActive(false);
        }
        AudioManager.Instance.PlayButtonSound();
    }
    public override void Show()
    {
        base.Show();

        GameUI.Instance.AddSliderElements(this, 4);
    }

    private void Start()
    {
        previousButton.onClick.AddListener(PreviousButton);
        nextButton.onClick.AddListener(NextButton);
    }
}


