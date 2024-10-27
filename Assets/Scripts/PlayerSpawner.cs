using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Assets.PixelHeroes.Scripts.CharacterScripts;
public class PlayerSpawner : MonoBehaviour
{
   
    public Character[] chracterNames;
    public Transform[] playerPoint;
    // Start is called before the first frame update
    void Start()
    {
        foreach (Character chracterName in chracterNames)
        {

            if (chracterName.CharacterName==DataStruct.instance.currentCharcter)
            {
               
                Instantiate(chracterName.gameObject, playerPoint[0].position, Quaternion.identity);
            }
        }
        
        

    }

   
}
