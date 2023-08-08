/////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
// Problem Statement : Write a program which accepts string from user and count white spaces.
// 
// Input : Hel lo Wor lD    
// Output : 3
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int WhiteSpaceR(char *str)
{
   static int iCnt = 0;
   if(*str != '\0')
   {
     if(*str == ' ')
     {
        iCnt++;
     }
     str++;
     WhiteSpaceR(str);       
   }

   return iCnt;
}

int main()
{
    char Arr[30];
    int iRet = 0;

    printf("Please, enter the string\n");
    scanf("%[^'\n']s", Arr);

    iRet = WhiteSpaceR(Arr);
    printf("Number of white spaces in the string are : %d\n", iRet);

    return 0;
}