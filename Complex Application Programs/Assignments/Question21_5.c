///////////////////////////////////////////////////////////////////////////////////////////////////
// 
// Problem Statement : Accept character from user. Display its ASCII value in decimal, octal and
//                     hexa deciamal.
//
//////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : Display
// Input :         Character
// Output :        Returns Nothing(void)
// Description :   Displays Decimal, Octal and Hexa decimal values of the character.
// Author :        Dinesh Devidasrao Kadam
// Date :          22 May 2023
//
///////////////////////////////////////////////////////////////////////////////////////////

void Display(char cValue)
{
    printf("Decimal value of %c is %d \n", cValue, cValue);
    printf("Octal value of %c is %o \n", cValue, cValue);
    printf("Hexa-decimal value of %c is %x \n", cValue, cValue);
}

///////////////////////////////////////////////////////////////////////////
// Entry Point Function
//////////////////////////////////////////////////////////////////////////

int main()
{
    char ch = '\0';

    printf("Please, enter the character \n");
    scanf("%c", &ch);

    Display(ch);

    return 0;
}