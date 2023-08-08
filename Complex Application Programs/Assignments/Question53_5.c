/////////////////////////////////////////////////////////////////////////////////////
// 
// Problem Statement : Write a recursive program which display below pattern.
// 
// Input : 5    
// Output : a b c d e
//
////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayR(int iNo)
{
   static char Ch = 'a';
   static int iCnt = 1;
          
   if(iCnt <= iNo)
   {
      printf("%c\t", Ch);
      Ch++;
      iCnt++;
      DisplayR(iNo);
   }
}

int main()
{
    int iValue = 0;

    printf("Please, enter the number\n");
    scanf("%d", &iValue);

    DisplayR(iValue);

    return 0;
}