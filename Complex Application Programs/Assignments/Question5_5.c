///////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a program which accepts N from user 
//                     and print first five multiples of N.
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////
//
// Function Name : MultipleDisplay
// Input :         Integer
// Output :        Returns nothing(void)
// Description :   Prints first five multiples of N.
// Author :        Dinesh Devidasrao Kadam
// Date :          4 May 2023
//
//////////////////////////////////////////////////////////////////////////////

void MultipleDisplay(int iNo)
{
    int iCnt = 0;
    int iMult = 1;
    
    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        iMult = iCnt * iNo;
        printf("%d\t", iMult);
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter number\n");
    scanf("%d", &iValue);
    
    printf("First five multiples of %d are : \n", iValue);
    MultipleDisplay(iValue);

    return 0;
}