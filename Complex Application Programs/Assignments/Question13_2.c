///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
// Problem Statement : Design application for icome tax department to calculate the tax amount. According to the income
//                     tax department there is no tax for income less than 5 lakhs.
//                     If income is between 5 to 10 lakhs then there will be 10% tax.
//                     If income is between 10 to 20 lakhs then there will be 20% tax.
//                     And for more than 20 lakhs there will be 30% tax.
//                     We have to accept gross income from user and return the tax amount.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : IncomeTax
// Input :         Integer
// Output :        Float
// Description :   Calculates the income tax depending on the income of the user.
// Author :        Dinesh Devidasrao Kadam
// Date :          23 May 2023
//
/////////////////////////////////////////////////////////////////////////////////////

float IncomeTax(int iAmount)
{
    float iTax = 0.0f;

    if((iAmount < 500000))                                           
    {
       iTax = 0;
    }
    else if((iAmount > 500000) && (iAmount <= 1000000))
    {
        iTax = 0;                                            // For first 5 lakhs
        iTax = (((float)iAmount - 500000) * 10) / 100;            // For next 5 lakhs
         
    }
    else if((iAmount > 1000000) && (iAmount <= 2000000))
    {
        iTax = 0;                      // For first 5 lakhs
        iTax = (500000 * 10)/100;                     // For next 5 lakhs   
        iTax = iTax + ((((float)iAmount - 1000000) * 20) / 100);      // For total amount

    }
    else if((iAmount > 2000000))
    {
        iTax = 0;                       // For first 5 lakhs
        iTax = (500000 * 10)/100;                       // For next 5 lakhs
        iTax = iTax + ((1000000 * 20)/100);                         // For next 10 lakhs
        iTax = iTax + (((float)iAmount - 2000000) * 30) / 100;                // For total amount
    }
    
    return iTax;

}

///////////////////////////////////////////////////////////////////////////
// Entry Point Function
//////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    float fRet = 0.0f;

    printf("Please, enter your gross income \n");
    scanf("%d", &iValue);

    fRet = IncomeTax(iValue);

    printf("You have to pay %f Rupees as an income tax \n", fRet);

    return 0;
}
