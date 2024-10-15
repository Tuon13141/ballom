using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DefaultData 
{
    public static float BalloonSpeed = 10f;
    public static float BallonRotateSpeed = 50f;
    public static Vector3 balloonSlotOffset = new Vector3(-0f, 0.699f * 2, -0f);
    public static float BalloonBounceHeight = 1.0f;
    public static float BalloonBounceSpeed = 3.0f;
    public static float BalloonOffScreenY = -7f;
    public static int MaxHealth = 5;

    public static float GameTime = 60 * 50;


    public static float PowerUpTime = 45;


    public static float slideDuration = 0.3f;

    //chest gift condition
    public static List<int> levelChests = new List<int> {5, 20, 30, 40, 50, 60 };
    public static List<int> starChests = new List<int> { 1000, 2000, 3000, 4000, 5000, 6000 };
}
