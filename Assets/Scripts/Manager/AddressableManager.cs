using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;


public class AddressableManager : MonoBehaviour
{
    [SerializeField] AssetLabelReference allTimeTasksAddressables;
    [SerializeField] AssetLabelReference dailyTaskAddressables;
    [SerializeField] AssetLabelReference otherAddressables;

    float percentAll = 0;

    private void Start()
    {
        GameUI.Instance.Get<UILoading>().Show();
        StartCoroutine(LoadAddressable());
    }

    IEnumerator LoadAddressable()
    {
        //Load All
        yield return new WaitForSeconds(2f);
        bool nextLoad = false;
        var otherLoadHandle = Addressables.LoadAssetsAsync<UnityEngine.Object>(otherAddressables, (o) => { });

        otherLoadHandle.Completed += (a) =>
        {    
            percentAll += otherLoadHandle.PercentComplete / 3;
            GameUI.Instance.Get<UILoading>().SetLoadingPercent(percentAll);
            nextLoad = true;
        };

        yield return new WaitUntil(() => nextLoad == true);
        yield return new WaitForSeconds(1f);

        GameUI.Instance.EnableAllSliderElement();
        GameUI.Instance.Get<UILoading>().Show();
        nextLoad = false;
        List<TaskSO> allTimeTaskSOs = new();
        List<DailyTaskSO> dailyTaskSOs = new();
        var allTimeTaskLoadHandle = Addressables.LoadAssetsAsync<TaskSO>(allTimeTasksAddressables, (SO) => { allTimeTaskSOs.Add(SO); });
            
        allTimeTaskLoadHandle.Completed += (a) =>
        {
            percentAll += allTimeTaskLoadHandle.PercentComplete / 3;
            GameUI.Instance.Get<UILoading>().SetLoadingPercent(percentAll);
            nextLoad = true;     
        };

        yield return new WaitUntil(() => nextLoad == true);
        yield return new WaitForSeconds(1f);
        nextLoad = false;
        var dailyTaskLoadHandle = Addressables.LoadAssetsAsync<DailyTaskSO>(dailyTaskAddressables, (SO) => { dailyTaskSOs.Add(SO); });

        dailyTaskLoadHandle.Completed += (a) =>
        {
            percentAll += dailyTaskLoadHandle.PercentComplete / 3;
            GameUI.Instance.Get<UILoading>().SetLoadingPercent(percentAll);
            GameUI.Instance.Get<UITask>().TaskSetUp(allTimeTaskSOs, dailyTaskSOs);
            nextLoad = true;  
        };

        yield return new WaitUntil(() => nextLoad == true);
        yield return new WaitForSeconds(1f);
        nextLoad = false;
        GameUI.Instance.Get<UILoading>().Hide();
        Destroy(gameObject);
    }
}
public class AssetReferenceTaskSO : AssetReferenceT<TaskSO>
{
    public AssetReferenceTaskSO(string guid) : base(guid)
    {
    }
}

class AssetReferenceDailyTaskSO : AssetReferenceT<DailyTaskSO>
{
    public AssetReferenceDailyTaskSO(string guid) : base(guid)
    {
    }
}