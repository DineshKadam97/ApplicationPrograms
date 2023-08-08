///////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a program which accepts 3 numbers from user 
//                     and print their multiplication.
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Multiplication
// Input :         Integer, Integer, Integer
// Output :        Integer
// Description :   Performs multiplication of 3 numbers
// Author :        Dinesh Devidasrao Kadam
// Date :          4 May 2023
//
/////////////////////////////////////////////////////////////////////////////////////

int Multiplication(int iNo1, int iNo2, int iNo3)
{
    int iMult = 0;

    if((iNo1 == 0) || (iNo2 == 0) || (iNo3 == 0))
    {
        printf("Error : Invalid Input\n");
        printf("Note : Please enter non zero values, otherwise multiplication will be zero\n");
        return 0;
    }

    iMult = iNo1 * iNo2 * iNo3;

    return iMult;
}

//////////////////////////////////////////////////////////////////////
// Entry Point Function
//////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
    int iRet = 0;

    printf("Please enter theree numbers\n");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    iRet = Multiplication(iValue1,iValue2, iValue3);
    
    printf("Multiplication is : %d", iRet);

    return 0;
}