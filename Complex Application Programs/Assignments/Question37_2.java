/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a Java program which accepts 2 strings from user and check whether content of
//                     two strings are equal or not.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

//////////////////////////////////////////////////////////
//
// Class Name : Question37_2
// Function name : main 
// Description : Entry Point Function
//
/////////////////////////////////////////////////////////

class Question37_1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please, enter the first string : ");
        String str1 = sobj.nextLine();

        System.out.println("Please, enter the second string : ");
        String str2 = sobj.nextLine();

        StringX obj = new StringX();

        boolean bRet = obj.StrCmpX(str1, str2);

        if(bRet == true)
        {
            System.out.println("Strings are equal");
        }
        else
        {
            System.out.println("Strings are not equal");
        }
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
// Class Name :         StringX
// Function name :      StrCmpX
// Input :              String, String
// Output :             Boolean(true or false)
// Description :        It checks whether 2 strings are equal or not.
// Author :             Dinesh Devidasrao Kadam
// Date :               6 July 2023
//
/////////////////////////////////////////////////////////////////////////////////////////////

class StringX
{
    public boolean StrCmpX(String str1, String str2)
    {
        char Arr[] = str1.toCharArray();
        char Brr[] = str2.toCharArray();

        if(Arr.length != Brr.length)
        {
            return false;
        }
        
        int iCnt = 0;

        for(iCnt = 0; iCnt < Brr.length; iCnt++)
        {
            if(Arr[iCnt] != Brr[iCnt])
            {
                break;
            }
        }

        if(iCnt < Brr.length)
        {
            return false;
        }
        else
        {
            return  true;
        }
    }
}