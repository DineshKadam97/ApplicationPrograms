/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
// Problem Statement : Write a recursive program which accept number from user and return largest digit.
// 
// Input : 845    
// Output : 8 
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int MaximumR(int iNo)
{
   int iDigit = 0;
   static int iMax = 0;

   if(iNo < 0)
   {
      iNo = -iNo;
   }

   if(iNo != 0)
   {
      iDigit = iNo % 10;
      if(iDigit > iMax)
      {
         iMax = iDigit;
      }
      iNo = iNo / 10;

      if(iMax != 9)
      {
         MaximumR(iNo);
      }   
   }

   return iMax;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Please, enter the number\n");
    scanf("%d", &iValue);

    iRet = MaximumR(iValue);

    printf("Largest digit is : %d\n", iRet);

    return 0;
}