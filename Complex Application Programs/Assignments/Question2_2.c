/////////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Accept one number from user and print that many * on screen.
//
////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Input :         Unsigned Integer
//  Output :        Returns Nothing
//  Description :   It will print * for N number of times using while loop
//  Author :        Dinesh Devidasrao Kadam
//  Date :          24 April 2023
//
/////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    while(iNo>0)
    {
        printf("*\n");
        iNo--;
    }
}

/////////////////////////////////////////////////////////////
// Entry Point Function
////////////////////////////////////////////////////////////

int main()
{
   int iValue = 0;
   printf("Enter the number\n");
   scanf("%d", &iValue);
   
   Display(iValue);
   
   return 0;
}