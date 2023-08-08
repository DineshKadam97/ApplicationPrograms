//////////////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a program which accept number from user and return 
//                     difference between summation of even and odd digits.
//
////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////
//
// Function name : Difference
// Input :         Integer
// Output :        Integer
// Description :   Finds difference between sum of even and sum of odd digits.
// Author :        Dinesh Devidasrao Kadam
// Date :          11 May 2023
//
//////////////////////////////////////////////////////////////////////////////////

int Difference(int iNo)
{
    int iDigit = 0;
    int iSumEven = 0;
    int iSumOdd = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if((iDigit % 2) == 0)
        {
            iSumEven = iSumEven + iDigit;
        }
        else 
        {
            iSumOdd = iSumOdd + iDigit;
        }

        iNo = iNo / 10;
    }

    return (iSumEven - iSumOdd);
}

///////////////////////////////////////////////////////////
// Entry Point Function
///////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Please enter the number \n");
    scanf("%d", &iValue);

    iRet = Difference(iValue);

    printf("Difference is : %d", iRet);

    return 0;
}