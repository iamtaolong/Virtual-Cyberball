using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UMA;
using UMA.CharacterSystem;
using UnityEngine.UI;
 
public class CharacterCreator : MonoBehaviour
{
    public DynamicCharacterAvatar avatar;

    public void SwitchGender (bool male)
    {
        if (male && avatar.activeRace.name != "HumanMaleDCS")
            avatar.ChangeRace("HumanMaleDCS");

        if (!male && avatar.activeRace.name != "HumanFemaleDCS")
            avatar.ChangeRace("HumanFemaleDCS");

    }

     public void SwitchRace1 (bool male)
    {
        if (male && avatar.activeRace.name != "Werewolf")
            avatar.ChangeRace("Werewolf");

        if (!male && avatar.activeRace.name != "ToonFemale")
            avatar.ChangeRace("ToonFemale");
    }

     public void SwitchRace2 (bool male)
    {
        if (male && avatar.activeRace.name != "ElfMale")
            avatar.ChangeRace("Elf Male");

        if (!male && avatar.activeRace.name != "HumanGirl")
            avatar.ChangeRace("HumanGirl");
    }

    public void SwitchRace3 (bool male)
    {
         if (male && avatar.activeRace.name != "HumanMaleHighPoly")
            avatar.ChangeRace("HumanMaleHighPoly");

        if (!male && avatar.activeRace.name != "HumanFemaleHighPoly")
            avatar.ChangeRace("HumanFemaleHighPoly");
    }

}
