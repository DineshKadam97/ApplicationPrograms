//////////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a program which accept number from user and if number 
//                     is less than 50 then print small, if greater than 50 and
//                     less than 100 print medium, if its is greater 100 then 
//                     print large.
//
////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////
//
// Function Name : Number
// Input :         Integer
// Output :        Returns nothing(void)
// Description :   Compares number with 50 and 100.
// Author :        Dinesh Devidasrao Kadam
// Date :          4 May 2023
//
//////////////////////////////////////////////////////////////////////////////

void Number(int iNo)
{
    if(iNo <= 50)
    {
        printf("Small \n");
    }
    else if((iNo > 50) && (iNo <= 100))
    {
        printf("Medium \n");
    }
    else if(iNo > 100)
    {
        printf("Large \n");
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter number\n");
    scanf("%d", &iValue);

    Number(iValue);

    return 0;
}