using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UILoadingInGame : UIElement
{
    public override bool ManualHide => false;
    public override bool DestroyOnHide => true;
    public override bool UseBehindPanel => false;

    [SerializeField] float timeToHide;

    public override void Show()
    {
        base.Show();

        StartCoroutine(AutoHide());
    }

    IEnumerator AutoHide()
    {
        yield return new WaitForSeconds(timeToHide);
        GameUI.Instance.Get<UIHome>().StartAnim();
        Hide();
    }
}
