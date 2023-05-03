using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


//BALL NEEDS TO RETURN TO USER FOR BUTTONS TO WORK

public class GameExclusive : MonoBehaviour
{
    public Button Start;
    public Button PassLeft;
    public Button PassRight;
    public Button Catch; 
    public Text Introduction;
    public GameObject Ball;
    public Button Waiting;
 
 public void PressedStart() {
       Start.gameObject.SetActive(false);
       Introduction.gameObject.SetActive(false);;

       PassLeft.gameObject.SetActive(true); 
       PassRight.gameObject.SetActive(true);   
       Catch.gameObject.SetActive(true);
    }


    public void PressedPassLeft() {

        StartCoroutine(LeftCoroutine());

    }

    public void PressedPassRight() {

       StartCoroutine(RightCoroutine());
    
    }

      IEnumerator RightCoroutine()
    {
       PassLeft.gameObject.SetActive(false); 
       PassRight.gameObject.SetActive(false);   
       Catch.gameObject.SetActive(false);

            //to the right agent
            //Ball.transform.Translate(3.677f,0, 4.57f);
            //yield return new WaitForSeconds(1);

        Ball.transform.Translate(0.3721f, 0.3f, 0.4772f); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.3721f, 0.3f, 0.4772f); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.3721f, 0.2f, 0.4772f); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.3721f, 0.2f, 0.4772f);  yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.3721f, 0.1f, 0.4772f); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.3721f, -0.1f, 0.4772f);   yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.3721f, -0.2f, 0.4772f);  yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.3721f, -0.2f, 0.4772f); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.3721f, -0.3f, 0.4772f); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.3721f, -0.3f, 0.4772f);   yield return new WaitForSeconds(0.035f); 
        yield return new WaitForSeconds(0.85f);


        //banner
       Waiting.gameObject.SetActive(true);
            yield return new WaitForSeconds(1);

        //to the left agent
        //Ball.transform.Translate(-7.2f,0 ,0);
        // yield return new WaitForSeconds(1);
        Ball.transform.Translate(-0.590833333333333333333f, 0.3f, 0);  yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, 0.3f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, 0.2f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, 0.2f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, 0.1f, 0);   yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, 0.1f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, -0.1f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, -0.1f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, -0.2f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, -0.2f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, -0.3f, 0);  yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, -0.3f, 0); yield return new WaitForSeconds(0.035f);
        yield return new WaitForSeconds(0.85f);




        //to the right agent
        Ball.transform.Translate(0.590833333333333333333f, 0.3f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, 0.3f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, 0.2f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, 0.2f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, 0.1f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, 0.1f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, -0.1f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, -0.1f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, -0.2f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, -0.2f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, -0.3f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, -0.3f, 0); yield return new WaitForSeconds(0.035f);
        yield return new WaitForSeconds(0.85f);


        //to the left agent
        //Ball.transform.Translate(-7.2f,0 ,0);
        // yield return new WaitForSeconds(1);
        Ball.transform.Translate(-0.590833333333333333333f, 0.3f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, 0.3f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, 0.2f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, 0.2f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, 0.1f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, 0.1f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, -0.1f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, -0.1f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, -0.2f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, -0.2f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, -0.3f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, -0.3f, 0); yield return new WaitForSeconds(0.035f);
        yield return new WaitForSeconds(0.85f);




        //to the right agent
        Ball.transform.Translate(0.590833333333333333333f, 0.3f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, 0.3f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, 0.2f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, 0.2f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, 0.1f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, 0.1f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, -0.1f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, -0.1f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, -0.2f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, -0.2f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, -0.3f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, -0.3f, 0); yield return new WaitForSeconds(0.035f);
        yield return new WaitForSeconds(0.85f);


        //to the left agent
        //Ball.transform.Translate(-7.2f,0 ,0);
        // yield return new WaitForSeconds(1);
        Ball.transform.Translate(-0.590833333333333333333f, 0.3f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, 0.3f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, 0.2f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, 0.2f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, 0.1f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, 0.1f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, -0.1f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, -0.1f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, -0.2f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, -0.2f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, -0.3f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, -0.3f, 0); yield return new WaitForSeconds(0.035f);
        yield return new WaitForSeconds(0.85f);




        //to the right agent
        Ball.transform.Translate(0.590833333333333333333f, 0.3f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, 0.3f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, 0.2f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, 0.2f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, 0.1f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, 0.1f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, -0.1f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, -0.1f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, -0.2f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, -0.2f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, -0.3f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, -0.3f, 0); yield return new WaitForSeconds(0.035f);
        yield return new WaitForSeconds(0.85f);

        //to the left agent
        //Ball.transform.Translate(-7.2f,0 ,0);
        // yield return new WaitForSeconds(1);
        Ball.transform.Translate(-0.590833333333333333333f, 0.3f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, 0.3f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, 0.2f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, 0.2f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, 0.1f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, 0.1f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, -0.1f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, -0.1f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, -0.2f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, -0.2f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, -0.3f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, -0.3f, 0); yield return new WaitForSeconds(0.035f);
        yield return new WaitForSeconds(0.85f);




        //to the right agent
        Ball.transform.Translate(0.590833333333333333333f, 0.3f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, 0.3f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, 0.2f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, 0.2f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, 0.1f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, 0.1f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, -0.1f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, -0.1f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, -0.2f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, -0.2f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, -0.3f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, -0.3f, 0); yield return new WaitForSeconds(0.035f);
        yield return new WaitForSeconds(0.85f);
        //to the left agent
        //Ball.transform.Translate(-7.2f,0 ,0);
        // yield return new WaitForSeconds(1);
        Ball.transform.Translate(-0.590833333333333333333f, 0.3f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, 0.3f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, 0.2f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, 0.2f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, 0.1f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, 0.1f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, -0.1f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, -0.1f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, -0.2f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, -0.2f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, -0.3f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, -0.3f, 0); yield return new WaitForSeconds(0.035f);
        yield return new WaitForSeconds(0.85f);




        //to the right agent
        Ball.transform.Translate(0.590833333333333333333f, 0.3f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, 0.3f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, 0.2f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, 0.2f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, 0.1f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, 0.1f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, -0.1f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, -0.1f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, -0.2f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, -0.2f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, -0.3f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, -0.3f, 0); yield return new WaitForSeconds(0.035f);
        yield return new WaitForSeconds(0.85f);



        //BACK TO USER
        // Ball.transform.Translate(+3.523f, 0, -4.57f);

        Ball.transform.Translate(-0.3721f, 0.3f, -0.4772f); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.3721f, 0.3f, -0.4772f); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.3721f, 0.2f, -0.4772f); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.3721f, 0.2f, -0.4772f); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.3721f, 0.1f, -0.4772f); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.3721f, -0.1f, -0.4772f); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.3721f, -0.2f, -0.4772f); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.3721f, -0.2f, -0.4772f); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.3721f, -0.3f, -0.4772f); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.3721f, -0.3f, -0.4772f); yield return new WaitForSeconds(0.035f);
        yield return new WaitForSeconds(0.85f);



        //BALL ENDS WITH LEFT AGENT delete this note later


        // Waiting.gameObject.SetActive(false);

        PassLeft.gameObject.SetActive(true); 
       PassRight.gameObject.SetActive(true);   
       Catch.gameObject.SetActive(true);
    }

    
     IEnumerator LeftCoroutine()
    {
       PassLeft.gameObject.SetActive(false); 
       PassRight.gameObject.SetActive(false);   
       Catch.gameObject.SetActive(false);

        //to the left agent
        //Ball.transform.Translate(-7.2f,0 ,0);
        // yield return new WaitForSeconds(1);


        Ball.transform.Translate(-0.3369f, 0.3f, 0.4772f); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.3369f, 0.3f,0.4772f); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.3369f, 0.2f, 0.4772f); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.3369f, 0.2f, 0.4772f); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.3369f, 0.1f, 0.4772f); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.3369f, -0.1f, 0.4772f); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.3369f, -0.2f, 0.4772f); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.3369f, -0.2f, 0.4772f); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.3369f, -0.3f, 0.4772f); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.3369f, -0.3f, 0.4772f); yield return new WaitForSeconds(0.035f);
        yield return new WaitForSeconds(0.85f);



        //to the right agent
        Ball.transform.Translate(0.590833333333333333333f, 0.3f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, 0.3f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, 0.2f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, 0.2f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, 0.1f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, 0.1f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, -0.1f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, -0.1f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, -0.2f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, -0.2f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, -0.3f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, -0.3f, 0); yield return new WaitForSeconds(0.035f);
        yield return new WaitForSeconds(0.85f);


        //to the left agent
        //Ball.transform.Translate(-7.2f,0 ,0);
        // yield return new WaitForSeconds(1);
        Ball.transform.Translate(-0.590833333333333333333f, 0.3f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, 0.3f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, 0.2f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, 0.2f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, 0.1f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, 0.1f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, -0.1f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, -0.1f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, -0.2f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, -0.2f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, -0.3f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, -0.3f, 0); yield return new WaitForSeconds(0.035f);
        yield return new WaitForSeconds(0.85f);




        //to the right agent
        Ball.transform.Translate(0.590833333333333333333f, 0.3f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, 0.3f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, 0.2f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, 0.2f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, 0.1f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, 0.1f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, -0.1f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, -0.1f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, -0.2f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, -0.2f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, -0.3f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, -0.3f, 0); yield return new WaitForSeconds(0.035f);
        yield return new WaitForSeconds(0.85f);


        //to the left agent
        //Ball.transform.Translate(-7.2f,0 ,0);
        // yield return new WaitForSeconds(1);
        Ball.transform.Translate(-0.590833333333333333333f, 0.3f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, 0.3f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, 0.2f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, 0.2f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, 0.1f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, 0.1f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, -0.1f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, -0.1f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, -0.2f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, -0.2f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, -0.3f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, -0.3f, 0); yield return new WaitForSeconds(0.035f);
        yield return new WaitForSeconds(0.85f);




        //to the right agent
        Ball.transform.Translate(0.590833333333333333333f, 0.3f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, 0.3f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, 0.2f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, 0.2f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, 0.1f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, 0.1f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, -0.1f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, -0.1f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, -0.2f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, -0.2f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, -0.3f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, -0.3f, 0); yield return new WaitForSeconds(0.035f);
        yield return new WaitForSeconds(0.85f);

        //to the left agent
        //Ball.transform.Translate(-7.2f,0 ,0);
        // yield return new WaitForSeconds(1);
        Ball.transform.Translate(-0.590833333333333333333f, 0.3f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, 0.3f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, 0.2f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, 0.2f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, 0.1f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, 0.1f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, -0.1f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, -0.1f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, -0.2f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, -0.2f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, -0.3f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, -0.3f, 0); yield return new WaitForSeconds(0.035f);
        yield return new WaitForSeconds(0.85f);




        //to the right agent
        Ball.transform.Translate(0.590833333333333333333f, 0.3f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, 0.3f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, 0.2f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, 0.2f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, 0.1f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, 0.1f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, -0.1f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, -0.1f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, -0.2f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, -0.2f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, -0.3f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, -0.3f, 0); yield return new WaitForSeconds(0.035f);
        yield return new WaitForSeconds(0.85f);
        //to the left agent
        //Ball.transform.Translate(-7.2f,0 ,0);
        // yield return new WaitForSeconds(1);
        Ball.transform.Translate(-0.590833333333333333333f, 0.3f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, 0.3f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, 0.2f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, 0.2f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, 0.1f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, 0.1f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, -0.1f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, -0.1f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, -0.2f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, -0.2f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, -0.3f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, -0.3f, 0); yield return new WaitForSeconds(0.035f);
        yield return new WaitForSeconds(0.85f);





        //to the right agent
        Ball.transform.Translate(0.590833333333333333333f, 0.3f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, 0.3f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, 0.2f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, 0.2f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, 0.1f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, 0.1f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, -0.1f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, -0.1f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, -0.2f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, -0.2f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, -0.3f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.590833333333333333333f, -0.3f, 0); yield return new WaitForSeconds(0.035f);
        yield return new WaitForSeconds(0.85f);
        //to the left agent
        //Ball.transform.Translate(-7.2f,0 ,0);
        // yield return new WaitForSeconds(1);
        Ball.transform.Translate(-0.590833333333333333333f, 0.3f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, 0.3f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, 0.2f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, 0.2f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, 0.1f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, 0.1f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, -0.1f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, -0.1f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, -0.2f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, -0.2f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, -0.3f, 0); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(-0.590833333333333333333f, -0.3f, 0); yield return new WaitForSeconds(0.035f);
        yield return new WaitForSeconds(0.85f);





        //BACK TO USER
        //  Ball.transform.Translate(+3.577f, 0, -4.47f);
        //     Waiting.gameObject.SetActive(false);


        Ball.transform.Translate(0.3369f, 0.3f, -0.4772f); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.3369f, 0.3f, -0.4772f); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.3369f, 0.2f, -0.4772f); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.3369f, 0.2f, -0.4772f); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.3369f, 0.1f, -0.4772f); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.3369f, -0.1f, -0.4772f); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.3369f, -0.2f, -0.4772f); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.3369f, -0.2f, -0.4772f); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.3369f, -0.3f, -0.4772f); yield return new WaitForSeconds(0.035f);
        Ball.transform.Translate(0.3369f, -0.3f, -0.4772f); yield return new WaitForSeconds(0.035f);
        yield return new WaitForSeconds(0.85f);

        PassLeft.gameObject.SetActive(true); 
       PassRight.gameObject.SetActive(true);   
       Catch.gameObject.SetActive(true);
    }

}


 //public float speed;
 
   // private Vector3 destinationLeft;
   // private Vector3 destinationRight;
   // private Vector3 destinationAvatar;


//     public void PressedStart() {
//       destinationLeft  = new Vector3(-320.0f, 0.0f, 370.0f);
//       destinationRight  = new Vector3(320.0f, 0.0f, 370.0f);
//       destinationAvatar  = new Vector3(130.0f, 0.0f, -250.0f);
//    //    SetDestinationLeft(gameObject.transform.position);
//    //   SetDestinationRight(gameObject.transform.position);
//        Start.gameObject.SetActive(false);
//        Introduction.gameObject.SetActive(false);;

//        PassLeft.gameObject.SetActive(true); 
//        PassRight.gameObject.SetActive(true);   
//        Catch.gameObject.SetActive(true);
//     }


//     public void PressedPassLeft() {

//         StartCoroutine(LeftCoroutine());
//         speed = -20000f;

//     }

//     public void PressedPassRight() {

//        StartCoroutine(RightCoroutine());
//       speed = -20000f;

//     }

//       IEnumerator RightCoroutine()
//     {
//        PassLeft.gameObject.SetActive(false); 
//        PassRight.gameObject.SetActive(false);   
//        Catch.gameObject.SetActive(false);

//          // Calculate the next position
//          float delta = speed * Time.deltaTime;
//          Vector3 currentPosition = Ball.transform.position;
//          Vector3 nextPosition = Vector3.MoveTowards (currentPosition, destinationRight, delta);
//          Ball.transform.position = nextPosition;
//           yield return new WaitForSeconds(1);

//           Waiting.gameObject.SetActive(true);
//            yield return new WaitForSeconds(1);


//          currentPosition = Ball.transform.position;
//          nextPosition = Vector3.MoveTowards (currentPosition, destinationLeft, delta);
//          Ball.transform.position = nextPosition;
//           yield return new WaitForSeconds(1);

//          currentPosition = Ball.transform.position;
//          nextPosition = Vector3.MoveTowards (currentPosition, destinationAvatar, delta);
//          Ball.transform.position = nextPosition;
//           yield return new WaitForSeconds(1);

//             Waiting.gameObject.SetActive(false);

//        PassLeft.gameObject.SetActive(true); 
//        PassRight.gameObject.SetActive(true);   
//        Catch.gameObject.SetActive(true);
//     }

    
//      IEnumerator LeftCoroutine()
//     {
//        PassLeft.gameObject.SetActive(false); 
//        PassRight.gameObject.SetActive(false);   
//        Catch.gameObject.SetActive(false);

//       float delta = speed * Time.deltaTime;
//          Vector3 currentPosition = Ball.transform.position;
//          Vector3 nextPosition = Vector3.MoveTowards (currentPosition, destinationLeft, delta);
//          Ball.transform.position = nextPosition;
//           yield return new WaitForSeconds(1);

//           Waiting.gameObject.SetActive(true);
//            yield return new WaitForSeconds(1);


//          currentPosition = Ball.transform.position;
//          nextPosition = Vector3.MoveTowards (currentPosition, destinationRight, delta);
//          Ball.transform.position = nextPosition;
//           yield return new WaitForSeconds(1);

//          currentPosition = Ball.transform.position;
//         nextPosition = Vector3.MoveTowards (currentPosition, destinationAvatar, delta);
//          Ball.transform.position = nextPosition;
//           yield return new WaitForSeconds(1);

//             Waiting.gameObject.SetActive(false);

//        PassLeft.gameObject.SetActive(true); 
//        PassRight.gameObject.SetActive(true);   
//        Catch.gameObject.SetActive(true);
//     }

// }

