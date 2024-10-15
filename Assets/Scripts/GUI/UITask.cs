using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UITask : UIElement
{
    public override bool ManualHide => false;
    public override bool DestroyOnHide => false;
    public override bool UseBehindPanel => false;

    [SerializeField] TaskSlotController taskSlotController;

    [SerializeField] Button dailyTaskButton;
    [SerializeField] GameObject dailySelectedPanel;

    [SerializeField] Button allTimeTaskButton;
    [SerializeField] GameObject allTimeSelectedPanel;

    bool firstLoad = true;

    public void DailyTaskButton()
    {
        taskSlotController.EnableDailyTask();
        dailySelectedPanel.SetActive(true);
        allTimeSelectedPanel.SetActive(false);
        AudioManager.Instance.PlayButtonSound();
    }

    public void AllTimeTaskButton()
    {
        taskSlotController.EnableAllTimeTask();
        dailySelectedPanel.SetActive(false);
        allTimeSelectedPanel.SetActive(true);
        AudioManager.Instance.PlayButtonSound();
    }

    public override void Show()
    {
        base.Show();
        if (!firstLoad)
        {
            taskSlotController.UpdateTaskSlot();
        }

        GameUI.Instance.AddSliderElements(this, 2);
    }
    public void TaskSetUp(List<TaskSO> allTimeTaskSOs, List<DailyTaskSO> dailyTaskSOs)
    {
        taskSlotController.SetUp(allTimeTaskSOs, dailyTaskSOs);
        firstLoad = false;
    }

    private void Start()
    {
        dailyTaskButton.onClick.AddListener(DailyTaskButton);
        allTimeTaskButton.onClick.AddListener(AllTimeTaskButton);
    }
}
