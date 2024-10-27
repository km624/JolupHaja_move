using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Assets.PixelHeroes.Scripts.ExampleScripts;
using Lean.Gui;
public class TouchM : MonoBehaviour
{
   
    public CharacterMove_repair characterControls;
    public bool right = true;
    private Vector2 touchBeganPos;
    private Vector2 touchEndedPos;
    private Vector2 touchDif;
    private float swipeSensitivity=75;
    public bool swipe;
    
    
    private void Update()
    {
        
        if (GameManager.instance.isGamestart&&!GameManager.instance.isGameover)
            Touch();
       
    }

    

    //스와이프와 터치
    public void Touch()
    {
        if (Input.touchCount > 0)
        {
            Touch touch = Input.GetTouch(0);

            if (touch.phase == TouchPhase.Began)
            {
                touchBeganPos = touch.position;
            }
            if (touch.phase == TouchPhase.Ended)
            {
                touchEndedPos = touch.position;
                touchDif = (touchEndedPos - touchBeganPos);

                //스와이프. 터치의 x이동거리나 y이동거리가 민감도보다 크면
                if (Mathf.Abs(touchDif.y) > swipeSensitivity || Mathf.Abs(touchDif.x) > swipeSensitivity)
                {
                    if (touchDif.y > 0 && Mathf.Abs(touchDif.y) > Mathf.Abs(touchDif.x))
                    {
                        swipe = true;
                   
                    }
                   
                }
               if (swipe)
                    Jump();
                else
                    Moving();
               if(DataStruct.instance.Vibrate)
                Vibration.CreateOneShot(100, 50);
                
            }
           
        }
    }
    /*private void Moving()
    {
        
        if (right)
        {
            characterControls.LeftRight(right);
            right = false;
            

        }
        else
        {
            characterControls.LeftRight(right);
            right = true;
           
        }
 
    }*/
    private void Moving()
    {

        characterControls.LeftRight();
    }
    private void Jump()
    {
        characterControls.Jump();
    
        swipe = false;
        
    }

   
}
