////////////////////////////////////////////////////////////////////////////////////////
// 
// Problem Statement : Accept character from user. If it is capital then display 
//                     its corrosponding small character. If the input character is small 
//                     then display its corrosponding capital character. In other cases
//                     as it is.
//
////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////
//
// Function name : Display
// Input :         Character
// Output :        Returns Nothing(void)
// Description :   Changes the case of the character.
// Author :        Dinesh Devidasrao Kadam
// Date :          22 May 2023
//
///////////////////////////////////////////////////////////////////////////

void Display(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
    {
        printf("Small aplphabet is : %c", (ch + 32));
    }
    else if (((ch >= 'a') && (ch <= 'z')))
    {
        printf("Capital aplphabet is : %c", (ch - 32));
    }
    else
    {
        printf("Character is : %c", ch);
    }
}

///////////////////////////////////////////////////////////////////////////
// Entry Point Function
//////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';

    printf("Please, enter the character \n");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}