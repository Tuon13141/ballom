using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SuperScrollView
{
    public class RankSlotRowColItem : MonoBehaviour
    {
        ItemData mItemData;
        int mItemDataIndex = -1;
        public RankSlot rankSlot;

        public void SetItemData(ItemData itemData, int itemIndex, PlayerData playerData, RankType rankType, RankSlotController taskSlotController)
        {
            mItemData = itemData;
            mItemDataIndex = itemIndex;
            rankSlot.SetUp(itemIndex, playerData, rankType, taskSlotController);
        }


    }
}
