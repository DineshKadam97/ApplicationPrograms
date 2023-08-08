////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a Java program which accept string from user and count number of
//                     small characters. 
//
//////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

//////////////////////////////////////////////////////////
//
// Class Name : Question33_2
// Function name : main 
// Description : Entry Point Function
//
/////////////////////////////////////////////////////////

class Question33_2
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please, enter the string");
        String str = sobj.nextLine();

        StringX obj = new StringX();

        int iRet = obj.CountSmall(str);
        System.out.println("Number of small characters in the string are : "+iRet);
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
// Class Name :         StringX
// Function name :      CountSmall
// Input :              String
// Output :             Integer
// Description :        It counts the small characters in the given String.
// Author :             Dinesh Devidasrao Kadam
// Date :               5 July 2023
//
/////////////////////////////////////////////////////////////////////////////////////////////

class StringX
{
    public int CountSmall(String str)
    {
        char Arr[] = str.toCharArray();
        int iCount = 0;

        for(int iCnt = 0; iCnt < str.length(); iCnt++)
        {
            if((Arr[iCnt] >= 'a') && (Arr[iCnt] <= 'z'))
            {
                iCount++;
            }
        }

        return iCount;
    }
}