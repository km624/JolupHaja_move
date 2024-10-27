using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class LadderSpawner : MonoBehaviour
{
    public GameObject ladder;

    public List<Transform> BottomPoints;
    public List<Transform> MiddlePoints;
    public List<Transform> TopPoints;
    public Button btn;
    int randompos;
   
    int randompos2;
    int randomvol2;
    int randompos3;
    int randomvol3;



    private void Start()
    {
        btn = GameObject.FindWithTag("spawner").GetComponent<Button>();
        btn.onClick.AddListener(Spawn);
    }
    public void Spawn()
    {
        
        randompos = Random.Range(0, 2);
        Instantiate(ladder, BottomPoints[randompos].position, Quaternion.identity);

        randomvol2 = Random.Range(1, 3);
        randompos2 = Random.Range(0, 3);
       
        for (int i = 0; i < randomvol2; i++)
        {
            Instantiate(ladder, MiddlePoints[randompos2].position, Quaternion.identity);
            MiddlePoints.RemoveAt(randompos2);
            randompos2 = Random.Range(0, 2);
        }
       

        randomvol3 = Random.Range(1, 3);
        randompos3 = Random.Range(0, 2);
        
        for (int i = 0; i < randomvol3; i++)
        {
           
            Instantiate(ladder, TopPoints[randompos3].position, Quaternion.identity);
            TopPoints.RemoveAt(randompos3);
            randompos3 = Random.Range(0, 1);
        }

    }
   
}
