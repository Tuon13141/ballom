using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class TaskSlot : MonoBehaviour
{
    [SerializeField] TextMeshProUGUI titleText;
    [SerializeField] Image icon;
    [SerializeField] TextMeshProUGUI progressText;
    [SerializeField] TextMeshProUGUI coinText;
    [SerializeField] Image progressBar;

    [SerializeField] Button claimButton;

    [SerializeField] TaskSO taskSO;
    public TaskSO TaskSO => taskSO;

    public bool isCompleted;

    public int Index { get; set;}
    public GameObject completedParentObject { get; set;}

    TaskSlotController taskSlotController;
    public void SetUp(Sprite iconSprite, TaskSO taskSO, TaskSlotController taskSlotController)
    {
        this.taskSlotController = taskSlotController;
        this.taskSO = taskSO;
        titleText.text = taskSO.title;
        coinText.text = "x" + taskSO.giftedCoin;
        icon.sprite = iconSprite;

        OnUpdateInfo();
    }

    public void ClaimButton()
    {
        AudioManager.Instance.PlayButtonSound();
        taskSO.ClaimTask();
        if (taskSlotController.AllTimeTasks.Contains(taskSO))
        {
            taskSlotController.AllTimeTasks.Remove(taskSO);
        }

        taskSlotController.UpdateTaskSlot();
        Destroy(gameObject);
    }
    float fill;
    public void OnUpdateInfo()
    {
        taskSO.UpdateStat();
        progressText.text = taskSO.progress + "/" + taskSO.maxProgress;
        fill = (float)taskSO.progress / (float)taskSO.maxProgress;
  
        if (fill > 1) fill = 1;
        progressBar.fillAmount = fill;

        if (taskSO.progress / taskSO.maxProgress < 1)
        {
            claimButton.gameObject.SetActive(false);
        }
        else
        {
            claimButton.gameObject.SetActive(true);
            claimButton.onClick.AddListener(ClaimButton);

            //transform.SetParent(completedParentObject.transform);
            isCompleted = true; 
        }
    }
}
