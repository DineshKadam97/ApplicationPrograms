///////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Accept one number and check if number is even or odd
//
//////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;
///////////////////////////////////////////////////////////////
//
//  Function Name : CheckEven
//  Input :         Integer
//  Output :        TRUE or FALSE
//  Description :   Checks if entered number is Even or Odd
//  Author :        Dinesh Devidasrao Kadam
//  Date :          24 April 2023
//
////////////////////////////////////////////////////////////////

BOOL CheckEven(int iNo)
{
    if((iNo % 2) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

/////////////////////////////////////////////////////////////
// Entry Point Function
////////////////////////////////////////////////////////////

int main()
{
   int iValue = 0;
   BOOL bRet = FALSE;

   printf("Enter number\n");
   scanf("%d", &iValue);

   bRet = CheckEven(iValue);

   if(bRet == TRUE)
   {
      printf("Number is Even\n");
   }
   else
   {
      printf("Number is Odd\n");
   }

    return 0;
}