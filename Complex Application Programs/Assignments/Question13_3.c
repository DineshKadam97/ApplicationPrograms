///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
// Problem Statement : Design application for school management system. As school is primary there are 4 standards. 
//                     School fees for each standard is different.
//                     For first standard  fees is 8900, for second standard 12790, for third standard 21000
//                     for fourth standard fees is 23450.
//                     We have to accept standard from user and display the fees.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#define ERR_NOTFOUND -1

///////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : SchoolFees
// Input :         Integer
// Output :        Integer
// Description :   Display the fees of the student depending on the standard.
// Author :        Dinesh Devidasrao Kadam
// Date :          23 May 2023
//
/////////////////////////////////////////////////////////////////////////////////////

int SchoolFees(int iStandard)
{
    int iFees = ERR_NOTFOUND;

    if(iStandard == 1)
    {
        iFees = 8900;
    }
    else if(iStandard == 2)
    {
        iFees = 12790;
    }
    else if(iStandard == 3)
    {
        iFees = 21000;
    }
    else if(iStandard == 4)
    {
        iFees = 23450;
    }

    return iFees;

}

///////////////////////////////////////////////////////////////////////////
// Entry Point Function
//////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Please, enter your standard \n");
    scanf("%d", &iValue);

    iRet = SchoolFees(iValue);
    
    if(iRet == ERR_NOTFOUND)
    {
        printf("Error : Invalid Input \n");
        printf("Note : Please, enter standard from 1 to 4 \n");
    }
    else
    {
        printf("Your fees is : %d only \n", iRet);
    }

    return 0;
}
