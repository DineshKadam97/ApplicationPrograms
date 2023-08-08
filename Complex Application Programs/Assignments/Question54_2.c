/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
// Problem Statement : Write a recursive program which accept number from user and return summation of its digits.
// 
// Input : 845    
// Output : 17 
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int SummationR(int iNo)
{
   int iDigit = 0;
   static int iSum = 0;

   if(iNo != 0)
   {
      iDigit = iNo % 10;
      iSum = iDigit + iSum;
      iNo = iNo / 10;
      SummationR(iNo);
   }

   return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Please, enter the number\n");
    scanf("%d", &iValue);

    iRet = SummationR(iValue);

    printf("Summation of the digits is : %d\n", iRet);

    return 0;
}