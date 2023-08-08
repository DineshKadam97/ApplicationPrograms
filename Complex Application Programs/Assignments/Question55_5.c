/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
// Problem Statement : Write a recursive program which accept number from user and return its reverse number.
// 
// Input : 845    
// Output : 548
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int ReverseR(int iNo)
{
   int iDigit = 0;
   static int iReverse = 0;

   if(iNo < 0)
   {
      iNo = -iNo;
   }

   if(iNo != 0)
   {
      iDigit = iNo % 10;
      iReverse = (iReverse * 10) + iDigit;
      iNo = iNo / 10;
      ReverseR(iNo); 
   }

   return iReverse;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Please, enter the number\n");
    scanf("%d", &iValue);

    iRet = ReverseR(iValue);

    printf("Reverse number is : %d\n", iRet);

    return 0;
}