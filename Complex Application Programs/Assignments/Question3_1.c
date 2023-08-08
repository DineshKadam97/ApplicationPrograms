////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a program which accept number from user and
//                     display multiplication of it's factors
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
typedef unsigned long int ULONG;

///////////////////////////////////////////////////////////////////////////////
//
// Function Name : MultiplyFactors
// Input :         Integer
// Output :        Integer
// Description :   Finds factors and perform their multiplication
// Author :        Dinesh Devidarao Kadam
// Date :          4 May 2023
//
//////////////////////////////////////////////////////////////////////////////

ULONG MultiplyFactors(int iNo)
{
    int iCnt = 0;
    ULONG iMult = 1;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    else if(iNo == 0)
    {
        printf("Error : Invalid Input\n");
        return 0;
    }

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iMult = iMult * iCnt;
        }
    }

    return iMult;
}

///////////////////////////////////////////////////////////////////////////////
// Entry point function
///////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    ULONG iRet = 0;
    printf("Enter the number\n");
    scanf("%d", &iValue);

    iRet = MultiplyFactors(iValue);

    if(iRet == 0)
    {
        printf("Note : Please Enter Non zero values\n");
    }
    else
    {
        printf("Multiplication of the factors is : %d", iRet);
    }

    return 0;
}