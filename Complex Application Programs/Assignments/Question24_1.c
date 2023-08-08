/////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a program which accept string from user and accept one character.
//                     Check whether that character is present in the string or not.
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 2

///////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CheckChar
// Input :         Integer(Base Address), Character
// Output :        Boolean(TRUE or FALSE)
// Description :   Checks whether particular character is present in the string or not.
// Author :        Dinesh Devidasrao Kadam
// Date :          24 May 2023
//
///////////////////////////////////////////////////////////////////////////////////////////

BOOL CheckChar(char *str, char cValue)
{
    BOOL bFlag = FALSE;

    while(*str != '\0')
    {
        if(*str == cValue)
        {
            bFlag = TRUE;
            break;
        }

        str++;
    }

    return bFlag;
}

///////////////////////////////////////////////////////////////////////////
// Entry Point Function
//////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[40];
    char ch = '\0';
    BOOL bRet = FALSE; 

    printf("Please, enter the string \n");
    scanf("%[^'\n']s", Arr);

    printf("Please, enter the charater you want to check \n");
    scanf(" %c", &ch);

    bRet = CheckChar(Arr, ch);

    if(bRet == TRUE)
    {
        printf("Character %c is present in the given string \n", ch);
    }
    else
    {
        printf("Character %c is not present in the given string \n", ch);
    }




    return 0;
}