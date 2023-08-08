/////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a program which accept string from user and reverse that string 
//                     in place.
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////
//
// Function Name : strrevX
// Input :         Integer(Base Address of an array)
// Output :        Returns Nothing(void)
// Description :   Reverse the string.
// Author :        Dinesh Devidasrao Kadam
// Date :          24 May 2023
//
///////////////////////////////////////////////////////////////////////////

void strrevX(char *str)
{
    char *start = NULL;
    char *end = NULL;
    char ctemp = '\0';
    
    start = str;
    end = str;

    while(*end != '\0')
    {
        end++;  
    }
    end--;

    while(start < end)
    {
        ctemp = *start;
        *start = *end;
        *end = ctemp;
        start++;
        end--;
    }
}

///////////////////////////////////////////////////////////////////////////
// Entry Point Function
//////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[40];

    printf("Please, enter the string \n");
    scanf("%[^'\n']s", Arr);

    strrevX(Arr);

    printf("Reverse string is : %s \n", Arr);
    
    return 0;
}