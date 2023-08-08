///////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a program which accepts number from user 
//                     and print numbers till that number.
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Input :         Integer
// Output :        Returns nothing(void)
// Description :   Prints consecutive numbers till N
// Author :        Dinesh Devidasrao Kadam
// Date :          4 May 2023
//
//////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    else if(iNo == 0)
    {
        printf("0\n");
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t", iCnt);
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter number\n");
    scanf("%d", &iValue);
    
    printf("Consecutive numbers are :\n");
    Display(iValue);

    return 0;
}