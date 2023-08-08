////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a Java program which accept string from user and count number of
//                     capital characters. 
//
//////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

//////////////////////////////////////////////////////////
//
// Class Name : Question33_1
// Function name : main 
// Description : Entry Point Function
//
/////////////////////////////////////////////////////////

class Question33_1
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please, enter the string");
        String str = sobj.nextLine();

        StringX obj = new StringX();

        int iRet = obj.CountCapital(str);
        System.out.println("Number of capital characters in the string are : "+iRet);
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
// Class Name :         StringX
// Function name :      CountCapital
// Input :              String
// Output :             Integer
// Description :        It counts the capital characters in the given String.
// Author :             Dinesh Devidasrao Kadam
// Date :               5 July 2023
//
/////////////////////////////////////////////////////////////////////////////////////////////

class StringX
{
    public int CountCapital(String str)
    {
        char Arr[] = str.toCharArray();
        int iCount = 0;

        for(int iCnt = 0; iCnt < str.length(); iCnt++)
        {
            if((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z'))
            {
                iCount++;
            }
        }

        return iCount;
    }
}