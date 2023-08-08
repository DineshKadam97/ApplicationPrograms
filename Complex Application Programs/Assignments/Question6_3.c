///////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a program to find factorial of given number.
//
//////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
//
// Function Name : Factorial
// Input :         Integer
// Output :        Unsigned Long Integer
// Description :   Finds factorial of given number using for loop. 
// Author :        Dinesh Devidasrao Kadam
// Date :          4 May 2023
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
typedef unsigned long int ULONG;

ULONG Factorial(int iNo)
{
    int iCnt = 0;
    ULONG iFacto = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFacto = iFacto * iCnt;
    } 

    return iFacto; 
}

int main()
{
    int iValue = 0;
    ULONG iRet = 0;

    printf("Enter the number\n");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("Factorial of %d is : %u", iValue, iRet);

    return 0;
}