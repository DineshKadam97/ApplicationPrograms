///////////////////////////////////////////////////////////////////////////////////////////////////
// 
// Problem Statement : Accept character from user. Check whether it is digit or not
// 
//////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef int BOOL; 
#define TRUE 1
#define FALSE 0

///////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : CheckDigit
// Input :         Character
// Output :        Boolean(TRUE or FALSE)
// Description :   Checks whteher input is digit or not.
// Author :        Dinesh Devidasrao Kadam
// Date :          22 May 2023
//
///////////////////////////////////////////////////////////////////////////////////////////

BOOL CheckDigit(char cNo)
{
    if((cNo >= '0') && (cNo <= '9'))
    {
        return TRUE;
    }
    else 
    {
        return FALSE;
    }
}

///////////////////////////////////////////////////////////////////////////
// Entry Point Function
//////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Please, enter the character \n");
    scanf("%c", &cValue);

    bRet = CheckDigit(cValue);

    if(bRet == TRUE)
    {
        printf("%c is a digit\n", cValue);
    }
    else
    {
        printf("%c is not a digit \n", cValue);
    }

    return 0;
}