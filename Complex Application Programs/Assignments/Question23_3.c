////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a program which accept string from user and  
//                     convert the uppercase character into lowercase and 
//                     lowercase character into uppercase.
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//
// Function Name : strtoggleX
// Input :         Integer(Base Address)
// Output :        Integer
// Description :   Toggles the entered string.
// Author :        Dinesh Devidasrao Kadam
// Date :          22 May 2023
//
////////////////////////////////////////////////////////////////////////////////

void strtoggleX(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        else if((*str >= 'a') && (*str <= 'z'))
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

    strtoggleX(Arr);

    printf("String after toggling is : %s", Arr);


    return 0;
}