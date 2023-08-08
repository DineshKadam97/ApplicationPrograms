///////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a program which accepts a number and display
//                     its table in reverse.
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////
//
// Function Name : DisplayTable
// Input :         Integer
// Output :        Returns nothing(void)
// Description :   Prints the Table of given number in reverse.
// Author :        Dinesh Devidasrao Kadam
// Date :          4 May 2023
//
//////////////////////////////////////////////////////////////////////////////

void DisplayTable(int iNo)
{
    int iCnt = 0;
    int iMult = 1;

    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        iMult = iNo * iCnt;
        printf("%d\t", iMult);
    } 
}

int main()
{
    int iValue = 0;
    
    printf("Enter the number\n");
    scanf("%d", &iValue);
    
    printf("Reverse Table of %d is : \n", iValue);
    DisplayTable(iValue);

    return 0;
}