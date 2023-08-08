///////////////////////////////////////////////////////////////////////////////////////////////////
// 
// Problem Statement : Accept character from user. Check whether it is capital or not
// 
//////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef int BOOL; 
#define TRUE 1
#define FALSE 0

///////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : CheckCapitalChar
// Input :         Character
// Output :        Boolean(TRUE or FALSE)
// Description :   Checks whteher input is capital alphabet or not.
// Author :        Dinesh Devidasrao Kadam
// Date :          22 May 2023
//
///////////////////////////////////////////////////////////////////////////////////////////

BOOL CheckCapitalChar(char cNo)
{
    if((cNo >= 'A') && (cNo <= 'Z'))
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

    bRet = CheckCapitalChar(cValue);

    if(bRet == TRUE)
    {
        printf("%c is capital character \n", cValue);
    }
    else
    {
        printf("%c is a not a capital character \n", cValue);
    }
    

    return 0;
}