///////////////////////////////////////////////////////////////////////////////////////////////////
// 
// Problem Statement : Accept character from user. Check whether it is special symbol or not
//                     (!, @, #, $, %, &, ^, *)
//
//////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef int BOOL; 
#define TRUE 1
#define FALSE 0

/////////////////////////////////////////////////////////////////////////////
//
// Function name : Display
// Input :         Character
// Output :        Boolean(TRUE or FALSE)
// Description :   Checks whether character is special symbol or not.
// Author :        Dinesh Devidasrao Kadam
// Date :          22 May 2023
//
///////////////////////////////////////////////////////////////////////////

BOOL Display(char ch)
{
    char Cnt = '\0';

    if(((ch == '!') || (ch == '@') || (ch == '#')) || (ch == '$') || (ch == '%') || (ch == '^') || (ch == '&') || (ch == '*'))
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

    bRet = Display(cValue);

    if(bRet == TRUE)
    {
        printf("%c is a special character \n", cValue);
    }
    else
    {
        printf("%c is not a special character \n", cValue);
    }

    return 0;
}