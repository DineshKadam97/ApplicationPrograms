////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a program which accept number from user and  
//                     return the count of odd digits.
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////
//
// Function name : CountOddDigits
// Input :         Integer
// Output :        Integer
// Description :   Counts the odd digits in number using while loop
// Author :        Dinesh Devidasrao Kadam
// Date :          11 May 2023
//
///////////////////////////////////////////////////////////////////////////

int CountOddDigits(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if((iDigit % 2) != 0)
        {
            iCnt++;
        }

        iNo = iNo / 10;
    }

    return iCnt;
}

///////////////////////////////////////////////////////////
// Entry Point Function
///////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number\n");
    scanf("%d", &iValue);

    iRet = CountOddDigits(iValue);

    printf("There are %d odd digits in %d", iRet, iValue);

    return 0;
}