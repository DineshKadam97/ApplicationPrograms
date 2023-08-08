////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a Java program which accept string from user and check whether it
//                     contains vowels int it or not. 
//
//////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

////////////////////////////////////////////////////////////
//
// Class Name : Question33_4
// Function name : main 
// Description : Entry Point Function
//
///////////////////////////////////////////////////////////

class Question33_4
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please, enter the string");
        String str = sobj.nextLine();

        StringX obj = new StringX();

        boolean bRet = obj.CheckVowel(str);
        
        if(bRet == true)
        {
            System.out.println("Vowel is present in the string");
        }
        else
        {
            System.out.println("Vowel is absent in the string");
        }
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
// Class Name :         StringX
// Function name :      CheckVowel
// Input :              String
// Output :             Boolean(true or false)
// Description :        It checks whether string is present in the given String or not.
// Author :             Dinesh Devidasrao Kadam
// Date :               5 July 2023
//
/////////////////////////////////////////////////////////////////////////////////////////////

class StringX
{
    public boolean CheckVowel(String str)
    {
        char Arr[] = str.toCharArray();
        int iCnt = 0;

        for(iCnt = 0; iCnt < str.length(); iCnt++)
        {
            if((Arr[iCnt] == 'a') || (Arr[iCnt] == 'e') || (Arr[iCnt] == 'i') || (Arr[iCnt] == 'o') || (Arr[iCnt] == 'u') || (Arr[iCnt] == 'u') || (Arr[iCnt] == 'A') || (Arr[iCnt] == 'E') || (Arr[iCnt] == 'I') || (Arr[iCnt] == 'O') || (Arr[iCnt] == 'U') )
            {
                break;
            }
        }

        if(iCnt < str.length())
            {
                return true;
            }
            else
            {
                return false;
            }
    }
}