using Newtonsoft.Json;
using System.Collections.Generic;
using UnityEngine;
using System;
[System.Serializable]
public class MapData
{
    public int Level;
    public int MaxRow;
    public int MaxCol;
    public SerializableDictionary<string, int> Ids;
    public Seed Seed;
    public SerializableDictionary<string, List<BalloonData>> Layers;
    public bool isCross;
    public int Mix;
    public int Type;
}

[Serializable]
public class BalloonData
{
    public int ID;
    public int Layer;
    public int Row;
    public int Col;
    public int BalloonType;
    public bool IsHeapTile;
    public bool HasBalloonType;

}

[Serializable]
public class Seed { }

[Serializable]
public class SerializableDictionary<TKey, TValue> : Dictionary<TKey, TValue>, ISerializationCallbackReceiver
{
    [SerializeField] private List<TKey> keys = new List<TKey>();
    [SerializeField] private List<TValue> values = new List<TValue>();

    private Dictionary<TKey, TValue> dictionary = new Dictionary<TKey, TValue>();

    public Dictionary<TKey, TValue> Dictionary => dictionary;

    public void OnBeforeSerialize()
    {
        keys.Clear();
        values.Clear();

        foreach (var pair in dictionary)
        {
            keys.Add(pair.Key);
            values.Add(pair.Value);
        }
    }

    public void OnAfterDeserialize()
    {
        dictionary.Clear();

        if (keys.Count != values.Count)
        {
            Debug.LogError("There are unequal keys and values after deserialization");
            return;
        }

        for (int i = 0; i < keys.Count; i++)
        {
            dictionary.Add(keys[i], values[i]);
        }
    }
}
