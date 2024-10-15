using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Balloon : MonoBehaviour
{
    [SerializeField] BalloonStates state = BalloonStates.OnScene;
    public BalloonStates State => state;

    [SerializeField] BalloonData balloonData;
    public BalloonData BalloonData => balloonData;

    Vector3 targetPoint;
    Vector3 offSet = DefaultData.balloonSlotOffset;
    float bounceHeight = DefaultData.BalloonBounceHeight;
    float bounceSpeed = DefaultData.BalloonSpeed;
    float rotationSpeed = DefaultData.BallonRotateSpeed;

    Vector3 firstPoint;
    Vector3 topPoint;

    public GameObject Star { get; set; }
    private void Start()
    {
        targetPoint = transform.position;
        firstPoint = transform.localPosition;
    }

    private void Update()
    {
        transform.Rotate(0, (rotationSpeed * balloonData.BalloonType / 2) * Time.deltaTime, 0);
        if (state == BalloonStates.MovingToSlot)
        {
            gameObject.transform.position = Vector3.Lerp(gameObject.transform.position, targetPoint, Time.deltaTime * DefaultData.BalloonSpeed);
            if (Vector3.Distance(transform.position, targetPoint) <= 0.07f)
            {
                state = BalloonStates.OnSlot;
            }
        }

        else if (state == BalloonStates.MovingToTop)
        {
            gameObject.transform.position = Vector3.Lerp(gameObject.transform.position, targetPoint, Time.deltaTime * DefaultData.BalloonSpeed);
            if (Vector3.Distance(transform.position, targetPoint) <= 0.07f)
            {
                StarPopUp starPopUp = Instantiate(Star).GetComponent<StarPopUp>();
                starPopUp.transform.position = transform.position;
                starPopUp.SetTargetPoint(topPoint);
                state = BalloonStates.OnDestroy;
                Destroy(this.gameObject);
            }
        }

        else if (state == BalloonStates.MovingToScene) 
        {
            gameObject.transform.localPosition = Vector3.Lerp(gameObject.transform.localPosition, firstPoint, Time.deltaTime * DefaultData.BalloonSpeed);
            if (Vector3.Distance(transform.localPosition, firstPoint) <= 0.07f)
            {
                state = BalloonStates.OnScene;
            }
        }
    }
    public void SetUp(BalloonData balloonData, GameObject star)
    {
        Star = star;
        this.balloonData = balloonData;
    }

    public bool Touched()
    {
        if (state != BalloonStates.OnScene) return false;

        // Debug.Log("Touched" + balloonData.BalloonType);

        

        return true;
    }

    public void SetTargetPoint(Transform targetPoint)
    {
        if (state == BalloonStates.OnScene || state == BalloonStates.OnSlot || state == BalloonStates.MovingToSlot)
        {
            ResetRotation();
            this.targetPoint = targetPoint.position + offSet;
            state = BalloonStates.MovingToSlot;

            transform.rotation = LevelController.Instance.LevelRenderer.Cam.transform.rotation;
        }     
    }

    public void ResetRotation()
    {
        this.transform.rotation = Quaternion.Euler(0, 0, 0);
    }

    public Slot Slot { get; set; }

    bool hadUp = false;

    public void Remove(Transform topPoint)
    {
        state = BalloonStates.MovingToTop;

        this.targetPoint = transform.position + new Vector3(0, 1, 0);
        this.topPoint = topPoint.position;

        Slot.RemoveBalloon();
    }

    public void DestroyBalloon()
    {
        Destroy(this.gameObject);
    }

    public void BackToScene()
    {
        state = BalloonStates.MovingToScene;
    }
}


public enum BalloonStates
{
    OnScene, MovingToSlot, OnSlot, MovingToTop, OnDestroy, MovingToScene
}