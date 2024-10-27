using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Lean.Gui;
public class SettingMenu : MonoBehaviour
{
    public LeanToggle sound;
    public LeanToggle vibrate;
    public LeanToggle effect;
    public LeanToggle fps;

    public LeanWindow ErrorModal;
    public LeanWindow YesorNo;
    bool sounds;
    bool vibrates;
    bool effects;
    bool fpss;

    private void Start()
    {
        SoundState();
        VibrateState();
        EffectState();
        sounds = DataStruct.instance.Sound;
        vibrates = DataStruct.instance.Vibrate;
        effects = DataStruct.instance.Effect;
        fpss=DataStruct.instance.Fps;
        
    }
    void SoundState()
    {
        if (DataStruct.instance.Sound)
        {
            
            sound.TurnOn();
        }
        else
        {
           
            sound.TurnOff();
        }
            
    }
     void VibrateState()
    {
        if (DataStruct.instance.Vibrate)
        {
            
            vibrate.TurnOn();
        }
        else
        {
           
            vibrate.TurnOff();
        }
    }
     void EffectState()
    {
        if (DataStruct.instance.Effect)
        {
            
            effect.TurnOn();
        }
        else
        {
            
            effect.TurnOff();
        }
    }
    void FpsState()
    {
        if (DataStruct.instance.Fps)
        {

            fps.TurnOn();
        }
        else
        {

            fps.TurnOff();
        }
    }
    public void SoundChange()
    {
        if (sounds)
           sounds = false;
        else
            sounds = true;  

    }
    public void VibrateChange()
    {
        if (vibrates)
            vibrates = false;
        else
            vibrates = true;
    }
    public void EffectChange()
    {
        if (effects)
            effects = false;
        else
            effects = true;

    }
    public void fpsChange()
    {
        if (fpss)
            fpss = false;
        else
            fpss = true;

    }
    public void Confirm()
    {
        DataStruct.instance.Sound = sounds;
        DataStruct.instance.Vibrate = vibrates;
        DataStruct.instance.Effect = effects;
        if (DataStruct.instance.Sound)
        {
            SoundManager.instance.VolumeON();
            
        }
        else
        {
            SoundManager.instance.VolumeOFF();
           
        }

        //로컬json 저장
        AllSaveLoad.instance.JsonSave();

    }
    public void DataDeleteButton()
    {
        AllSaveLoad.instance.Check();
        if (AllSaveLoad.instance.Disconnect)
        {
            if (AllSaveLoad.instance.WaitConnect)
                YesorNo.TurnOn();
            else
                ErrorModal.TurnOn();
        }
        else
        {
            YesorNo.TurnOn();
        }
        
    }
    public void DeleteOK()
    {
        AllSaveLoad.instance.JsonDelete();
    }
    public void CloudDataLoad()
    {
        AllSaveLoad.instance.Check();
        if (AllSaveLoad.instance.Disconnect)
        {
            if (AllSaveLoad.instance.WaitConnect)
            {
                SoundManager.instance.UiSound("Button");
                AllSaveLoad.instance.TurnBackLoading();
            }
               
            else
                ErrorModal.TurnOn();
        }
        else
        {
            SoundManager.instance.UiSound("Button");
            AllSaveLoad.instance.TurnBackLoading();
        }
    }

}
