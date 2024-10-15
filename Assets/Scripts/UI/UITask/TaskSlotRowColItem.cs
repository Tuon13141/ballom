using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SuperScrollView
{
    public class TaskSlotRowColItem : MonoBehaviour
    {
        ItemData mItemData;
        int mItemDataIndex = -1;
        public TaskSlot taskSlot;

        public void SetItemData(ItemData itemData, int itemIndex, Sprite iconSprite, TaskSO taskSO, TaskSlotController taskSlotController)
        {
            mItemData = itemData;
            mItemDataIndex = itemIndex;
            taskSlot.SetUp(iconSprite, taskSO, taskSlotController);
            taskSlot.Index = itemIndex;
        }


    }
}
