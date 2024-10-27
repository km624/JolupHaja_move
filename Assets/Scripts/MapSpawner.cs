using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MapSpawner : MonoBehaviour
{
    public Map[] Maps;
   
    // Start is called before the first frame update
    void Start()
    {
        
        foreach (Map map in Maps)
        {

            if (map.mapname == DataStruct.instance.currentMap)
            {

                Instantiate(map.gameObject,new Vector3(0,0,0), Quaternion.identity);
            }
        }


    }


}
