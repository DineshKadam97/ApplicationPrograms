///////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a program which accepts N from user 
//                     and print all odd numbers upto N.
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Input :         Integer
// Output :        Returns nothing(void)
// Description :   Prints odd numbers upto entered number.
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

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
       if((iCnt % 2) != 0)
       {
          printf("%d\n", iCnt);
       }
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter number\n");
    scanf("%d", &iValue);
     
    printf("Odd Numbers upto %d are : \n", iValue);
    Display(iValue);

    return 0;
}