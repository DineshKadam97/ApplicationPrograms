/////////////////////////////////////////////////////////////////////////////////////
// 
// Problem Statement : Write a recursive program which display below pattern.
// 
// Input : 5    
// Output : 1 2 3 4 5 
//
////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayR(int iNo)
{
   static int iCnt = 1;

   if(iCnt <= iNo)
   {
      printf("%d\t", iCnt);
      iCnt++;
      DisplayR(iNo);
   }
}

/*
  We can also below syntax :
  int iCnt = iNo;
   if(iCnt >= 1)
    {
       printf("%d\t*\t", iCnt);
       iCnt--;
       iNo--;
       DisplayR(iNo);
   }
*/

int main()
{
    int iValue = 0;

    printf("Please, enter the number\n");
    scanf("%d", &iValue);

    DisplayR(iValue);

    return 0;
}