/////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Accept the number from user and display below pattern. 
// 
// Input : 4
// 
// Output : # 1 * # 2 * # 3 * # 4 *  
//                     
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Input :         Integer
// Output :        Returns Nothing(void)
// Description :   Displays the pattern according to input
// Author :        Dinesh Devidasrao Kadam
// Date :          19 May 2023
//
/////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("#\t%d\t*\t", iCnt);
    }

    printf("\n");
}

///////////////////////////////////////////////////////////////////////////
// Entry Point Function
//////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Please, enter number \n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}