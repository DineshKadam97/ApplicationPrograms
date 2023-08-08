//////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a Java program which accept number from user and return the
//                     multiplication of all digits.
//
/////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

///////////////////////////////////////////////////////////////
//
// Class Name :     Question35_4
// Function name :  main 
// Description :    Entry Point Function
//
//////////////////////////////////////////////////////////////

class Question35_4
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please, enter the number");
        int iValue = sobj.nextInt();

        Digits dobj = new Digits();
        
        int iRet = dobj.multiplyDigits(iValue);
        System.out.println("Multiplication of all digits is : "+iRet);
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
// Class Name :         Digits
// Function name :      multiplyDigits
// Input :              Integer
// Output :             Integer
// Description :        It finds the multiplication of all digits in the given number.
// Author :             Dinesh Devidasrao Kadam
// Date :               5 July 2023
//
/////////////////////////////////////////////////////////////////////////////////////////////

class Digits
{
    public int multiplyDigits(int iNo)
    {
        int iDigit = 0;
        int iMult = 1;

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            iMult = iMult * iDigit;

            iNo = iNo / 10;
        }

        return iMult;
    }
}
