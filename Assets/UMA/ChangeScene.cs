using UnityEngine;
using UnityEngine.SceneManagement;
 
public class ChangeScene : MonoBehaviour
{
    
     public void LetsChangeScene(string scenename)
    {
        SceneManager.LoadScene(scenename);
    }
    
    public void CustomMain()
    {
        SceneManager.LoadScene("1Welcome");
    }
    
    public void GoCustomization()
    {
        SceneManager.LoadScene("2UMA DCS");
    }


    public void MeetCustomAvatar()
    {
        SceneManager.LoadScene("2AvatarImport");
    }


    public void CustomExclusion()
    {
        SceneManager.LoadScene("3Exclusive");
    }


    public void Custom3Survey()
    {
        SceneManager.LoadScene("3Survey");
    }


    public void CustomInclusion()
    {
        SceneManager.LoadScene("4Inclusive");
    }

    public void Custom4Survey()
    {
        SceneManager.LoadScene("4Survey");
    }

    
      public void CustomFinish()
    {
        SceneManager.LoadScene("5Finish");
    }



    //FOR ASSIGNED CONDITION

    public void AssignedMain()
    {
        SceneManager.LoadScene("1Welcome_Assigned");
    }

    public void AssignedMeetAvatar()
    {
        SceneManager.LoadScene("2AvatarImport_Assigned");
    }


    public void AssignedExclusiveCond()
    {
        SceneManager.LoadScene("3Exclusive_Assigned");
    }


    public void AssignedSurvey3Cond()
    {
        SceneManager.LoadScene("3Survey_Assigned");
    }



    public void AssignedInclusiveCond()
    {
        SceneManager.LoadScene("4Inclusive_Assigned");
    }


    public void AssignedSurvey4Cond()
    {
        SceneManager.LoadScene("4Survey_Assigned");
}



    public void AssignedFinishCond()
    {
        SceneManager.LoadScene("5Finish_Assigned");
}
    
}
