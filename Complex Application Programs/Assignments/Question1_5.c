///////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a program to print * for 5 times
//
//////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////
//
//  Function Name : Accept
//  Input :         Integer
//  Output :        Returns Nothing
//  Description :   It will print * for 5 times
//  Author :        Dinesh Devidasrao Kadam
//  Date :          24 April 2023
//
//////////////////////////////////////////////////////////////////

void Accept(int iNo)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt<iNo; iCnt++)
    {
        printf("*\n");
    }
}

/////////////////////////////////////////////////////////////
// Entry Point Function
////////////////////////////////////////////////////////////

int main()
{
   int iValue = 0;
   iValue = 5;

   Accept(iValue);
   
   return 0;
}