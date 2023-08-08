///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
// Problem Statement : Design application for tourist company. Tourist company provides cars on rent. 
//                     If running is less than 100 Kms then they charge 25 Rupees per kilometer. And if running is more 
//                     than 100 Kms then they apply 15 Rupees per Kilometer after 100 Kilometers. 
//                     We have to accept number of kilometers from user and return the estimated rent.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Tourist Bill
// Input :         Integer
// Output :        Integer
// Description :   Calculates the bill depending on the number of kilometers.
// Author :        Dinesh Devidasrao Kadam
// Date :          23 May 2023
//
/////////////////////////////////////////////////////////////////////////////////////

int TouristBill(int iKilometer)
{
    int iBill = 0;

    if(iKilometer < 100)
    {
        iBill = 25 * iKilometer;
    }
    else 
    {
        iBill = 2500 + (15 * (iKilometer - 100));              // 25 * 100 = 2500
    }

    return iBill;
}

///////////////////////////////////////////////////////////////////////////
// Entry Point Function
//////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Please, enter for how many kilometers you drove the car \n");
    scanf("%d", &iValue);

    iRet = TouristBill(iValue);
    
    printf("Your Bill is : %d \n", iRet);

    return 0;
}
