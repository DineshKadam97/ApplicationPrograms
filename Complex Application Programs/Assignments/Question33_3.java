////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a Java program which accept string from user and return diffrence
//                     between frequency of small characters and frequency of capital characters. 
//
//////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

/////////////////////////////////////////////////////////
//
// Class Name : Question33_3
// Function name : main 
// Description : Entry Point Function
//
////////////////////////////////////////////////////////

class Question33_3
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please, enter the string");
        String str = sobj.nextLine();

        StringX obj = new StringX();

        int iRet = obj.CountDifference(str);
        System.out.println("Differnce between frequencies of small and capital characters is : "+iRet);
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Class Name :         StringX
// Function name :      CountDifference
// Input :              String
// Output :             Integer
// Description :        It counts the difference between freqyency of capital and small characters.
// Author :             Dinesh Devidasrao Kadam
// Date :               5 July 2023
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

class StringX
{
    public int CountDifference(String str)
    {
        char Arr[] = str.toCharArray();
        int iCount1 = 0;
        int iCount2 = 0;

        for(int iCnt = 0; iCnt < str.length(); iCnt++)
        {
            if((Arr[iCnt] >= 'a') && (Arr[iCnt] <= 'z'))
            {
                iCount1++;
            }
            else if((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z'))
            {
                iCount2++;
            }
        }

        return (iCount1- iCount2);
    }
}