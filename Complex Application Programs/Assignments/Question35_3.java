//////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a Java program which accept number from user and return the
//                     count of digits in between 3 and 7.
//
/////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

///////////////////////////////////////////////////////////////
//
// Class Name :     Question35_3
// Function name :  main 
// Description :    Entry Point Function
//
//////////////////////////////////////////////////////////////

class Question35_3
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please, enter the number");
        int iValue = sobj.nextInt();

        Digits dobj = new Digits();
        
        int iRet = dobj.CountDigits(iValue);
        System.out.println("Number of digits in between 3 and 7 are are : "+iRet);
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
// Class Name :         Digits
// Function name :      CountDigits
// Input :              Integer
// Output :             Integer
// Description :        It counts the digits between 3 and 7 in the given number.
// Author :             Dinesh Devidasrao Kadam
// Date :               5 July 2023
//
/////////////////////////////////////////////////////////////////////////////////////////////

class Digits
{
    public int CountDigits(int iNo)
    {
        int iDigit = 0;
        int iCount = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            if((iDigit >= 3)&&(iDigit <= 7))
            {
                iCount++;
            }

            iNo = iNo / 10;
        }

        return iCount;
    }
}
