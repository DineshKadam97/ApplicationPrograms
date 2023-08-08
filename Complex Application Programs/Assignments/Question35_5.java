//////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a Java program which accept number from user and return the
//                     difference between the summation of even digits ans odd digits.
//
/////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

///////////////////////////////////////////////////////////////
//
// Class Name :     Question35_5
// Function name :  main 
// Description :    Entry Point Function
//
//////////////////////////////////////////////////////////////

class Question35_5
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please, enter the number");
        int iValue = sobj.nextInt();

        Digits dobj = new Digits();
        
        int iRet = dobj.Difference(iValue);
        System.out.println("Difference bewteen summation of even and odd digits is : "+iRet);
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
// Class Name :         Digits
// Function name :      Difference
// Input :              Integer
// Output :             Integer
// Description :        It finds the difference bewteen sum of even and odd digits.
// Author :             Dinesh Devidasrao Kadam
// Date :               5 July 2023
//
/////////////////////////////////////////////////////////////////////////////////////////////

class Digits
{
    public int Difference(int iNo)
    {
        int iDigit = 0;
        int iESum = 0;
        int iOSum = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            if(iDigit % 2 == 0)
            {
              iESum = iESum + iDigit;
            }
            else
            {
              iOSum = iOSum + iDigit;
            }

            iNo = iNo / 10;
        }

        if(iESum > iOSum)
        {
           return iESum - iOSum;
        }
        else
        {
          return iOSum - iESum;
        }
    }
}
