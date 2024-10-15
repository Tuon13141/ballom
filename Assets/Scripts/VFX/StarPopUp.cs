using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StarPopUp : MonoBehaviour
{
    bool canMove;
    Vector3 targetPoint;
    void Start()
    {
        transform.rotation = LevelController.Instance.LevelRenderer.Cam.transform.rotation;
    }

    // Update is called once per frame
    void Update()
    {
        if(!canMove) return;

        gameObject.transform.position = Vector3.Lerp(gameObject.transform.position, targetPoint, Time.deltaTime * DefaultData.BalloonSpeed);
        if (Vector3.Distance(transform.position, targetPoint) <= 0.07f)
        {
            Destroy(this.gameObject);
        }
    }

    public void SetTargetPoint(Vector3 targetPoint)
    {
        this.targetPoint = targetPoint;
        canMove = true;
    }
}
