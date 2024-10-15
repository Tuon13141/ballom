using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TaskRect : MonoBehaviour
{
    public RectTransform parentObject;

    public RectTransform referenceObjectC;
    public ScrollRect scrollRect;

    private void Update()
    {
        AdjustHeight();
    }
    public void AdjustHeight()
    {
        float totalHeight = 0;

        foreach (RectTransform child in parentObject)
        {
            totalHeight += child.rect.height;
            //if (referenceObjectC != null) Debug.Log(child.rect.height);
        }
        float heightOfC = 0;
        if (referenceObjectC != null)
            heightOfC = referenceObjectC.rect.height;

        float finalHeight = Mathf.Max(totalHeight, heightOfC);

        Vector2 newSize = parentObject.sizeDelta;
        newSize.y = finalHeight;
        // if (referenceObjectC != null) Debug.Log(newSize);
        if (scrollRect != null) Debug.Log(scrollRect.verticalNormalizedPosition);
        parentObject.sizeDelta = newSize;
    }
}
