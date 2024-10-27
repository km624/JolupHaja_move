using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Pool;

public class Spawner : MonoBehaviour
{
    public GameObject NPC;
    public GameObject Monster;

    public Button btn;
  
    
    bool who;
    public Transform[] spawnPoints;

     float difficult;
    //float max=5f;
    //float min=3f;
    public float repeatInterval;

    public float first=0;
    public float second=30f;
    public float third=70f;
    public float randomValue;

    public int floor;
    public Transform confirmpos;
    List<Transform> Thirdfloor = new List<Transform>();
    
    List<Transform> Secondfloor = new List<Transform>();
    
    List<Transform> Firstfloor = new List<Transform>();
    
    private IObjectPool<MonsterAI> pool;


    private void Awake()
    {
        pool = new ObjectPool<MonsterAI>(CreateMonster,OnGetMonster,OnReleaseMonster,OnDestroyMonster,maxSize:20);
    }
    private void Start()
    {
        Thirdfloor.Add(spawnPoints[4]);
        Thirdfloor.Add(spawnPoints[5]);
        
        Secondfloor.Add(spawnPoints[3]);
        Secondfloor.Add(spawnPoints[1]);
        
        Firstfloor.Add(spawnPoints[0]);
        Firstfloor.Add(spawnPoints[2]);
        btn = GameObject.FindWithTag("spawner").GetComponent<Button>();
        btn.onClick.AddListener(StartSpawn);
       
    }

    private MonsterAI CreateMonster()
    {
        MonsterAI mon = Instantiate(Monster).GetComponent<MonsterAI>();
        mon.transform.position=confirmpos.position;
        mon.SetManagedPool(pool);
        
        mon.transform.SetParent(transform);
   
        return mon;
    }
    
    private void OnGetMonster(MonsterAI mon)
    {
        mon.transform.position = confirmpos.position;
        mon.gameObject.SetActive(true);
    }
    private void OnReleaseMonster(MonsterAI mon)
    {
        mon.gameObject.SetActive(false);
    }
    private void OnDestroyMonster(MonsterAI mon)
    {
        Destroy(mon.gameObject);
    }

    public void StartSpawn()
    {
        
        StartCoroutine(Spawn());
        
    }

    

    IEnumerator Spawn()
    {
        while (!GameManager.instance.isGameover)
        {
            float max = 2.5f;
            float min=  2f;

            
            //Debug.Log("prefab");
            if (GameManager.instance.score < 3)
            {
                repeatInterval = Random.Range(min, max);
            }
            //else if(GameManager.instance.score % 2==0)
            else
            {
                difficult = GameManager.instance.score * 0.02f;
                max -= difficult;
                min -= difficult;
                if ( min < 1)
                {
                    min = 1;
                }
                if (max < 1.6f)
                    max = 1.5f;
                repeatInterval = Random.Range(min, max);
            }

            int spawnIndex = Random.Range(0, spawnPoints.Length);
            confirmpos = RandomFloor();
             who = (Random.value < 0.9f);

            if (GameManager.instance.score < 3)
            {
                var monster = pool.Get();
                //monster.transform.SetParent(transform);
                //monster.transform.position = confirmpos.position;
                //Instantiate(Monster, confirmpos.position, Quaternion.identity);
            }
            
            else
            {
                if (who)
                {
                    //Instantiate(Monster, confirmpos.position, Quaternion.identity);
                    var monster = pool.Get();

                }
                else
                {
                    Instantiate(NPC, spawnPoints[spawnIndex].position, Quaternion.identity);
                }
            }

            yield return new WaitForSeconds(repeatInterval);
        }

    }
    Transform RandomFloor()
    {
       
        /*List<Transform> Thirdfloor = new List<Transform>();
        Thirdfloor.Add(spawnPoints[4]);
        Thirdfloor.Add(spawnPoints[5]);
        List<Transform> Secondfloor = new List<Transform>();
        Secondfloor.Add(spawnPoints[3]);
        Secondfloor.Add(spawnPoints[1]);
        List<Transform> Firstfloor = new List<Transform>();
        Firstfloor.Add(spawnPoints[0]);
        Firstfloor.Add(spawnPoints[2]);*/
        randomValue = Random.value*100;
        
       
        if(GameManager.instance.score < 50)
        {
            third = 70f - (((70f - 30f) / 30f) * (GameManager.instance.score));
            second = 30f + (((40f - 30f) / 30f) * (GameManager.instance.score));
            first = ((30f / 30f) * GameManager.instance.score);
        }
        float percent=0f;
        float[] probs = new float[3] {third,second,first};

        for (int i = 0; i < 3; i++)
        {
            percent += probs[i];
            if (randomValue <= percent)
            {
                if (i==0)
                {
                    floor = 3;
                    break;
                }
                else if (i == 1)
                {
                    floor = 2;
                    break;
                }
                else
                {
                    floor = 1;
                    break;
                }
               
            }
           
        }
        if(floor==3)
        {
            return Thirdfloor[Random.Range(0, 2)];
        }
         else if (floor==2)
        {
            return Secondfloor[Random.Range(0, 2)];
        }
        else
        {
            return Firstfloor[Random.Range(0, 2)];
        }
       
        
        
    }
    /*IEnumerator Spawn()
    {
        while (!GameManager.instance.isGameover)
        {
            float max = 5f;
            float min = 3f;
            //Debug.Log("prefab");
            if (GameManager.instance.score < 3)
            {
                repeatInterval = Random.Range(min, max);
            }
            //else if(GameManager.instance.score % 2==0)
            else
            {
                difficult = GameManager.instance.score * 0.04f;
                max -= difficult;
                min -= difficult;
                if (min < 1)
                {
                    min = 1;
                }
                if (max < 1.6f)
                    max = 1.5f;
                repeatInterval = Random.Range(min, max);
            }
            
            int spawnIndex = Random.Range(0, spawnPoints.Length);
            who = (Random.value < 0.85f);

            if (GameManager.instance.score < 5)
            {
                Instantiate(Monster, spawnPoints[spawnIndex].position, Quaternion.identity);
            }
            else
            {
                if (who)
                {
                    Instantiate(Monster, spawnPoints[spawnIndex].position, Quaternion.identity);

                }
                else
                {
                    Instantiate(NPC, spawnPoints[spawnIndex].position, Quaternion.identity);
                }
            }



            yield return new WaitForSeconds(repeatInterval);

        }

    }*/




}
