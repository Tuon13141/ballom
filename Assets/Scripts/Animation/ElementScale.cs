namespace UI.SpecialExecute
{
    using System.Collections;
    using System.Collections.Generic;
    using DG.Tweening;
    using UnityEngine;

    public class ElementScale : MonoBehaviour
    {
        [SerializeField] private List<Transform> elementScaleList;
        [SerializeField] private float           repeatingWait = 3f;
        [SerializeField] private float           zoomInSize;
        [SerializeField] private float           zoomOutSize;
        
        private const float           BeginWait = 1.5f;
        private       Coroutine       startAllScaleExecuteCoroutine;
        private       List<Coroutine> smallScaleCoroutineList = new();

        private void OnEnable() { this.startAllScaleExecuteCoroutine = this.StartCoroutine(this.StartScalingAll()); }

        private void OnDisable()
        {
            this.StopAllCoroutines();
        }

        private IEnumerator StartScalingAll()
        {
            yield return new WaitForSeconds(BeginWait);
            for (var i = 0; i < this.elementScaleList.Count; i++)
            {
                this.smallScaleCoroutineList.Add(this.StartCoroutine(this.Scaling(i)));
                var waitToPlayNextElement = Random.Range(1f, 3f);
                yield return new WaitForSeconds(waitToPlayNextElement);
            }
        }

        private IEnumerator Scaling(int elementId)
        {
            while (true)
            {
                this.ScaleUp(this.elementScaleList[elementId]);
                yield return new WaitForSeconds(this.repeatingWait);
            }
        }

        private void ScaleUp(Transform obj) { obj.DOScale(this.zoomInSize * Vector3.one, 0.5f).OnComplete((delegate { this.ScaleToDefault(obj); })); }


        private void ScaleToDefault(Transform obj) { obj.DOScale(this.zoomOutSize * Vector3.one, 0.5f); }

        public void StopAllCoroutines()
        {
            this.StopCoroutine(this.startAllScaleExecuteCoroutine);
            foreach (var smallCoroutin in this.smallScaleCoroutineList)
            {
                this.StopCoroutine(smallCoroutin);
            }
        }
    }
}