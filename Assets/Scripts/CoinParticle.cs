using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CoinParticle : MonoBehaviour
{
   
    
    public void Done()
    {
        UIManager.instance.UpdateCoinText(GameManager.instance.coining+DataStruct.instance.coin);
        Destroy(gameObject);
    }
    public void UnlockDone()
    {
        Destroy(gameObject);

    }
       
}
