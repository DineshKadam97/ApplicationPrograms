/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
// Problem Statement : Write a recursive program which accept number from user and return its product of digits.
// 
// Input : 845    
// Output : 160
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int MultiplyDigitsR(int iNo)
{
   int iDigit = 0;
   static int iProduct = 1;

   if(iNo != 0)
   {
      iDigit = iNo % 10;
      iProduct = iProduct * iDigit;
      iNo = iNo / 10;
      MultiplyDigitsR(iNo);
   }

   return iProduct;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Please, enter the number\n");
    scanf("%d", &iValue);

    iRet = MultiplyDigitsR(iValue);

    printf("Product of the digits is : %d\n", iRet);

    return 0;
}