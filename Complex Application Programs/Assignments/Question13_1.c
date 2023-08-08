///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
// Problem Statement : Design application for hotel. According to the management team of hotel they are giving 
//                     dicount on total bill amount of customer.
//                     If bill is less than 500 there is no discount, if bill is less than 1500 and more than
//                     500 then they give 10% discount
//                     And if the bill is more than 1500 then they will give 15% discount.
//                     Our application should accept the bill amount and depends on the discount policy we have
//                     to return the amount after applying discount.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CalculateBill
// Input :         Integer
// Output :        Float
// Description :   Calculates the amount after discount depending on the condition.
// Author :        Dinesh Devidasrao Kadam
// Date :          23 May 2023
//
/////////////////////////////////////////////////////////////////////////////////////

float CalculateBill(int iAmount)
{
    if((iAmount > 500) && (iAmount <= 1500))
    {
        iAmount =  iAmount -(((float)iAmount * 10) / 100);
    }
    else if((iAmount > 1500))
    {
        iAmount =  iAmount - (((float)iAmount * 15) / 100);
    }

    return iAmount;

}

///////////////////////////////////////////////////////////////////////////
// Entry Point Function
//////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    float fRet = 0.0f;

    printf("Please, enter the bill amount \n");
    scanf("%d", &iValue);

    fRet = CalculateBill(iValue);

    printf("Bill after discount is : %f", fRet);

    return 0;
}
