using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class PowerUp : MonoBehaviour
{
    [SerializeField] PowerType powerType;
    [SerializeField] Button button;

    bool canUse = true;

    private void Start()
    {
        button.onClick.AddListener(OnClicked);
    }
    public void OnClicked()
    {
        if (canUse)
        {

            switch (powerType)
            {
                case PowerType.Back:
                    BackPower();
                    break;
                case PowerType.Spot:
                    SpotPower();
                    break;
                case PowerType.Refresh:
                    RefreshPower();
                    break;
                case PowerType.Time:
                    TimePowerUp();
                    break;
            }

            canUse = false;
            GameManager.Instance.UsePower(powerType);
            StartCoroutine(Cooldown());
        }

    }

    void TimePowerUp()
    {
        LevelController.Instance.AddTime(DefaultData.PowerUpTime);
    }

    void BackPower()
    {
        LevelController.Instance.Back();
    }

    void SpotPower()
    {
        LevelController.Instance.Spot();
    }

    void RefreshPower()
    {
        Debug.Log("Refresh Power Up");
        LevelController.Instance.Refresh();
    }

    IEnumerator Cooldown()
    {
        yield return new WaitForSeconds(0.5f);

        canUse = true ;
    }
}

public enum PowerType
{
    Back, Spot, Refresh, Time
}