//////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
// Problem Statement : Write a program which accepts string from user and count number of characters.
// 
// Input : Hello     
// Output : 5
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int strlenR(char *str)
{
   static int iLength = 0;
   if(*str != '\0')
   {
     iLength++;
     str++;
     strlenR(str);       
   }

   return iLength;
}

int main()
{
    char Arr[30];
    int iRet = 0;

    printf("Please, enter the string\n");
    scanf("%[^'\n']s", Arr);

    iRet = strlenR(Arr);
    printf("Length of the string is : %d\n", iRet);

    return 0;
}