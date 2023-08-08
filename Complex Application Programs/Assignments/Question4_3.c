///////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a program which accepts two numbers from user 
//                     and check whether numbers are equal or not.
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CheckEqual
// Input :         Integer
// Output :        Boolean(TRUE or FALSE)
// Description :   Checks whether two numbers are equal or not
// Author :        Dinesh Devidasrao Kadam
// Date :          4 May 2023
//
/////////////////////////////////////////////////////////////////////////////////////

BOOL CheckEqual(int iNo1, int iNo2)
{
    if(iNo1 == iNo2)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    BOOL bRet = FALSE;

    printf("Enter the first number\n");
    scanf("%d", &iValue1);

    printf("Enter the second number\n");
    scanf("%d", &iValue2); 
    
    bRet = CheckEqual(iValue1, iValue2);
    
    if(bRet == TRUE)
    {
        printf("Numbers are equal\n");
    }
    else
    {
        printf("Numbers are not equal\n");
    }

    return 0;
}