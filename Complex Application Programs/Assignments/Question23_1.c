////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a program which accept string from user and  
//                     convert it into lowercase.
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////
//
// Function name : strlwrX
// Input :         Integer(Base Address)
// Output :        Returns Nothing(void)
// Description :   Converts the string into lowercase
// Author :        Dinesh Devidasrao Kadam
// Date :          22 May 2023
//
///////////////////////////////////////////////////////////////////////////

void strlwrX(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        str++;
    }
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

    strlwrX(Arr);

    printf("Lower case string is : %s", Arr);

    return 0;
}