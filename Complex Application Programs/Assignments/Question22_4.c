////////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a program which accept string from user and  
//                     check whether it contains vowel in it or not.
//
//////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////////////////
//
// Function name : CheckVowel
// Input :         Integer(Base Address)
// Output :        Boolean(true or false)
// Description :   Checks whether vowel is present in a string or not. 
// Author :        Dinesh Devidasrao Kadam
// Date :          22 May 2023
//
///////////////////////////////////////////////////////////////////////////

bool CheckVowel(char *str)
{
    char ch = '\0';
    while(*str != '\0')
    {
        if((*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U') || (*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u'))
        {
            break;
        }
        str++;
    }

    if(str == '\0')
    {
        return false;
    }
    else
    {
        return true;
    }
}

///////////////////////////////////////////////////////////
// Entry Point Function
///////////////////////////////////////////////////////////

int main()
{
    char Arr[40];
    bool bRet = false;

    printf("Please, enter string \n");
    scanf("%[^'\n']s", Arr);

    bRet = CheckVowel(Arr);

    if(bRet == true)
    {
        printf("Vowel is present \n");
    }
    else
    {
        printf("Vowel is absent \n");
    }

    return 0;
}