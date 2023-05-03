using System.Collections;
using System.Collections.Generic;
using UMA.CharacterSystem;
using UMA;
using UnityEngine;
using UnityEngine.UI;
using UMA.Examples;
using System.Runtime.Serialization.Formatters.Binary;
using UnityEngine.SceneManagement;

public class RandomAvSaveLoad : MonoBehaviour
{
    public DynamicCharacterAvatar Avatar;
    public UMARandomAvatar Randomizer;
    public UMAMouseOrbitImproved Orbiter;
    //public Button LoadButton;
    public bool useAvatarDefinition;
    public bool useCompressedString;

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

    // ORIGINAL CODE- FOR BUTTON PRESS TO RANDOMIZE AVATAR 
    //public void GenerateANewUMA()
    //{
    //    Randomizer.Randomize(Avatar);
    //    Avatar.BuildCharacter(false);
    //}


    private void Start()
    {
        Randomizer.Randomize(Avatar);
        Avatar.BuildCharacter(false);
        //
        avatarString = Avatar.GetAvatarDefinitionString(true);
        saveString = Avatar.GetCurrentRecipe();
        compressedString = Avatar.GetAvatarDefinition(true).ToCompressedString("|");
        asciiStringSize = Avatar.GetAvatarDefinition(true).ToASCIIString().Length;

        binarySize = BinaryDefinition.ToBinary(new BinaryFormatter(), Avatar.GetAvatarDefinition(true)).Length;
        saveStringSize = saveString.Length * 2;
        avatarStringSize = avatarString.Length * 2;
        compressedStringSize = compressedString.Length * 2; // utf-16
                                                            //
        PlayerPrefs.SetString("saveString", saveString);
        Debug.Log("Saved string");

        betweenscenes = PlayerPrefs.GetString("saveString");
        Debug.Log("recipe saved as betweenscenes");
    }

    //IF USING BUTTON PRESS TO SAVE pt 1
    //CURRENTLY NOT IN USE BC OF ABOVE CODE 
    //when the saveUMA button is pressed, this function occurs, then it activates the load button 
    public void SaveAvatar()
    {
        avatarString = Avatar.GetAvatarDefinitionString(true);
        saveString = Avatar.GetCurrentRecipe();
        compressedString = Avatar.GetAvatarDefinition(true).ToCompressedString("|");
        asciiStringSize = Avatar.GetAvatarDefinition(true).ToASCIIString().Length;

        binarySize = BinaryDefinition.ToBinary(new BinaryFormatter(), Avatar.GetAvatarDefinition(true)).Length;
        saveStringSize = saveString.Length * 2;
        avatarStringSize = avatarString.Length * 2;
        compressedStringSize = compressedString.Length * 2; // utf-16

        PlayerPrefs.SetString("saveString", saveString);
        Debug.Log("Saved string");

        betweenscenes = PlayerPrefs.GetString("saveString");
        Debug.Log("recipe saved as betweenscenes");

        //LoadButton.interactable = true;
    }


    //new additions to script here; player prefs are persistent so lets see if it works for recipes  


    //IF USING BUTTON PRESS TO SAVE pt 2
    //public void SaveAvatar()
    //{
    //    PlayerPrefs.SetString("saveString", saveString);
    //    Debug.Log("Saved string");

    //    betweenscenes = PlayerPrefs.GetString("saveString");
    //    Debug.Log("recipe saved as betweenscenes");

    //}

    public void CenterCam()
    {
        Orbiter.Reset();
    }

    //ALL HAPPENING BEFORE NEXT SCENE 


    //using scene manager now, this code is not needed
    //public void Nexxt()
    //{
    //    SceneManager.LoadScene("4Inclusive_Assigned");
    //}
}

//This script is largely modified from the SaveAndLoadSample.cs script from the UMA Save and Load Demo Scene
//New addition include a start method to randomly load avatars. The avatar is then saved as a string, or in UMA terms as a recipe.
//The recipe was saved as a PlayerPref in order to keep it consistent amongst scenes.
//For this script to work, it needs to be attached to an empty game object. That game object script will have an empty Avatar slot.
//Put in the UMADynamicCharacter prefab used in the hierarchy of each scene (copy paste for consistency).
//This script will have to be slightly modified for subsequent scenes. Therefore you'll have to make "new" scripts that are heavily based off this one.