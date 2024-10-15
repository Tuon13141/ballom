using SuperScrollView;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;

public class TaskSlotController : MonoBehaviour
{
    [SerializeField] List<TaskSO> allTimeTasks = new List<TaskSO>();
    public List<TaskSO> AllTimeTasks => allTimeTasks;
    [SerializeField] List<TaskSO> dailyTasks = new List<TaskSO>();
    public List<TaskSO> DailyTasks => dailyTasks;

    [SerializeField] GameObject parentAllTimeSlot;
    [SerializeField] GameObject parentAllTime;
    [SerializeField] GameObject taskSlotPref;

    [SerializeField] GameObject parentDailySlot;
    [SerializeField] GameObject parentDaily;

    [SerializeField] GameObject padding;

    [SerializeField] Sprite loginSprite;
    [SerializeField] Sprite loginRegularySprite;
    [SerializeField] Sprite gainWisdomSprite;
    [SerializeField] Sprite completeLevelSprite;
    [SerializeField] Sprite matchBalloonSprite;
    [SerializeField] Sprite useItem;
    [SerializeField] Sprite useItemUndoSprite;
    [SerializeField] Sprite useItemRefreshSprite;
    [SerializeField] Sprite useItemSpotSprite;
    [SerializeField] Sprite useItemTimeSprite;

    List<TaskSlot> allTimeTaskSlots = new List<TaskSlot>();
    List<TaskSlot> dailyTaskSLots = new List<TaskSlot>();

    [SerializeField] ScrollRect allTimeScrollRect;
    [SerializeField] ScrollRect dailyScrollRect;

    [SerializeField] GridViewTaskSlot allTimeGridView;
    [SerializeField] GridViewTaskSlot dailyGridView;

    string allTimePath = "Tasks/AllTimeTask/";
    string dailyPath = "Tasks/DailyTask/";

    int maxLoad = 50;
    void Start()
    {
        //SetUp();
    }

    void SpawnTaskSlot(List<TaskSO> taskSOs, GameObject parent, bool b)
    {
        int index = 0;
        if (b)
        {
            allTimeGridView.OnStart(taskSOs.Count, taskSOs);
        }
        foreach (TaskSO task in taskSOs)
        {
            if (GameManager.Instance.userData.completedTasks.Contains(task)) continue;
            if (GameManager.Instance.userData.completedDailyTasks.Contains(task)) continue;

            if (b)
            {
                task.SetUp(null);
            }
            else
            {
                task.SetUp(ResetRectAfterClaimDaily);
                TaskSlot taskSlot = Instantiate(taskSlotPref).GetComponent<TaskSlot>();
                taskSlot.transform.SetParent(parent.transform);
                taskSlot.transform.localScale = Vector3.one;
                taskSlot.transform.localPosition = Vector3.zero;
                taskSlot.Index = index;

                switch (task.taskType)
                {
                    case TaskType.Login:
                        taskSlot.SetUp(loginSprite, task, this);
                        break;
                    case TaskType.LoginRegulary:
                        taskSlot.SetUp(loginRegularySprite, task, this);
                        break;
                    case TaskType.GainWisdom:
                        taskSlot.SetUp(gainWisdomSprite, task, this);
                        break;
                    case TaskType.CompleteLevel:
                        taskSlot.SetUp(completeLevelSprite, task, this);
                        break;
                    case TaskType.MatchBalloon:
                        taskSlot.SetUp(matchBalloonSprite, task, this);
                        break;
                    case TaskType.UseItem:
                        taskSlot.SetUp(useItem, task, this);
                        break;
                    case TaskType.UseItemSpot:
                        taskSlot.SetUp(useItemSpotSprite, task, this);
                        break;
                    case TaskType.UseItemUndo:
                        taskSlot.SetUp(useItemUndoSprite, task, this);
                        break;
                    case TaskType.UseItemRefresh:
                        taskSlot.SetUp(useItemRefreshSprite, task, this);
                        break;
                    case TaskType.UseItemTime:
                        taskSlot.SetUp(useItemTimeSprite, task, this);
                        break;
                }
                if (b)
                    allTimeTaskSlots.Add(taskSlot);
                else
                    dailyTaskSLots.Add(taskSlot);
                index++;
            }

        }

        //Instantiate(padding).transform.SetParent(parent.transform);
        //Instantiate(padding).transform.SetParent(parent.transform);
    }

    public void SetUp(List<TaskSO> allTimeTaskSOs, List<DailyTaskSO> dailyTaskSOs)
    {
        this.allTimeTasks.Clear();
        this.dailyTasks.Clear();

        //TaskSO[] loadedTasks = Resources.LoadAll<TaskSO>(allTimePath);
        //Debug.Log(loadedTasks.Length);
        //int count = Mathf.Min(loadedTasks.Count, maxLoad);
        //int index = 0;
        foreach (TaskSO taskSO in allTimeTaskSOs)
        {
            if (!GameManager.Instance.userData.completedTasks.Contains(taskSO))
            {
                this.allTimeTasks.Add(taskSO);
                //index++;
                //if(index == count)
                //{
                //    break;
                //}
            }
        }

        dailyTasks.AddRange(dailyTaskSOs);
        UpdateTaskSlot();

        SpawnTaskSlot(dailyTasks, parentDailySlot, false);

        EnableAllTimeTask();
    }

    public void UpdateTaskSlot()
    {
        foreach(TaskSO taskSO in allTimeTasks)
        {
            taskSO.UpdateStat();
        }
        allTimeTaskSlots.RemoveAll(taskSlot => taskSlot == null);
        allTimeTasks.RemoveAll(child => GameManager.Instance.userData.completedTasks.Contains(child));
        allTimeTasks = allTimeTasks.OrderByDescending(child => child.canClaimed).ToList();

        foreach (TaskSlot slot in allTimeTaskSlots)
        {
            slot.OnUpdateInfo();
        }

        dailyTaskSLots.RemoveAll(taskSlot => taskSlot == null);
        foreach (TaskSlot taskSlot in dailyTaskSLots)
        {
            taskSlot.OnUpdateInfo();
        }



        //List<TaskSlot> childrenAllTime = parentAllTimeSlot.GetComponentsInChildren<TaskSlot>()
        //   .OrderByDescending(child => child.isCompleted)
        //    // Sau đó sắp xếp theo index
        //    .ThenBy(child => child.Index)
        //  .ToList();

        //for (int i = 0; i < childrenAllTime.Count; i++)
        //{
        //    childrenAllTime[i].transform.SetSiblingIndex(i);

        //}
        //allTimeScrollRect.verticalNormalizedPosition = 1f;
        
        SpawnTaskSlot(allTimeTasks, parentAllTimeSlot, true);

        List<TaskSlot> childrenDaily = parentDailySlot.GetComponentsInChildren<TaskSlot>()
           .OrderByDescending(child => child.isCompleted)
            // Sau đó sắp xếp theo index
            .ThenBy(child => child.Index)
          .ToList();

        for (int i = 0; i < childrenDaily.Count; i++)
        {
            childrenDaily[i].transform.SetSiblingIndex(i);

        }

    }

    public void EnableAllTimeTask()
    {
        parentAllTime.SetActive(true);
        parentDaily.SetActive(false);


    }

    public void EnableDailyTask()
    {
        parentAllTime.SetActive(false);
        parentDaily.SetActive(true);
        ReSetupDailyTask();
        dailyScrollRect.verticalNormalizedPosition = 1f;
    }

    IEnumerator ResetRect(bool b)
    {
        GameObject parent = parentDailySlot;
        ScrollRect scrollRect = dailyScrollRect;
        if (!b)
        {
            parent = parentAllTimeSlot;
            scrollRect = allTimeScrollRect;
        }

        parent.GetComponent<VerticalLayoutGroup>().SetActive(false);

        yield return new WaitForSeconds(0.5f);

        parent.GetComponent<VerticalLayoutGroup>().SetActive(true);

    }

    public void ResetRectAfterClaimAllTime(TaskSO taskSO)
    {
        Debug.Log("1");
        //allTimeTaskSlots.RemoveAll(taskSlot => !taskSlot.TaskSO.isClaimed);
        allTimeTasks.Remove(taskSO);
        SpawnTaskSlot(allTimeTasks, parentAllTimeSlot, true);
        //StartCoroutine(ResetRect(false));
    }

    public void ResetRectAfterClaimDaily()
    {
        //StartCoroutine(ResetRect(true));
    }

    void ReSetupDailyTask()
    {
        List<TaskSlot> childrenDaily = parentDailySlot.GetComponentsInChildren<TaskSlot>()
          .OrderByDescending(child => child.isCompleted)
           // Sau đó sắp xếp theo index
           .ThenBy(child => child.Index)
         .ToList();

        for (int i = 0; i < childrenDaily.Count; i++)
        {
            childrenDaily[i].transform.SetSiblingIndex(i);

        }
    }

    public Sprite GetTaskSprite(TaskSO task)
    {
        switch (task.taskType)
        {
            case TaskType.Login:
                return loginSprite;

            case TaskType.LoginRegulary:
                return loginRegularySprite;

            case TaskType.GainWisdom:
                return gainWisdomSprite;

            case TaskType.CompleteLevel:
                return completeLevelSprite;

            case TaskType.MatchBalloon:
                return matchBalloonSprite;

            case TaskType.UseItem:
                return useItem;

            case TaskType.UseItemSpot:
                return useItemSpotSprite;

            case TaskType.UseItemUndo:
                return useItemUndoSprite;

            case TaskType.UseItemRefresh:
                return useItemRefreshSprite;

            case TaskType.UseItemTime:
                return useItemTimeSprite;

        }
        return null;
    }
}
