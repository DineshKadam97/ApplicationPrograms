////////////////////////////////////////////////////////////////////////////////////////
// 
// Problem Statement : Accept character from user. If it is capital then display 
//                     all the characters from that character till Z. If the input 
//                     character is small then print all the characters in reverse 
//                     order till a. IN other cases return directly.
//
////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////
//
// Function name : Display
// Input :         Character
// Output :        Returns Nothing(void)
// Description :   Displays characters in particular otrder.
// Author :        Dinesh Devidasrao Kadam
// Date :          22 May 2023
//
///////////////////////////////////////////////////////////////////////////

void Display(char ch)
{
    char Cnt = '\0';

    if((ch >= 'A') && (ch <= 'Z'))
    {
        for(Cnt = ch; Cnt<=90; Cnt++)
        {
            printf("%c\t", Cnt);
        }
    }
    else if (((ch >= 'a') && (ch <= 'z')))
    {
        for(Cnt = ch; Cnt>=97; Cnt--)
        {
            printf("%c\t", Cnt);
        }
    }
    else
    {
        printf("Error : Invalid Input \n");
        printf("Note : Please, enter an alphabet \n");
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