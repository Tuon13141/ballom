namespace UI.SpecialExecute
{
    using System;
    using System.Collections;
    using System.Collections.Generic;
    using System.Linq;
    using DG.Tweening;
    using UnityEngine;
    using Random = UnityEngine.Random;

    public class ElementShake : MonoBehaviour
    {
        [SerializeField] private List<Transform> elementShakeList;
        [SerializeField] private float           repeatingWait = 3f;
        [SerializeField] private float           rotateRight;
        [SerializeField] private float           rotateLeft;

        private const float           BeginWait = 1.5f;
        private       Coroutine       startAllSkakingExecuteCoroutine;
        private       List<Coroutine> smallShakeCoroutineList = new();

        private void OnEnable() { this.startAllSkakingExecuteCoroutine = this.StartCoroutine(this.StartShakingAll()); }

        private void OnDisable()
        {
            this.StopCoroutine(this.startAllSkakingExecuteCoroutine);
            foreach (var smallCoroutin in this.smallShakeCoroutineList)
            {
                this.StopCoroutine(smallCoroutin);
            }
        }

        private IEnumerator StartShakingAll()
        {
            yield return new WaitForSeconds(BeginWait);
            for (var i = 0; i < this.elementShakeList.Count; i++)
            {
                this.smallShakeCoroutineList.Add(this.StartCoroutine(this.Shaking(i)));
                var waitToPlayNextElement = Random.Range(1f, 3f);
                yield return new WaitForSeconds(waitToPlayNextElement);
            }
        }

        private IEnumerator Shaking(int elementId)
        {
            while (true)
            {
                this.RotateLeft(this.elementShakeList[elementId]);
                yield return new WaitForSeconds(this.repeatingWait);
            }
        }

        private void RotateLeft(Transform obj) { obj.DORotate(new Vector3(0, 0, this.rotateRight), 0.2f).OnComplete((delegate { this.RotateRight(obj); })); }

        private void RotateRight(Transform obj) { obj.DORotate(new Vector3(0, 0, this.rotateLeft), 0.3f).OnComplete((delegate { this.RotateToDefault(obj); })); }

        private void RotateToDefault(Transform obj) { obj.DORotate(new Vector3(0, 0, 0), 0.2f); }

       
    }
}