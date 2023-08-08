/////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a program which accept string from user and accept one character.
//                     Return frequency of that character.
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CountChar
// Input :         Integer(Base Address), Character
// Output :        Integer
// Description :   Conunts the frequency of particular character in the string.
// Author :        Dinesh Devidasrao Kadam
// Date :          24 May 2023
//
////////////////////////////////////////////////////////////////////////////////

int CountChar(char *str, char cValue)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == cValue)
        {
            iCount++;
        }

        str++;    
    }

    return iCount;
}

///////////////////////////////////////////////////////////////////////////
// Entry Point Function
//////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[40];
    char ch = '\0';
    int iRet = 0;

    printf("Please, enter the string \n");
    scanf("%[^'\n']s", Arr);

    printf("Please, enter the chracter to check its frequency \n");
    scanf(" %c", &ch);
    
    iRet = CountChar(Arr, ch);

    printf("Frequency of %c is : %d \n", ch, iRet);

    return 0;
}