/////////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Accept 2 numbers from user and display first number 
//                     second number of times.
//
////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Input :         Integer, Integer
//  Output :        Returns Nothing
//  Description :   It will print first number for second number of times
//  Author :        Dinesh Devidasrao Kadam
//  Date :          24 April 2023
//
/////////////////////////////////////////////////////////////////////////////////

void Display(int iNo1, int iNo2)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt<iNo2; iCnt++)
    {
        printf("%d\n", iNo1);
    }
}

/////////////////////////////////////////////////////////////
// Entry Point Function
////////////////////////////////////////////////////////////

int main()
{
   int iValue = 0;
   int iCount = 0;
   printf("Enter the number\n");
   scanf("%d", &iValue);

   printf("Enter the frequency\n");
   scanf("%d", &iCount);
   
   Display(iValue, iCount);
   
   return 0;
}