using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Newtonsoft.Json;
using System.Linq;
public class LevelRenderer : MonoBehaviour
{
    [SerializeField] private float cameraDistance = 10f;
    [SerializeField] Camera _cam;
    public Camera Cam => _cam;

    [SerializeField] private GameObject balloonPrefab;
    [SerializeField] private Mesh[] balloonMeshes;
    [SerializeField] private Texture2D[] balloonTextures;   
    [SerializeField] private float rowScale = 0.5f;
    [SerializeField] private float colScale = 0.5f;
    [SerializeField] private float layerScale = 2f; 
    [SerializeField] private List<GameObject> balloonTypes;

    [SerializeField] int level = 1;

    [SerializeField] MapData balloonMap;

    [SerializeField] List<BalloonData> balloonData;

    private List<Vector3> balloonPositions = new List<Vector3>();

    [SerializeField] LevelController levelController;

    [SerializeField] bool renderByChoice = false;
    [SerializeField] int levelChoice = 1;


    [SerializeField] GameObject Star;
    public int currentLevel { get; set; } = 0;
    public void OnStart(LevelController levelController)
    {
        this.levelController = levelController;
        level = GameManager.Instance.userData.level + 1;
        TextAsset jsonFile;
        if (!renderByChoice)
        {
            string levelFileName = $"Level_{level.ToString("D5")}";
            Debug.Log(levelFileName);
            jsonFile = Resources.Load<TextAsset>($"Map/{levelFileName}");
            currentLevel = level;
        }

        else
        {
            string levelFileName = $"Level_{levelChoice.ToString("D5")}";
            Debug.Log(levelFileName);
            jsonFile = Resources.Load<TextAsset>($"Map/{levelFileName}");
            currentLevel = levelChoice;
        }


        if (jsonFile != null)
        {
            string json = jsonFile.text;
            balloonMap = JsonConvert.DeserializeObject<MapData>(json);

            List<Balloon> balloons = RenderMap(balloonMap);

            levelController.balloonsParent = new GameObject("Balloons Parent");

            levelController.balloonSlotsParent = new GameObject("Balloon Slots Parent");
            levelController.Balloons.AddRange(balloons);

            Vector3 centroid = CalculateCentroid();
            levelController.balloonsParent.transform.position = centroid;

            foreach (Balloon balloon in balloons)
            {
                balloon.gameObject.transform.parent = levelController.balloonsParent.transform;
                //balloon.gameObject.transform.rotation = _cam.transform.rotation;
            }
            

            FocusCameraOnCentroid(levelController.balloonsParent, _cam);
            levelController.balloonsParent.transform.rotation = _cam.transform.rotation;
        }
        else
        {
            Debug.LogError("Không thể tải file JSON từ Resources.");
        }
    }

    private List<Balloon> RenderMap(MapData mapData)
    {
        List<Balloon> balloonList = new List<Balloon>();
        Dictionary<string, int> balloonTypeCounts = new Dictionary<string, int>();

        // Initialize the counts for each BalloonType
        foreach (var id in mapData.Ids.Keys)
        {
            if (!balloonTypeCounts.ContainsKey(id))
            {
                balloonTypeCounts[id] = 0;               
            }
        }


        foreach (var layer in mapData.Layers)
        {
            foreach (var tile in layer.Value)
            {
                if (balloonTypeCounts.ContainsKey(tile.BalloonType.ToString()))
                {
                    balloonTypeCounts[tile.BalloonType.ToString()]++;
                }
            }
        }

        mapData = UpdateBalloonTypes(mapData, balloonTypeCounts);
        foreach (var layer in mapData.Layers)
        {
            foreach (var tile in layer.Value)
            {
                if (balloonPrefab != null)
                {
                    Vector3 position = new Vector3(
                        tile.Col * colScale,
                        tile.Layer * layerScale,
                        tile.Row * rowScale
                    );

                    GameObject balloonInstance = Instantiate(balloonPrefab, position, Quaternion.identity);
                    //balloonInstance.transform.parent = levelParent.transform;
                    Balloon balloonScript = balloonInstance.AddComponent<Balloon>();
                    balloonScript.SetUp(tile, Star);

                    int meshIndex = mapData.Ids[tile.BalloonType.ToString()] - 1;
                    
                    MeshFilter meshFilter = balloonInstance.GetComponentInChildren<MeshFilter>();
                    meshFilter.mesh = balloonMeshes[meshIndex];

                    int textureIndex = tile.BalloonType - 1;
                    Texture balloonTexture = balloonTextures[textureIndex];
                    MeshRenderer meshRenderer = balloonInstance.GetComponentInChildren<MeshRenderer>();
                    meshRenderer.material.mainTexture = balloonTexture;

                    balloonData.Add(tile);
                    balloonPositions.Add(balloonInstance.transform.position);
                    balloonList.Add(balloonScript);

                    int type = tile.BalloonType;
                    Dictionary<int, List<Balloon>> balloonTypeDict = levelController.BalloonTypeDict;
                    if (balloonTypeDict.ContainsKey(type))
                    {
                        balloonTypeDict[type].Add(balloonScript);
                    }
                    else
                    {
                        List<Balloon> newBalloons = new List<Balloon>();
                        balloonTypeDict[type] = newBalloons;
                        balloonTypeDict[type].Add(balloonScript);
                    }
                
                }
            }
        }

        return balloonList;
    }


    // Hàm cập nhật loại bóng
    private MapData UpdateBalloonTypes(MapData mapData, Dictionary<string, int> balloonTypeCounts)
    {

        foreach (var layer in mapData.Layers)
        {
            foreach (var tile in layer.Value)
            {
                if (tile.BalloonType == 0)
                {
                    Debug.Log("0000");
                    bool checkChanged = false;
                    foreach (var key in balloonTypeCounts.Keys)
                    {
                        if(balloonTypeCounts[key] == 0 || balloonTypeCounts[key] % 3 != 0)
                        {
                            tile.BalloonType = int.Parse(key);
                            checkChanged = true;
                            break;
                        }
                    }

                    if (!checkChanged)
                    {
                        tile.BalloonType = int.Parse(Random.Range(1, balloonTypeCounts.Keys.Count).ToString());
                    }
                }
            }
        }

        return mapData; // Trả về mapData đã sửa đổi
    }

    private Vector3 CalculateCentroid()
    {
        if (balloonPositions.Count == 0)
        {
            Debug.LogWarning("No balloon instances available to calculate centroid.");
            return Vector3.zero;
        }
        Vector3 sum = Vector3.zero;
        foreach (Vector3 pos in balloonPositions)
        {
            sum += pos;
        }
        Vector3 centroid = sum / balloonPositions.Count;
        return centroid;

    }
    private void FocusCameraOnCentroid(GameObject objectA, Camera _cam)
    {
        Bounds bounds = new Bounds(objectA.transform.position, Vector3.zero);

        foreach (Renderer renderer in objectA.GetComponentsInChildren<Renderer>())
        {
            bounds.Encapsulate(renderer.bounds);
        }

        float radius = bounds.extents.magnitude;

        float verticalCoverageFactor = 5.75f / 9f;
        float cameraVerticalHalfAngle = Mathf.Deg2Rad * _cam.fieldOfView / 2f;

        float distanceToCamera = (radius / verticalCoverageFactor) / Mathf.Tan(cameraVerticalHalfAngle);

        Vector3 cameraDirection = (_cam.transform.position - bounds.center).normalized;

        _cam.transform.position = bounds.center + cameraDirection * distanceToCamera;

        _cam.transform.LookAt(bounds.center);

        _cam.nearClipPlane = Mathf.Min(0.1f, distanceToCamera / 2f);
        _cam.farClipPlane = Mathf.Max(1000f, distanceToCamera * 2f);
    }
}
