using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SlotBottomController : MonoBehaviour
{
    [SerializeField] List<SlotBottom> slotBottoms = new List<SlotBottom>();
    [SerializeField] SlotBottomType currentSlotBottomType = SlotBottomType.Home;
    void Start()
    {
        foreach (SlotBottom slot in slotBottoms)
        {
            slot.SetSlotBottomCotroller(this);
            if(slot.SlotBottomType == SlotBottomType.Home)
            {
                slot.SetActivePickedObject(true);
            }
        }
    }

    public void SlotBottomClicked(SlotBottom slot)
    {
        switch (currentSlotBottomType)
        {
            case SlotBottomType.Shop:
                //GameUI.Instance.Get<UIShop>().Hide();
                break;
            case SlotBottomType.Task:
                //GameUI.Instance.Get<UITask>().Hide();
                break;
            case SlotBottomType.Home:
              
                break;
            case SlotBottomType.Challenge:

                break;
            case SlotBottomType.Rank:

                break;
        }

        currentSlotBottomType = slot.SlotBottomType;
        foreach(SlotBottom slotBottom in slotBottoms)
        {
            slotBottom.SetActivePickedObject(false);
        }

        slot.SetActivePickedObject(true);
    }
}
