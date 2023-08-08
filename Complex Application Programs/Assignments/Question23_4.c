////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a program which accept string from user and  
//                     display only digits from the string.
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////
//
// Function name : DisplayDigit
// Input :         Integer(Base Address)
// Output :        Returns Nothing(void)
// Description :   Displays only the digits from the string
// Author :        Dinesh Devidasrao Kadam
// Date :          22 May 2023
//
///////////////////////////////////////////////////////////////////////////

void DisplayDigit(char *str)
{
    while(*str != '\0')
    {
        if(((*str >= 'A') && (*str <= 'Z')) || ((*str >= 'a') && (*str <= 'z')))
        {
            *str = ' ';
        }
        str++;
    }
}

int main()
{
    char Arr[40];
    
    printf("Please, enter string \n");
    scanf("%[^'\n']s", Arr);

    DisplayDigit(Arr);

    printf("Digits in the strings are : %s", Arr);


    return 0;
}