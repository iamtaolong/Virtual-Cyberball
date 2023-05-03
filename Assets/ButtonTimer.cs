using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ButtonTimer : MonoBehaviour
{

    public Button NextButton;
    public float TimeDelay; 

    private void Start()
    {
        StartCoroutine(HideAndShow(TimeDelay)); //for three minutes use 180f
    }

    private void Update()
    {
        
    }

    IEnumerator HideAndShow(float delay)
    {
        NextButton.gameObject.SetActive(false);
        yield return new WaitForSeconds(delay);
        NextButton.gameObject.SetActive(true);
    }
}


