using System.Collections.Generic;
using System.Linq;
using UnityEngine;

namespace SuperScrollView
{
    public class GridViewRankSlot : MonoBehaviour
    {
        public LoopGridView mLoopGridView;
        public int mTotalDataCount = 0;
        DataSourceMgr<ItemData> mDataSourceMgr;
        [SerializeField] RankSlotController rankSlotController;

        [SerializeField] List<PlayerData> playerRanks = new List<PlayerData>();

        RankType RankType = RankType.Top;

        // Use this for initialization
        public void OnStart(int count, List<PlayerData> playerRanks, RankType rankType)
        {
            this.RankType = rankType;
            mTotalDataCount = count;
            this.playerRanks = playerRanks;
            mDataSourceMgr = new DataSourceMgr<ItemData>(mTotalDataCount);
            mLoopGridView.ClearAllShownItems();
            mLoopGridView.InitGridView(mDataSourceMgr.TotalItemCount, OnGetItemByRowColumn);
        }

        LoopGridViewItem OnGetItemByRowColumn(LoopGridView gridView, int index, int row, int column)
        {
            if (index < 0 || index >= playerRanks.Count)
            {
                return null;
            }


            //get the data to showing
            ItemData itemData = mDataSourceMgr.GetItemDataByIndex(index);
            if (itemData == null)
            {
                return null;
            }

            LoopGridViewItem item = item = gridView.NewListViewItem("RankItem");

            if (item != null && playerRanks[index] != null)
            {
                RankSlotRowColItem itemScript = item.GetComponent<RankSlotRowColItem>();
                //get your own component
                // IsInitHandlerCalled is false means this item is new created but not fetched from pool.

                //update the item’s content for showing, such as image,text.
                PlayerData playerData = playerRanks[index];
                try
                {
                    itemScript.SetItemData(itemData, index, playerData, RankType, rankSlotController);
                }
                catch
                {
                    Debug.Log(playerData);
                }

            }



            //unitSlotsController.UnitSlots.Add(itemScript.unitSlot);
            return item;
        }
    }
}
