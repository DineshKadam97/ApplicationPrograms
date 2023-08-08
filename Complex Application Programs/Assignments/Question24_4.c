/////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a program which accept string from user and accept one character.
//                     Return index of last occurence of that character.
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#define ERR_NOTFOUND -1

/////////////////////////////////////////////////////////////////////////////////
//
// Function Name : LastOcc
// Input :         Integer(Base Address), Character
// Output :        Integer
// Description :   Finds the index of last occurence of particular character.
// Author :        Dinesh Devidasrao Kadam
// Date :          24 May 2023
//
////////////////////////////////////////////////////////////////////////////////

int LastOcc(char *str, char cValue)
{
    int iCount = 1;
    int iIndex = ERR_NOTFOUND;

    while(*str != '\0')
    {
        if(*str == cValue)
        {
            iIndex = iCount;   
        }

        iCount++;
        str++;    
    }

    return iIndex;
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
    
    iRet = LastOcc(Arr, ch);

    if(iRet == ERR_NOTFOUND)
    {
        printf("%c is not present in the given string \n", ch);
    }
    else
    {
        printf("Last occurence of %c is at : %d \n", ch, iRet);
    }
    
    return 0;
}