////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a program which accept number from user and  
//                     display its digits in reverse order
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////
//
// Function name : DisplayReverseDigits
// Input :         Integer
// Output :        Returns Nothing(void)
// Description :   Displays digits in reverse order using while loop
// Author :        Dinesh Devidasrao Kadam
// Date :          11 May 2023
//
///////////////////////////////////////////////////////////////////////////

void DisplayReverseDigits(int iNo)
{
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n", iDigit);
        iNo = iNo / 10;
    }
}

///////////////////////////////////////////////////////////
// Entry Point Function
///////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number\n");
    scanf("%d", &iValue);
    
    printf("Digits in the number are : \n");
    DisplayReverseDigits(iValue);

    return 0;
}