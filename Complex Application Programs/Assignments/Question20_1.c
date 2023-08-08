///////////////////////////////////////////////////////////////////////////////////////////////////
// 
// Problem Statement : Accept character from user. Check whether its alphabet or not
// 
//////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef int BOOL; 
#define TRUE 1
#define FALSE 0

///////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : CheckChar
// Input :         Character
// Output :        Boolean(TRUE or FALSE)
// Description :   Checks whteher input is aplphabet or not.
// Author :        Dinesh Devidasrao Kadam
// Date :          22 May 2023
//
///////////////////////////////////////////////////////////////////////////////////////////

BOOL CheckChar(char cValue)
{
    if(((cValue >= 'A') && (cValue <= 'Z')) || ((cValue >= 'a') && (cValue <= 'z')))
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

    bRet = CheckChar(cValue);

    if(bRet == TRUE)
    {
        printf("%c is an alphabet \n", cValue);
    }
    else
    {
        printf("%c is not an alphabet \n", cValue);
    }

    return 0;
}