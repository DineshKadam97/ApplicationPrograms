////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a program which accept number from user and
//                     display its factors in decreasing order.
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////
//
// Function Name : DisplayFactorsD
// Input :         Integer
// Output :        Returns nothing(void)
// Description :   Finds factors and display them in descending order
// Author :        Dinesh Devidasrao Kadam
// Date :          4 May 2023
//
//////////////////////////////////////////////////////////////////////////////

void DisplayFactorsD(int iNo)
{
    int iCnt = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = (iNo/2); iCnt >= 1; iCnt--)
    {
        if((iNo % iCnt) == 0)
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
    
    printf("Descending order of factors is : \n");
    DisplayFactorsD(iValue);

    return 0;
}