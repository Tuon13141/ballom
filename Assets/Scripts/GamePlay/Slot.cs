using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Slot : MonoBehaviour
{
    [SerializeField] Balloon balloon = null;
    [SerializeField] GameObject shader;
    [SerializeField] GameObject effect;
    public Balloon Balloon => balloon;

    [SerializeField] float sinkDistance = 0.2f;
    [SerializeField] float duration = 0.5f;

    private Vector3 originalLocalPosition;
    private Transform originalPosition;
    public Transform OriginalPosition => originalPosition;
    bool isBalloon;
    void Start()
    {
        originalLocalPosition = transform.localPosition;
        originalPosition = transform;
    }
    public void SetBalloon(Balloon balloon)
    {
        if (this.balloon == null && this.balloon != balloon)
        {
            isBalloon = false;
            this.balloon = balloon;
        }
            
        //StartSinkEffect();
    }

    public void SetEffect(bool b)
    {
        effect.SetActive(b);
    }

    public void SetShader(bool b)
    {
        shader.SetActive(b);
    }

    public void StartSinkEffect(Balloon balloon)
    {
        StartCoroutine(SinkAndReturn(balloon));
    }

    private IEnumerator SinkAndReturn(Balloon balloon)
    {
        if (!isBalloon)
        {
            Vector3 targetPosition = originalLocalPosition - new Vector3(0, sinkDistance, 0);
            float halfDuration = duration / 2f;

            if (balloon == this.balloon) isBalloon = true;
            effect.SetActive(true);
            yield return MoveToPosition(targetPosition, halfDuration);

            yield return MoveToPosition(originalLocalPosition, halfDuration);
            effect.SetActive(false);
        }      
    }

    private IEnumerator MoveToPosition(Vector3 target, float time)
    {
        Vector3 startPosition = transform.localPosition;
        float elapsedTime = 0f;

        while (elapsedTime < time)
        {
            transform.localPosition = Vector3.Lerp(startPosition, target, (elapsedTime / time));
            elapsedTime += Time.deltaTime;
            yield return null;
        }

        transform.localPosition = target;
    }
    public void RemoveBalloon() { this.balloon = null; isBalloon = false; }

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.GetComponent<Balloon>() != null)
        {
            shader.SetActive(true);
            StartSinkEffect(other.gameObject.GetComponent<Balloon>());
        }
    }

    private void OnTriggerStay(Collider other)
    {
        if (other.gameObject.GetComponent<Balloon>() != null)
        {
            shader.SetActive(true);
        }
    }

    private void OnTriggerExit(Collider other)
    {

        if (other.gameObject.GetComponent<Balloon>() != null)
        {
            shader.SetActive(false);
        }
    }
}
