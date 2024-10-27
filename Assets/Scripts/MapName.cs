using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MapName : MonoBehaviour
{
    public Maps mapname;
    public bool unlock;
    public int price;
    public GameObject UnlockImg;
    public GameObject UnlockButton;
    public Text pricetext;


    private void Start()
    {
        unlocked();
        pricetext.text = price.ToString();
 
    }


    public void unlocked()
    {
        foreach (Maps unlockname in DataStruct.instance.unlockedMap)
        {
            if (mapname == unlockname)
                unlock = true;

        }
        UnlockState();

    }
    void UnlockState()
    {
        if (unlock)
        {
            UnlockImg.SetActive(false);
            UnlockButton.SetActive(false);

        }
           
    }

}

