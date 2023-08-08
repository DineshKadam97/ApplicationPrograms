/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a Java program which accepts 2 strings from user and check whether content of
//                     first N contents from two strings are equal or not.
//                     Note : If third parameter is greater than the size of the second string then concat
//                     whole string after first string.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

//////////////////////////////////////////////////////////
//
// Class Name : Question37_3
// Function name : main 
// Description : Entry Point Function
//
/////////////////////////////////////////////////////////

class Question37_3
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please, enter the first string");
        String str1 = sobj.nextLine();

        System.out.println("Please, enter the second string");
        String str2 = sobj.nextLine();

        System.out.println("Please, enter the first N characters that you want to check");
        int iValue = sobj.nextInt();

        StringX obj = new StringX();

        boolean bRet = obj.StrNCmpX(str1, str2, iValue);

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
// Function name :      StrNCmpX 
// Input :              String, String, integer
// Output :             Boolean(true or false)
// Description :        It checks whether first N characters in the strings are equal or not.
// Author :             Dinesh Devidasrao Kadam
// Date :               6 July 2023
//
/////////////////////////////////////////////////////////////////////////////////////////////

class StringX
{
    public boolean StrNCmpX(String str1, String str2, int iNo)
    {
        char Arr[] = str1.toCharArray();
        char Brr[] = str2.toCharArray();
         
        int iLength = 0;
        int iCnt = 0;
       
        if(iNo > Brr.length)
        {
           Concat(str1, str2);
           return false;
        }
        else if((iNo <= Arr.length))
        {
           for(iCnt = 0; iCnt < iNo; iCnt++)
           {
              if(Arr[iCnt] != Brr[iCnt])
              {
                break;
              }
           }

           if(iCnt < iNo)
           {
              return false;
           }
           else
           {
              return  true;
           }
        }
        else
        {
            return false;
        }                        
    }

    public void Concat(String str1, String str2)
    {
        char Arr[] = str1.toCharArray();
        char Brr[] = str2.toCharArray();

        char Crr[] = new char[Arr.length + Brr.length + 1];
        
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Crr[iCnt] = Arr[iCnt];
        }
        
        int i = 0;
        for(int iCnt = Arr.length+1; iCnt < Crr.length; iCnt++)
        {
            Crr[iCnt] = Brr[i];
            i++;
        }

        System.out.println("Concated String is : "+new String(Crr));
    }
}