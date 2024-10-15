using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using TMPro;
public class LevelController : Singleton<LevelController>
{
    [SerializeField] InputManager inputManager;
    [SerializeField] LevelRenderer levelRenderer;
    public LevelRenderer LevelRenderer => levelRenderer;

    public GameObject balloonsParent;
    public GameObject balloonSlotsParent;
    [SerializeField] Transform topPoint;

    [SerializeField] List<Balloon> balloons = new List<Balloon>();
    public List<Balloon> Balloons => balloons;

    [SerializeField] List<Slot> slots = new List<Slot>();

    bool canRun = false;

    float gameTime = DefaultData.GameTime;
    
    public void OnStart()
    {
        StartCoroutine(Run());
        GameUI.Instance.Get<UIGameplay>().Show();
        GameManager.Instance.ChangeState(GameStates.Play);
    }

    IEnumerator Run()
    {
        yield return new WaitForEndOfFrame();

        inputManager = GetComponent<InputManager>();
        levelRenderer = GetComponent<LevelRenderer>();


        levelRenderer.OnStart(this);
        inputManager.OnStart(this, levelRenderer);

        canRun = true;
    }
    private void Update()
    {
        if(!canRun) return;
        inputManager.OnUpdate();
    }

    List<Balloon> balloonOrder = new List<Balloon>();
    public void BalloonTouched(Balloon balloon)
    {
        foreach (Slot slot in slots)
        {
            if(slot.Balloon == null)
            {
                if (balloon.Touched())
                {
                    slot.SetBalloon(balloon);
                    balloonOrder.Add(balloon);
                    //balloon.SetTargetPoint(slot.transform);
                    balloon.gameObject.transform.SetParent(balloonSlotsParent.transform);
                    break;
                }
                break;
            }
        }

        ReOrderSlotsByGroup();

        StartCoroutine(CheckBalloonGroup());

    }

    List<Balloon> slotBalloons = new List<Balloon>();

    bool canTouch = true;
    void ReOrderSlotsByGroup()
    {
        if (slots.Count <= 0 || slots[0].Balloon == null)
        {
            return;
        }

        slotBalloons = new List<Balloon>();
        List<int> checkedSlots = new List<int>();
        for (int i = 0; i < slots.Count; i++)
        {
            if(slots[i].Balloon == null) break;
            if (checkedSlots.Contains(slots[i].Balloon.BalloonData.BalloonType)) continue;

            checkedSlots.Add(slots[i].Balloon.BalloonData.BalloonType);
            slotBalloons.Add(slots[i].Balloon);

            for(int j = 0; j < slots.Count; j++)
            {
                if(slots[j].Balloon == null) break;
                if(slots[i].Balloon.BalloonData.BalloonType == slots[j].Balloon.BalloonData.BalloonType && slots[i] != slots[j])
                {
                    slotBalloons.Add(slots[j].Balloon);
                }
            }
        }

        for (int i = 0; i < slots.Count; i++)
        {
            slots[i].RemoveBalloon();

            if (i < slotBalloons.Count)
            {
                slots[i].SetBalloon(slotBalloons[i]);
                slotBalloons[i].Slot = slots[i];
                slotBalloons[i].SetTargetPoint(slots[i].OriginalPosition);
            }
        }
    }

    public void ReOrderSlot()
    {
        for (int i = 0; i < slots.Count; i++)
        {
            if (slots[i].Balloon == null)
            {
                for (int j = i + 1; j < slots.Count; j++)
                {
                    Slot next = slots[j];
                    if (next.Balloon != null)
                    {
                        next.Balloon.SetTargetPoint(slots[i].OriginalPosition);
                        slots[i].SetBalloon(next.Balloon);
                        next.RemoveBalloon();
                        break;
                    }
                }

            }
        }
    }

    IEnumerator CheckBalloonGroup()
    {
        if (slotBalloons.Count < 3)
        {
            yield break;
        }

        bool needToCheck = true;

        for (int i = 0; i < slots.Count - 2;)
        {
            Balloon balloon_1 = slots[i].Balloon;
            Balloon balloon_2 = slots[i + 1].Balloon;
            Balloon balloon_3 = slots[i + 2].Balloon;

            if (balloon_1 == null || balloon_2 == null || balloon_3 == null)
            {
                i++;
                continue;
            }


            if (slots[i].Balloon.BalloonData.BalloonType == slots[i + 1].Balloon.BalloonData.BalloonType && slots[i].Balloon.BalloonData.BalloonType == slots[i + 2].Balloon.BalloonData.BalloonType)
            {
                yield return new WaitUntil(() => balloon_1.State == BalloonStates.OnSlot && balloon_2.State == BalloonStates.OnSlot && balloon_3.State == BalloonStates.OnSlot);

                balloons.Remove(balloon_1);
                balloons.Remove(balloon_2);
                balloons.Remove(balloon_3);

                balloonOrder.Remove(balloon_1);
                balloonOrder.Remove(balloon_2);
                balloonOrder.Remove(balloon_3);

                //Debug.Log(BalloonTypeDict[slots[i].Balloon.BalloonData.BalloonType].Count);

                BalloonTypeDict[slots[i].Balloon.BalloonData.BalloonType].Remove(balloon_1);
                BalloonTypeDict[slots[i].Balloon.BalloonData.BalloonType].Remove(balloon_2);
                BalloonTypeDict[slots[i].Balloon.BalloonData.BalloonType].Remove(balloon_3);

                //Debug.Log(BalloonTypeDict[slots[i].Balloon.BalloonData.BalloonType].Count);

                balloon_1.Remove(topPoint);
                balloon_2.Remove(topPoint);
                balloon_3.Remove(topPoint);

                GameManager.Instance.AddBalloon(3);
                i += 3;

                if(Balloons.Count <= 0)
                {
                    StartCoroutine(Win());
                }

                needToCheck = false;
            }
            else
            {
                i++;
            }
        }

        
        
        ReOrderSlot();

        bool isLose = false;

        if (needToCheck) 
        {
            isLose = true;
            foreach (Slot slot in slots)
            {
                if (slot.Balloon == null)
                {
                    isLose = false; break;
                }
            }
        }

        if (isLose)
        {
           StartCoroutine(Lose());
        }
    }

    public void Reset()
    {
        StopCoroutine(countDown);
        Destroy(balloonSlotsParent);
        Destroy(balloonsParent);
        foreach(Slot slot in slots)
        {
            slot.RemoveBalloon();
        }
        gameTime = DefaultData.GameTime;
        slotBalloons.Clear();
        balloons.Clear();
        balloonOrder.Clear();
        balloonTypeDict.Clear();
        canRun = false;
    }

    IEnumerator Win()
    {
        Debug.Log("Win");

        GameManager.Instance.ChangeState(GameStates.Win);


        yield return new WaitForSeconds(1);
        GameUI.Instance.Get<UIWin>().Show();
        GameUI.Instance.Get<UIGameplay>().Hide();

        
        Reset();
    }

    IEnumerator Lose()
    {
        Debug.Log("Lose");
        GameManager.Instance.ChangeState(GameStates.Lose);

        yield return new WaitForSeconds(1);
        GameUI.Instance.Get<UILose>().Show();
        GameUI.Instance.Get<UIGameplay>().Hide();

        Reset();
    }

    Coroutine countDown;
    string SecondToMinute(float seconds)
    {
        int minutes = Mathf.FloorToInt(seconds / 60);
        int secs = Mathf.FloorToInt(seconds % 60);
        return string.Format("{0:00}:{1:00}", minutes, secs);
    }

    public void CountDown(TextMeshProUGUI timeText)
    {
        countDown = StartCoroutine(CountDownEnum(timeText));
    }
    IEnumerator CountDownEnum(TextMeshProUGUI timeText)
    {
        while(gameTime > 0)
        {
            yield return new WaitForSeconds(1f);
            gameTime--;
            timeText.text = SecondToMinute(gameTime);
        }

        if (gameTime <= 0)
        {
            StartCoroutine(Lose());
            yield break;
        }
    }

    public void AddTime(float time) { gameTime += time; }

    public void Refresh()
    {
        Destroy(balloonSlotsParent);
        Destroy(balloonsParent);
        foreach (Slot slot in slots)
        {
            slot.RemoveBalloon();
        }

        slotBalloons.Clear();
        balloons.Clear();
        balloonOrder.Clear();
        balloonTypeDict.Clear();
        canRun = false;
        StartCoroutine(Run());
    }

    public void Back()
    {
        int count = balloonOrder.Count - 1;
        if(count < 0) return;

        Balloon balloon = balloonOrder[count];
        balloon.gameObject.transform.parent = balloonsParent.transform;
        balloon.gameObject.transform.rotation = balloonsParent.transform.rotation;
        balloon.BackToScene();
        balloonOrder.Remove(balloon);
        slotBalloons.Remove(balloon);
        balloon.Slot.RemoveBalloon();
       
        StartCoroutine(AddBackToBalloonTypeDict(balloon));
    }

    IEnumerator AddBackToBalloonTypeDict(Balloon balloon)
    {
        canSpot = false;
        yield return new WaitUntil(() => balloon.State == BalloonStates.OnScene);

        BalloonTypeDict[balloon.BalloonData.BalloonType].Add(balloon);

        yield return new WaitForEndOfFrame();
        canSpot = true;
    }

    Dictionary<int, List<Balloon>> balloonTypeDict = new();
    public Dictionary<int, List<Balloon>> BalloonTypeDict => balloonTypeDict;

    bool canSpot = true;
    public void Spot()
    {
        if (!canSpot) return;
        List<Slot> slotEmpty = new List<Slot>();
        foreach (Slot slot in slots)
        {
            if (slot.Balloon == null)
            {
                slotEmpty.Add(slot);
                if (slotEmpty.Count >= 3) break;
            }
        }

        if (slotEmpty.Count >= 3)
        {
            Debug.Log(3);
            foreach (int key in BalloonTypeDict.Keys)
            {
                List<Balloon> temp = BalloonTypeDict[key];

                if (temp.Count < 3)
                {
                    Debug.Log(3.1);
                    continue;
                }
                else
                {
                    Debug.Log(3.2);
                    List<Balloon> spots = new List<Balloon>();
                    for (int i = 0; i < temp.Count; i++)
                    {
                        if (temp[i].Touched()) spots.Add(temp[i]);
                        if (spots.Count >= 3) break;
                    }

                    if(spots.Count >= 1)
                    {
                        foreach(Balloon spot in spots)
                        {
                            SpotTouch(spot, slotEmpty);
                        }
                        return;
                    }
                    
                }
            }

            Debug.Log("Can't use Spot Power Up");
        }
        else if (slotEmpty.Count == 2)
        {
            Debug.Log(2);
            int type = -1;

            for(int j = 0; j < balloonOrder.Count; j++)
            {             
                Balloon balloon_1 = balloonOrder[j];

                if (type != -1 && type == balloon_1.BalloonData.BalloonType)
                {
                    continue;
                }

                type = balloon_1.BalloonData.BalloonType;
                List<Balloon> temp = BalloonTypeDict[type];

                if (temp.Count <= 0)
                {
                    continue;
                }

                for (int i = j+1; i < balloonOrder.Count; i++)
                {
                    if (balloonOrder[i].BalloonData.BalloonType == type)
                    {                 
                        Balloon balloon_2 = balloonOrder[i];
                       
                        if (temp.Count <= 0)
                        {                        
                            break ;
                        }
                        else
                        {
                            foreach (Balloon tmpb in temp)
                            {
                                if(tmpb != balloon_1 && tmpb != balloon_2)
                                {
                                    if (!temp[i].Touched()) continue;
              
                                    SpotTouch(tmpb, slotEmpty);
                                    return;
                                } 
                            }

                            break;
                        }
                    }
                }

                if(temp.Count >= 3)
                {
                    int count = 0;
                    List<Balloon> spots = new List<Balloon>();
                    foreach (Balloon tmpb in temp)
                    {
                      
                        if (tmpb != balloon_1 && tmpb.Touched())
                        {
                            spots.Add(tmpb);
                            count++;
                            if (count == 2)
                                break ;
                        }
                    }

                    if (spots.Count >= 2)
                    {
                        foreach (Balloon spot in spots)
                        {
                            SpotTouch(spot, slotEmpty);
                        }
                        return;
                    }
                    else
                    {
                        Debug.Log("Can't use Spot Power Up");
                    }
                }
            }

            Debug.Log("Can't use Spot Power Up");
        }
        else if (slotEmpty.Count == 1)
        {
            Debug.Log(1);
            int type = -1;

            for (int j = 0; j < balloonOrder.Count; j++)
            {
                Balloon balloon_1 = balloonOrder[j];

                if (type != -1 && type == balloon_1.BalloonData.BalloonType)
                {
                    continue;
                }
                    

                type = balloon_1.BalloonData.BalloonType;
                List<Balloon> temp = BalloonTypeDict[type];

                if (temp.Count <= 0)
                {
                    continue;
                }


                for (int i = j + 1; i < balloonOrder.Count; i++)
                {
                    if (balloonOrder[i].BalloonData.BalloonType == type)
                    {
                        Balloon balloon_2 = balloonOrder[i];

                        if (temp.Count <= 0) break;
                        else
                        {
                            foreach (Balloon tmpb in temp)
                            {
                                if (tmpb != balloon_1 && tmpb != balloon_2 && tmpb.Touched())
                                {
                                    SpotTouch(tmpb, slotEmpty);
                                    return;
                                }
                            }

                            Debug.Log("Can't use Spot Power Up");
                            return;
                        }
                    }
                }
            }

            Debug.Log("Can't use Spot Power Up");

        }
    }

    void SpotTouch(Balloon balloon, List<Slot> slotEmpty)
    {
        foreach (Slot slot in slotEmpty)
        {
            if (slot.Balloon == null)
            {
                if (balloon.Touched())
                {
                    slot.SetBalloon(balloon);
                    balloonOrder.Add(balloon);
                    balloon.gameObject.transform.SetParent(balloonSlotsParent.transform);
                }
                break;
            }
        }

        ReOrderSlotsByGroup();

        StartCoroutine(CheckBalloonGroup());
    }

    public void Pause(bool b)
    {
        canRun = b;
        StartCoroutine(inputManager.CanTouch(b));
    }
}


