/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a Java program which accepts 2 strings from user and concat N characters
//                     of second string after first string. Value of N should be accepted from user.
//                     Note : If third parameter is greater than the size of the second string then
//                     concat whole string.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

//////////////////////////////////////////////////////////
//
// Class Name : Question37_1
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

        System.out.println("Please, enter the number of characters you want to concat : ");
        int iValue = sobj.nextInt();

        String sRet = obj.Concat(str1, str2, iValue);
        System.out.println("Concated String is : " +sRet);
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
    public String Concat(String str1, String str2, int iNo)
    {
        char Arr[] = str1.toCharArray();
        char Brr[] = str2.toCharArray();

        if(iNo > Brr.length)
        {
            iNo = Brr.length;
        }

        char Crr[] = new char[Arr.length + iNo + 1];
        
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

        return new String(Crr);
    }
}