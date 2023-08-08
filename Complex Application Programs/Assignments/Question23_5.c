/////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a program which accept string from user and count number of white
//                     spaces.
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CountWhite
// Input :         Integer(Base Address)
// Output :        Integer
// Description :   Conunts the white spaces in the string.
// Author :        Dinesh Devidasrao Kadam
// Date :          24 May 2023
//
////////////////////////////////////////////////////////////////////////////////

int CountWhite(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
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
    int iRet = 0;
    
    printf("Please, enter string \n");
    scanf("%[^'\n']s", Arr);

    iRet = CountWhite(Arr);

    printf("Number of white spaces are : %d", iRet);


    return 0;
}