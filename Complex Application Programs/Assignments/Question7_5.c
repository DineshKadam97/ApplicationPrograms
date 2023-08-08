////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a program which accept number from user and  
//                     count frequency of digits which are less than 6.
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////
//
// Function name : Count
// Input :         Integer
// Output :        Integer
// Description :   Finds the frequency of digits less than 6 in given number
// Author :        Dinesh Devidasrao Kadam
// Date :          11 May 2023
//
///////////////////////////////////////////////////////////////////////////

int Count(int iNo)
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
        
        if(iDigit < 6)
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

    iRet = Count(iValue);

    printf("Frequency of digits less than 6 in %d is : %d\n", iValue, iRet);

    return 0;
}