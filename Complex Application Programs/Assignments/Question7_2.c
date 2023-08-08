////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a program which accept number from user and  
//                     check whether its contains 0 in it or not
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

/////////////////////////////////////////////////////////////////////////////
//
// Function name : CheckZero
// Input :         Integer
// Output :        Boolean(TRUE or FALSE)
// Description :   Checks whether 0 is present in number or not
// Author :        Dinesh Devidasrao Kadam
// Date :          11 May 2023
//
///////////////////////////////////////////////////////////////////////////

BOOL CheckZero(int iNo)
{
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 0)
        {
            break;
        }

        iNo = iNo / 10;
    }

    if(iDigit == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

///////////////////////////////////////////////////////////
// Entry Point Function
///////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Please Enter the number\n");
    scanf("%d", &iValue);

    bRet = CheckZero(iValue);

    if(bRet == TRUE)
    {
        printf("There is Zero in %d\n", iValue);
    }
    else
    {
        printf("There is no Zero in %d\n", iValue);
    }

    return 0;
}
