using System;
using System.Collections;
using UnityEngine;

public abstract class UIElement : MonoBehaviour
{
    private Action onHidden;
    public abstract bool ManualHide { get; }
    public abstract bool DestroyOnHide { get; }
    public abstract bool UseBehindPanel { get; }
    [SerializeField] protected GameObject holder;
    public virtual void Show(Action hidden)
    {
        onHidden = hidden;
        Show();
    }
    public virtual void Show()
    {
        GameUI.Instance.Submit(this);
        holder?.SetActive(true);
        transform.SetAsLastSibling();
    }
    public virtual void Hide()
    {
        GameUI.Instance.Unsubmit(this);
        onHidden?.Invoke();
        if (DestroyOnHide)
        {
            GameUI.Instance.Unregister(this);
            Destroy(gameObject);
        }
        else holder?.SetActive(false);
    }
    protected virtual void Awake()
    {
        GameUI.Instance.Register(this);
    }

    public void StartInCorner(int index, int count)
    {
        int time = Mathf.Abs(index);
        RectTransform panelTransform = GetComponent<RectTransform>();

        panelTransform.anchorMin = new Vector2(0, 0);
        panelTransform.anchorMax = new Vector2(1, 1);
        panelTransform.offsetMin = Vector2.zero;
        panelTransform.offsetMax = Vector2.zero;

        panelTransform.anchoredPosition = new Vector2(panelTransform.rect.width * index, 0);
        StartCoroutine(SlideIn(panelTransform, DefaultData.slideDuration * time / count));
    }

    IEnumerator SlideIn(RectTransform panelTransform, float slideDuration)
    {
        Vector2 startPos = panelTransform.anchoredPosition;
        Vector2 endPos = Vector2.zero; // Vị trí chính giữa

        float elapsedTime = 0;
        while (elapsedTime < slideDuration)
        {
            panelTransform.anchoredPosition = Vector2.Lerp(startPos, endPos, elapsedTime / slideDuration);
            elapsedTime += Time.deltaTime;
            yield return null;
        }

        panelTransform.anchoredPosition = endPos; // Đảm bảo vị trí cuối cùng là chính giữa
    }
}