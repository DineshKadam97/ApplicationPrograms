////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a program which accept string from user and  
//                     convert it into uppercase.
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//
// Function Name : struprX
// Input :         Integer(Base Address)
// Output :        Returns Nothing(void)
// Description :   Converts the string into lowercase.
// Author :        Dinesh Devidasrao Kadam
// Date :          22 May 2023
//
////////////////////////////////////////////////////////////////////////////////

void struprX(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }

        str++;
    }
}

int main()
{
    char Arr[40];

    printf("Please, enter string \n");
    scanf("%[^'\n']s", Arr);

    struprX(Arr);

    printf("Upper case string is : %s", Arr);

    return 0;
}