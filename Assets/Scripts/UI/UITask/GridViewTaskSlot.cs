using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SuperScrollView
{
    public class GridViewTaskSlot : MonoBehaviour
    {
        public LoopGridView mLoopGridView;
        public int mTotalDataCount = 0;
        DataSourceMgr<ItemData> mDataSourceMgr;
        [SerializeField] TaskSlotController taskSlotController;

        [SerializeField] List<TaskSO> taskSOs = new List<TaskSO>();
       
        // Use this for initialization
        public void OnStart(int count, List<TaskSO> taskSOs)
        {
            mTotalDataCount = count;
            this.taskSOs = taskSOs;
            mDataSourceMgr = new DataSourceMgr<ItemData>(mTotalDataCount);
            mLoopGridView.ClearAllShownItems();
            mLoopGridView.InitGridView(mDataSourceMgr.TotalItemCount, OnGetItemByRowColumn);  
        }

        LoopGridViewItem OnGetItemByRowColumn(LoopGridView gridView, int index, int row, int column)
        {
            if (index < 0 || index >= taskSOs.Count)
            {
                return null;
            }


            //get the data to showing
            ItemData itemData = mDataSourceMgr.GetItemDataByIndex(index);
            if (itemData == null)
            {
                return null;
            }

            LoopGridViewItem item = item = gridView.NewListViewItem("TaskItem");

            if (item != null  && taskSOs[index] != null)
            {
                TaskSlotRowColItem itemScript = item.GetComponent<TaskSlotRowColItem>();
                //get your own component
                // IsInitHandlerCalled is false means this item is new created but not fetched from pool.

                //update the item’s content for showing, such as image,text.
                TaskSO taskSO = taskSOs[index];
                try
                {
                    itemScript.SetItemData(itemData, index, taskSlotController.GetTaskSprite(taskSO), taskSO, taskSlotController);
                }
                catch
                {
                    Debug.Log(taskSO);
                }

            }
     


            //unitSlotsController.UnitSlots.Add(itemScript.unitSlot);
            return item;
        }
    }
}
