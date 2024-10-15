using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class DaySlot : MonoBehaviour
{
    [SerializeField] TextMeshProUGUI dayTextFade;
    [SerializeField] TextMeshProUGUI dayTextNor;
    [SerializeField] GameObject passed;
    [SerializeField] GameObject notPassed;
    [SerializeField] GameObject selected;

    bool isFromThisMonth = true;
    bool hadPassed = false;
    bool canClick = false;


    Calendar Calendar;
    public void SetUp(int date, bool isFromThisMonth, bool hadPassed, Calendar calendar)
    {
        this.Calendar = calendar;
        this.isFromThisMonth = isFromThisMonth;
        this.hadPassed = hadPassed;

        if (hadPassed)
        {
            notPassed.SetActive(false);
            passed.SetActive(true);
            //GetComponent<Image>().SetActive(false);

            canClick = true;
        }

        if (!isFromThisMonth)
        {
            notPassed.SetActive(false);
            dayTextFade.SetActive(false);

            canClick = true;
        }

        SetText(date);
    }
    public void SetText(int date)
    {
        dayTextFade.text = date.ToString();
        dayTextNor.text = date.ToString();
    }

    public void OnClick()
    {
        AudioManager.Instance.PlayButtonSound();
        if (canClick)
        {
            Calendar.UnableAllSelectedPanel();
            selected.SetActive(true);
        }
    }

    public void UnableSelectedPanel()
    {
        selected.SetActive(false);
    }
}
