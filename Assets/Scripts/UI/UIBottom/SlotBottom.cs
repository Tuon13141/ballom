using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SlotBottom : MonoBehaviour
{
    [SerializeField] SlotBottomType slotBottomType;
    public SlotBottomType SlotBottomType => slotBottomType;
    [SerializeField] GameObject pickedObject;
    [SerializeField] GameObject noti;

    [SerializeField] SlotBottomController slotBottomController;

    [SerializeField] Button button;
    public void OnClicked()
    {
        AudioManager.Instance.PlayButtonSound();
        slotBottomController.SlotBottomClicked(this);

        switch (slotBottomType)
        {
            case SlotBottomType.Shop:
                GameUI.Instance.Get<UIShop>().Show();
                break;
            case SlotBottomType.Task:
                GameUI.Instance.Get<UITask>().Show();
                break;
            case SlotBottomType.Home:
                GameUI.Instance.Get<UIHome>().Show();   
                break;
            case SlotBottomType.Challenge:
                GameUI.Instance.Get<UIChallenge>().Show();
                break;
            case SlotBottomType.Rank:
                GameUI.Instance.Get<UILeaderboard>().Show();
                break;
        }

        GameUI.Instance.Get<UIBottom>().Hide();
        GameUI.Instance.Get<UIBottom>().Show();
    }

    public void SetActivePickedObject(bool b)
    {
        pickedObject.SetActive(b);
    }

    public void SetActiveNoti(bool b)
    {
        noti.SetActive(b);
    }

    public void SetSlotBottomCotroller(SlotBottomController slotBottomController)
    {
        this.slotBottomController = slotBottomController;
        button = GetComponent<Button>();
        button.onClick.AddListener(OnClicked);
    }
}

public enum SlotBottomType
{
    Shop, Task, Home, Challenge, Rank
}
