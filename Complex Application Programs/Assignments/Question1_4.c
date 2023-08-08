///////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Accept one number and check if its divisible by 5 or not
//
//////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

///////////////////////////////////////////////////////////////
//
//  Function Name : Check
//  Input :         Integer
//  Output :        TRUE or FALSE
//  Description :   Checks if number is divisible by 5 or not
//  Author :        Dinesh Devidasrao Kadam
//  Date :          24 April 2023
//
////////////////////////////////////////////////////////////////

BOOL Check(int iNo)
{
    if((iNo % 5) == 0)
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

   bRet = Check(iValue);

   if(bRet == TRUE)
   {
      printf("Number is Divisible by 5\n");
   }
   else
   {
      printf("Number is not divisible by 5\n");
   }

    return 0;
}