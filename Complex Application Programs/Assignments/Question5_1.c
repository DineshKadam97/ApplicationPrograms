///////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a program which accepts number from user 
//                     and print that number of $ and * on screen.
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : pattern
// Input :         Integer
// Output :        Returns Nothing(Void)
// Description :   prints $ and *  N number of times using for loop
// Author :        Dinesh Devidasrao Kadam
// Date :          4 May 2023
//
/////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("$\t*\t");
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter number\n");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}