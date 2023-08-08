////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a program which accept string from user and  
//                     count number of capital characters
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////
//
// Function name : CountCapital
// Input :         Integer(Base Address)
// Output :        Integer
// Description :   Counts the number of capital letters from the string
// Author :        Dinesh Devidasrao Kadam
// Date :          22 May 2023
//
///////////////////////////////////////////////////////////////////////////

int CountCapital(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
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

    iRet = CountCapital(Arr);

    printf("Number of capital letters are : %d", iRet);

    return 0;
}