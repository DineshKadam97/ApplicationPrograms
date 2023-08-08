//////////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a program which accept number from user and returns
//                     difference bwteen the sum of it's factors and non factors.
//
/////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : FactorsDiff
// Input :         Integer
// Output :        Integer
// Description :   Finds factors, non factors and difference between their sums
// Author :        Dinesh Devidasrao Kadam
// Date :          4 May 2023
//
////////////////////////////////////////////////////////////////////////////////////

int FactorsDiff(int iNo)
{
    int iCnt = 0;
    int iSum1 = 0;
    int iSum2 = 0;
    int Diff = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum1 = iSum1 + iCnt;
        }
        else
        {
            iSum2 = iSum2 + iCnt;
        }
    }

    Diff = iSum2 - iSum1;

    return Diff;

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

    iRet = FactorsDiff(iValue);
    printf("Differencce is : %d\n",iRet);

    return 0;
}