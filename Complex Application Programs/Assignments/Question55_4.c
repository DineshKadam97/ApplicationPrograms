/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
// Problem Statement : Write a recursive program which accept number from user and return samllest digit.
// 
// Input : 845    
// Output : 4 
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int MinimumR(int iNo)
{
   int iDigit = 0;
   static int iMin = 9;

   if(iNo < 0)
   {
      iNo = -iNo;
   }

   if(iNo != 0)
   {
      iDigit = iNo % 10;
      if(iDigit < iMin)
      {
         iMin = iDigit;
      }
      iNo = iNo / 10;

      if(iMin != 0)
      {
         MinimumR(iNo);
      }   
   }

   return iMin;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Please, enter the number\n");
    scanf("%d", &iValue);

    iRet = MinimumR(iValue);

    printf("Smallest digit is : %d\n", iRet);

    return 0;
}