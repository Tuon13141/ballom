using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UIShop : UIElement
{
    public override bool ManualHide => false;
    public override bool DestroyOnHide => false;
    public override bool UseBehindPanel => false;

    public override void Show()
    {
        base.Show();
        GameUI.Instance.AddSliderElements(this, 1);
    }
}
