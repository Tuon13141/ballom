using System;

[Serializable]
public class EmergencyBase : Field
{
    public override int ID { get; protected set; }
    public int RoomType { get; protected set; }
    public int MinCash { get; protected set; }
    public int MaxCash { get; protected set; }
    public int Level { get; protected set; }
}
public class EmergencyConfig : Table<EmergencyBase>
{
}