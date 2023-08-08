/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a Java program which accepts a string from user and check whether the string
//                     is pallindrome or not without considering its case.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

//////////////////////////////////////////////////////////
//
// Class Name : Question37_5
// Function name : main 
// Description : Entry Point Function
//
/////////////////////////////////////////////////////////

class Question37_1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please, enter the string : ");
        String str = sobj.nextLine();

        StringX obj = new StringX();

        boolean bRet = obj.CheckPallindrome(str);
        
        if(bRet == true)
           {
              System.out.println("String is pallindrome");
           }
           else
           {
             System.out.println("Strings is not pallindrome");
           }
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
// Class Name :         StringX
// Function name :      Concat 
// Input :              String, String, Integer
// Output :             String
// Description :        It concats one string with other.
// Author :             Dinesh Devidasrao Kadam
// Date :               6 July 2023
//
/////////////////////////////////////////////////////////////////////////////////////////////

class StringX
{
    public boolean CheckPallindrome(String str)
    {
        char Arr[] = str.toCharArray();
        char Brr[] = new char[Arr.length];

        int iEnd = Arr.length;
        int iCnt = 0;
        
            
        int i = 0;
        for(iCnt = iEnd-1; iCnt >= 0; iCnt--)
        {
            Brr[i] = Arr[iCnt];
            i++;
        }

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Brr[iCnt] != Arr[iCnt])
            {
                if((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z'))
                {
                    if(Brr[iCnt] != Arr[iCnt] + 32)
                    {
                        break;
                    }
                }
                else if((Arr[iCnt] >= 'a') && (Arr[iCnt] <= 'z'))
                {
                    if(Brr[iCnt] != Arr[iCnt] - 32)
                    {
                        break;
                    }
                }
                else
                {
                    break;
                }
            }
                
        }

        if(iCnt == Arr.length)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}