using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ChracterName : MonoBehaviour
{
    public Name CharacterName;
    public bool unlock;
    public int price;
     Image image;
    public GameObject UnlockButton;
    public Text pricetext;
     
    
    private void Start()
    {
        image = gameObject.GetComponent<Image>();
        unlocked();
        pricetext.text = price.ToString();
        
    }

    public void unlocked()
    {
        foreach (Name chracterName in DataStruct.instance.unlocked)
        {
            if (chracterName == CharacterName)
            {
               unlock = true;
            }
        }
        UnlockState();

    }
    void UnlockState()
    {
        if (!unlock)
        {
            image.color = new Color(40 / 255f, 40 / 255f, 40 / 255f);

        }
        else
        {
            image.color = new Color(255 / 255f, 255 / 255f, 255 / 255f);
            UnlockButton.SetActive(false);
        }
    }
   
}


