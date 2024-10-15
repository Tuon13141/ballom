using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class Calendar : MonoBehaviour
{
    [SerializeField] Transform parentCalender;
    [SerializeField] TextMeshProUGUI monthAndYearText;
    [SerializeField] GameObject daySlotPref;
    [SerializeField] List<DaySlot> daySlots;

    private void Start()
    {
        GetDate(0);
    }
    public void GetDate(int m)
    {
        DestroyAllDaySlot();

        DateTime targetDate = DateTime.Today.AddMonths(m);

        int targetMonth = targetDate.Month;
        int targetYear = targetDate.Year;

        string monthName = new System.Globalization.DateTimeFormatInfo().GetMonthName(targetMonth);
        string formattedDate = $"{monthName} {targetYear}";
        monthAndYearText.text = formattedDate;

        DateTime firstDayOfMonth = new DateTime(targetYear, targetMonth, 1);

        DateTime startDay = firstDayOfMonth.AddDays(-(int)firstDayOfMonth.DayOfWeek);

        DateTime current = startDay;

        while (true)
        {
            for (int i = 0; i < 7; i++)
            {
   
                GameObject daySlotObj = Instantiate(daySlotPref);
                daySlotObj.transform.SetParent(parentCalender, false);
                DaySlot daySlot = daySlotObj.GetComponent<DaySlot>();

                if (current.Month == targetMonth && current.Year == targetYear)
                {
                    bool hadPassed = current <= DateTime.Today;
                    daySlot.SetUp(current.Day, true, hadPassed, this);
                }
                else
                {
                    daySlot.SetUp(current.Day, false, false, this);
                    //continue;
                }

                current = current.AddDays(1);
                daySlots.Add(daySlot);
            }

            if (current.Month != targetMonth || current.Year != targetYear)
                break;
        }
    }


    void DestroyAllDaySlot()
    {
        foreach(DaySlot daySlot in daySlots)
        {
            Destroy(daySlot.gameObject);
        }

        daySlots.Clear();
    }

    public void UnableAllSelectedPanel()
    {
        foreach(DaySlot daySlot in daySlots)
        {
            daySlot.UnableSelectedPanel();
        }
    }
}

