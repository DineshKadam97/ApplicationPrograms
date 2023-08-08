////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a Java program which accept string from user and display it in 
//                     reverse order. 
//
///////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

///////////////////////////////////////////////////////////
//
// Class Name : Question33_5
// Function name : main 
// Description : Entry Point Function
//
//////////////////////////////////////////////////////////

class Question33_5
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please, enter the string");
        String str = sobj.nextLine();

        StringX obj = new StringX();

        String sRet = obj.StringReverse(str);
        System.out.println("Reversed string is : "+sRet);
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
// Class Name :         StringX
// Function name :      StringReverse 
// Input :              String
// Output :             String
// Description :        It reverse the given String.
// Author :             Dinesh Devidasrao Kadam
// Date :               5 July 2023
//
/////////////////////////////////////////////////////////////////////////////////////////////

class StringX
{
    public String StringReverse(String str)
    {
        char Arr[] = str.toCharArray();

        int iStart = 0;
        int iEnd = Arr.length-1;
        char cTemp = ' ';


        while(iStart < iEnd)
        {
           cTemp = Arr[iStart];
           Arr[iStart] = Arr[iEnd];
           Arr[iEnd] = cTemp;
           iStart++;
           iEnd--;
        }

        return new String(Arr);
    }
}