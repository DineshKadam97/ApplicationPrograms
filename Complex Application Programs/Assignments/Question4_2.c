///////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a program which accepts one number from user 
//                     and check whether that number is greater than 100 
//                     or not.
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CheckGreater
// Input :         Integer
// Output :        Boolean(TRUE or FALSE)
// Description :   Checks whether number is greater than 100 or not
// Author :        Dinesh Devidasrao Kadam
// Date :          4 May 2023
//
/////////////////////////////////////////////////////////////////////////////////////

BOOL CheckGreater(int iNo)
{
    if(iNo > 100)
    {
        return TRUE;
    }
    else if(iNo < 100)
    {
        return FALSE;
    }
}

////////////////////////////////////////////////////////////////
// Entry Point Function
///////////////////////////////////////////////////////////////

int main()
{
   int iValue = 0;
   BOOL bRet = FALSE;

   printf("Please enter the number\n");
   scanf("%d", &iValue);

   bRet = CheckGreater(iValue);
   
   if(bRet == TRUE)
   {
     printf("%d is greater than 100\n", iValue);
   }
   else if(bRet == FALSE)
   {
     printf("%d is less than 100\n", iValue);
   }
   else
   {
     printf("Number is 100\n");
   }

   return 0;
}