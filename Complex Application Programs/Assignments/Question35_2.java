//////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a Java program which accept number from user and return the
//                     count of  odd digits.
//
/////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

///////////////////////////////////////////////////////////////
//
// Class Name :     Question35_2
// Function name :  main 
// Description :    Entry Point Function
//
//////////////////////////////////////////////////////////////

class Question35_2
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please, enter the number");
        int iValue = sobj.nextInt();

        Digits dobj = new Digits();
        
        int iRet = dobj.CountOdd(iValue);
        System.out.println("Number of odd digits are : "+iRet);
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
// Class Name :         Digits
// Function name :      CountOdd
// Input :              Integer
// Output :             Integer
// Description :        It counts the even digits in the given number.
// Author :             Dinesh Devidasrao Kadam
// Date :               5 July 2023
//
/////////////////////////////////////////////////////////////////////////////////////////////

class Digits
{
    public int CountOdd(int iNo)
    {
        int iDigit = 0;
        int iCount = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            if(iDigit % 2 != 0)
            {
                iCount++;
            }

            iNo = iNo / 10;
        }

        return iCount;
    }
}
