////////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a program which accept string from user and  
//                     returns difference between small and capital characters.
//
//////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////
//
// Function name : Difference
// Input :         Integer(Base Address)
// Output :        Integer
// Description :   Finds the difference between the frequency of small and 
//                 capital letters from the string.
// Author :        Dinesh Devidasrao Kadam
// Date :          22 May 2023
//
///////////////////////////////////////////////////////////////////////////

int Difference(char *str)
{
    int iCount1 = 0, iCount2 = 0;

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCount1++;
        }

        if((*str >= 'a') && (*str <= 'z'))
        {
            iCount2++;
        }

        str++;
    }

    return iCount2 - iCount1;
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

    iRet = Difference(Arr);

    printf("Difference between frequencies of small and capital is : %d", iRet);

    return 0;
}