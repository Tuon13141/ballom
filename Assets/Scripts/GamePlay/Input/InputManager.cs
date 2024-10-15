using DG.Tweening;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InputManager : MonoBehaviour
{
    [SerializeField] float rotationSpeed = 0.2f; 
    private Vector2 startTouchPosition;
    private Vector2 currentTouchPosition;
    private bool isDragging = false; 
    [SerializeField] float dragThreshold = 10f;
    [SerializeField] float maxDistance = 100f;

    [SerializeField] LevelController levelController;
    [SerializeField] LevelRenderer levelRenderer;

    [SerializeField] float regionWidthFactor = 9f / 9f;
    [SerializeField] float regionHeightFactor = 5f / 9f;

    float minX, maxX, minY, maxY;

    public bool canTouch = true;
    void Start()
    {
        minX = (Screen.width * (1 - regionWidthFactor)) / 2;
        maxX = Screen.width - minX;
        minY = (Screen.height * (1 - regionHeightFactor)) / 2;
        maxY = Screen.height - minY;
    }

    public void OnStart(LevelController levelController, LevelRenderer levelRenderer)
    {
        this.levelController = levelController;
        this.levelRenderer = levelRenderer;
    }

    public void OnUpdate()
    {
        if (!canTouch) return;

        if (Input.GetMouseButtonDown(0))
        {
            startTouchPosition = Input.mousePosition;
            isDragging = false;
            //Vector3 mouseScreenPosition = Input.mousePosition;

            //Ray ray = levelRenderer.Cam.ScreenPointToRay(mouseScreenPosition);

            //RaycastHit[] hits = Physics.RaycastAll(ray);
            //foreach (RaycastHit hit in hits)
            //{
            //    if (hit.collider.gameObject == levelController.balloonsParent)
            //    {
            //        Debug.Log("Hit A");
            //    }
            //    else
            //    {
            //        return;
            //    }
            //}
        }

        if (Input.GetMouseButton(0))
        {
            if (IsTouchWithinRegion(startTouchPosition))
            {
                //Debug.Log("Touch within the center region.");
            }
            else
            {
                //Debug.Log("Touch outside the center region.");
                return;
            }
            currentTouchPosition = Input.mousePosition;
            Vector3 swipeDirection = startTouchPosition - currentTouchPosition;

            if (swipeDirection.magnitude > dragThreshold)
            {
                isDragging = true;
                float angle = Vector3.Angle(currentTouchPosition, startTouchPosition);
                Rotate(angle + 90, swipeDirection);
                startTouchPosition = currentTouchPosition; 
            }
            
        }

 
        if (Input.GetMouseButtonUp(0))
        {
            if (!isDragging)
            {
                //Debug.Log("Click detected");

                Vector3 mouseScreenPosition = Input.mousePosition;

                Ray ray = levelRenderer.Cam.ScreenPointToRay(mouseScreenPosition);

                RaycastHit hit;
                if (Physics.Raycast(ray, out hit, maxDistance))
                {
                    //Debug.Log("Hit object: " + hit.collider.gameObject.name);

                    Balloon balloon = hit.collider.gameObject.GetComponent<Balloon>();

                    if (balloon != null)
                    {
                        //Debug.Log("Balloon object: " + balloon);
                        levelController.BalloonTouched(balloon);
                        return;
                    }
                }
            }
            isDragging = false; 
        }
    }


    void Rotate(float angle, Vector3 swipeDirection)
    {
        levelController.balloonsParent.transform.Rotate(new Vector3( -swipeDirection.y, swipeDirection.x, 0), (Mathf.Ceil(angle / 10) * 10 - 0) * rotationSpeed * Time.deltaTime, Space.World);
    }

    bool IsTouchWithinRegion(Vector3 touchPosition)
    {
        return (touchPosition.x >= minX && touchPosition.x <= maxX &&
                touchPosition.y >= minY && touchPosition.y <= maxY);
    }

    public IEnumerator CanTouch(bool b)
    {
        float time = 0;
        if (b)
        {
            time = 0.5f;
        }

        yield return new WaitForSeconds(time);
        canTouch = b;
    }
}
