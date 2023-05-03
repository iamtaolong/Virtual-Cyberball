using System.Collections;
using System.Collections.Generic;
using UMA.CharacterSystem;
using UMA;
using UnityEngine;
using UnityEngine.UI;
using System.Runtime.Serialization.Formatters.Binary;
using UnityEngine.SceneManagement;

public class LoadAvatar2 : MonoBehaviour
{
    public DynamicCharacterAvatar Avatar;
    //public UMARandomAvatar Randomizer;
    //public Button LoadButton;
    //public bool useAvatarDefinition;
    //public bool useCompressedString;

    // betweenscenes is a new public variable I added 
    public string betweenscenes;
    public string saveString;
    public string avatarString;
    public string compressedString;
    public int saveStringSize;
    public int avatarStringSize;
    public int compressedStringSize;
    public int asciiStringSize;
    public int binarySize;


    private void Start()
    {
        betweenscenes = PlayerPrefs.GetString("saveString"); //might need to remove ""
        print(betweenscenes);

        Avatar.LoadFromRecipeString(betweenscenes); //if this doesn't work try calling the load UMA function 
        Debug.Log("CRIES 1");

        Avatar.BuildCharacter();
        Debug.Log("CRIES 2");
    }


    public void SaveUMA()
    {
        avatarString = Avatar.GetAvatarDefinitionString(true);
        saveString = Avatar.GetCurrentRecipe();
        compressedString = Avatar.GetAvatarDefinition(true).ToCompressedString("|");
        asciiStringSize = Avatar.GetAvatarDefinition(true).ToASCIIString().Length;

        binarySize = BinaryDefinition.ToBinary(new BinaryFormatter(), Avatar.GetAvatarDefinition(true)).Length;
        saveStringSize = saveString.Length * 2;
        avatarStringSize = avatarString.Length * 2;
        compressedStringSize = compressedString.Length * 2; // utf-16

        //LoadButton.interactable = true;
    }

    //see LoadUMA function in SaveAndLoadSample for a comprehensive code 

    //new additions to script here; player prefs are persistent so lets see if it works for recipes  


    //activate this when save is pressed as well**
    //public void SaveAvatar()
    //{
    //    PlayerPrefs.SetString("saveString", saveString);
    //    Debug.Log("Saved string");

    //    betweenscenes = PlayerPrefs.GetString("saveString");
    //    Debug.Log("recipe saved as betweenscenes");
    //}


    //ALL HAPPENING BEFORE NEXT SCENE 


    //when next button is pressed 
    public void Loaded()
    {
        SceneManager.LoadScene("Scene3");

        //might remove because its redundant with the following scenes start function
        //betweenscenes = PlayerPrefs.GetString("saveString"); 

        //print(betweenscenes);

        //Avatar.LoadFromRecipeString(betweenscenes); 
        //Debug.Log("Switched scene maybe with avatar");

        //Avatar.BuildCharacter();
        //Debug.Log("avatar built?");

    }
}