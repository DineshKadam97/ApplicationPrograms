////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a program which accept number from user and  
//                     count frequency of 4 in it.
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////
//
// Function name : CountFour
// Input :         Integer
// Output :        Integer
// Description :   Finds the frequency of 4 in the given number
// Author :        Dinesh Devidasrao Kadam
// Date :          11 May 2023
//
///////////////////////////////////////////////////////////////////////////

int CountFour(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        
        if(iDigit == 4)
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

    printf("Please Enter the number\n");
    scanf("%d", &iValue);

    iRet = CountFour(iValue);

    printf("Frequency of 4 in %d is : %d\n", iValue, iRet);

    return 0;
}