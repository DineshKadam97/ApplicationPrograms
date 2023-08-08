/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
// Problem Statement : Write a recursive program which accept number from user and return its factorial.
// 
// Input : 5    
// Output : 120
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int FactorialR(int iNo)
{
   static int iCnt = 1;
   static int iFact = 1;

   if(iCnt <= iNo)
   {
      iFact = iFact * iCnt;
      iCnt++;
      FactorialR(iNo);
   }

   return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Please, enter the number\n");
    scanf("%d", &iValue);

    iRet = FactorialR(iValue);

    printf("Factorial of the digits is : %d\n", iRet);

    return 0;
}