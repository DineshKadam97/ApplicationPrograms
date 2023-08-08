///////////////////////////////////////////////////////////////////////////////////////////////////
// 
// Problem Statement : Accept character from user. Check whether it is small case or not. 
//
//////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

typedef int BOOL; 
#define TRUE 1
#define FALSE 0

///////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : CheckSmallChar
// Input :         Character
// Output :        Boolean(TRUE or FALSE)
// Description :   Checks whteher input is small alphabet or not.
// Author :        Dinesh Devidasrao Kadam
// Date :          22 May 2023
//
///////////////////////////////////////////////////////////////////////////////////////////

BOOL CheckSmallChar(char cNo)
{
    if((cNo >= 'a') && (cNo <= 'z'))
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

    bRet = CheckSmallChar(cValue);

    if(bRet == TRUE)
    {
        printf("%c is a smallcase character \n", cValue);
    }
    else if(bRet == FALSE)
    {
        printf("%c is not a smallcase character \n", cValue);
    }

    return 0;
}