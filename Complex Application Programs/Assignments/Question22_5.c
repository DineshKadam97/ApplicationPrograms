////////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a program which accept string from user and  
//                     display  it in reverse order.
//
//////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////
//
// Function name : DisplayReverse
// Input :         Integer(Base Address), Innteger(Base Address)
// Output :        Returns Nothing(void)
// Description :   Displays the string in reverse order.
// Author :        Dinesh Devidasrao Kadam
// Date :          22 May 2023
//
///////////////////////////////////////////////////////////////////////////

void DisplayReverse(char *str, char *dest)
{
    int iLength = 0;
    
    while(*str != '\0')
    {
        str++;
        iLength++;
    }
    str--;

    while(iLength != 0)
    {
        *dest = *str;
        str--;
        dest++;
        iLength--; 
    }

    *dest = '\0';
}

int main()
{
    char Arr[40];
    char Brr[40];

    printf("Please, enter string \n");
    scanf("%[^'\n']s", Arr);

    DisplayReverse(Arr, Brr);
    printf("Reverse string is : %s", Brr);

    return 0;
}