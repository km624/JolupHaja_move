using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class CoinSpawner : MonoBehaviour
{
    public bool end;
   

    public GameObject Coin;
    public Button btn;

    float spawntime;
     float range;
     List<float> floors = new List<float>();
     int floor;
    private void Start()
    {
        floors.Add(-3.7f);
        floors.Add(-1.7f);
        floors.Add(0.2f);
        floors.Add(2.2f);
        btn = GameObject.FindWithTag("spawner").GetComponent<Button>();
        btn.onClick.AddListener(StartSpawn);
        
       
    }
   

    public void StartSpawn()
    {

        StartCoroutine(Spawn());

    }
    IEnumerator Spawn()
    {
        while (!GameManager.instance.isGameover)
        {
           
           floor = Random.Range(0, 4);
           range=Random.Range(-2.5f,2.5f);
           spawntime= Random.Range(2f, 4f);
            yield return new WaitForSeconds(spawntime);
            if (GameManager.instance.isGameover)
                break;
            Instantiate(Coin, new Vector2(range, floors[floor]), Quaternion.identity);


        }

    }
}
