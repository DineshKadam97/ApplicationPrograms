////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a program which accept number from user and
//                     display sum of all its non factors.
//
///////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////
//
// Function Name : SumNonFactors
// Input :         Integer
// Output :        Integer
// Description :   Displays sum of non factors of given number
// Author :        Dinesh Devidasrao Kadam
// Date :          4 May 2023
//
//////////////////////////////////////////////////////////////////////////////

int SumNonFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;
}

///////////////////////////////////////////////////////////////////////////////
// Entry point function
///////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    iRet = SumNonFactors(iValue);
    printf("Sum of Non factors is : %d\n",iRet);

    return 0;
}