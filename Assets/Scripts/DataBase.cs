using Firebase;
using Firebase.Database;
using Firebase.Extensions;

using System.Collections;

using UnityEngine;
using UnityEngine.UI;

public class DataBase : MonoBehaviour
{
    public Text debug;
    public Text debug2;
    public Text debug3;
    public Text debug4;

   

    public void DataRead()
    {
        
        FirebaseDatabase.DefaultInstance
        .GetReference("playerData")
        .GetValueAsync().ContinueWithOnMainThread(task => {
            if (task.IsFaulted)
            {
                debug.text = "실패";
                
                //Debug.Log("실패");
            }
            else if (task.IsCompleted)
            {
                DataSnapshot snapshot = task.Result;
                foreach (DataSnapshot data in snapshot.Children)
                {
                    IDictionary player = (IDictionary)data.Value;
                    if (data.Key.Equals("nghy20"))
                    {
                        debug.text = "성공 : " + player["gender"] +" "+ player["score"];

                    }
                   else if (data.Key.Equals("km624"))
                    {
                        debug2.text = "성공2 : " + " " + player["score"];
                    }
     
                }
            }
        });

    }
    public void Select()
    {
        DatabaseReference mdata = FirebaseDatabase.DefaultInstance.GetReference("playerData");
      
        //username = mdata.OrderByChild("nghy20").EqualTo("nghy20");
       
    }
    /*public void DataSave()
    {
        FirebaseDatabase.DefaultInstance
            .GetReference("playerData").Child("km990624")
            

    }*/
}