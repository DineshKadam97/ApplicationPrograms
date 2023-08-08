////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a program which accept number from user and
//                     display all its non factors.
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////
//
// Function Name : DisplayNonFactors
// Input :         Integer
// Output :        Returns nothing(void)
// Description :   Displays non factors of given number
// Author :        Dinesh Devidasrao Kadam
// Date :          4 May 2023
//
//////////////////////////////////////////////////////////////////////////////

void DisplayNonFactorsA(int iNo)
{
    int iCnt = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
           printf("%d\n", iCnt);
        }
    }
}

///////////////////////////////////////////////////////////////////////////////
// Entry point function
///////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter the number\n");
    scanf("%d", &iValue);
    
    printf("Non factors are : \n");
    DisplayNonFactorsA(iValue);

    return 0;
}