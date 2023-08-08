////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a program which accept string from user and  
//                     count number of small characters
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////
//
// Function name : CountSmall
// Input :         Integer(Base Address)
// Output :        Integer
// Description :   Counts the number of small letters from the string
// Author :        Dinesh Devidasrao Kadam
// Date :          22 May 2023
//
///////////////////////////////////////////////////////////////////////////

int CountSmall(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCount++;
        }
        str++;
    }

    return iCount;
}

///////////////////////////////////////////////////////////
// Entry Point Function
///////////////////////////////////////////////////////////

int main()
{
    char Arr[40];
    int iRet = 0;

    printf("Please, enter string \n");
    scanf("%[^'\n']s", Arr);

    iRet = CountSmall(Arr);

    printf("Number of small letters are : %d", iRet);

    return 0;
}