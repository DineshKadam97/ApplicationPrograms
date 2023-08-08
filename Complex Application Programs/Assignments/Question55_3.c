/////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
// Problem Statement : Write a program which accepts string from user and count number of small characters.
// 
// Input : Hello    
// Output : 4
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int SmallR(char *str)
{
   static int iCnt = 0;
   if(*str != '\0')
   {
     if((*str >= 'a') && (*str <= 'z'))
     {
        iCnt++;
     }
     str++;
     SmallR(str);       
   }

   return iCnt;
}

int main()
{
    char Arr[30];
    int iRet = 0;

    printf("Please, enter the string\n");
    scanf("%[^'\n']s", Arr);

    iRet = SmallR(Arr);
    printf("Number of small characters in the string are : %d\n", iRet);

    return 0;
}