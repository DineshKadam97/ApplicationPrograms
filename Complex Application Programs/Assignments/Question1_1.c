///////////////////////////////////////////////////////////////
//
// Problem Statement : Program to divide 2 numbers
//
//////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////
//
//  Function Name : Divide
//  Input :         integer,  integer
//  Output :        integer
//  Description :   Performs division of 2 numbers
//  Author :        Dinesh Devidasrao Kadam
//  Date :          24 April 2023
//
////////////////////////////////////////////////////////////////

int Divide(int iNo1, int iNo2)
{
    int iAns = 0;
    if(iNo2 == 0)
    {
        return -1;
    }

    iAns = iNo1/iNo2;

    return iAns;
}

/////////////////////////////////////////////////////////////
// Entry Point Function
////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 15, iValue2 = 5;
    int iRet = 0;

    iRet = Divide(iValue1, iValue2);
    printf("Division is %d", iRet);

    return 0;
}
