/////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Accept the number from user and display below pattern. 
// 
// Input : 5
// 
// Output : 5 # 4 # 3 # 2 # 1 # 
//                     
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Input :         Integer
// Output :        Returns Nothing(void)
// Description :   Displays the pattern according to input
// Author :        Dinesh Devidasrao Kadam
// Date :          19 May 2023
//
///////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d\t#\t", iCnt);
    }

    printf("\n");
}

///////////////////////////////////////////////////////////////////////////
// Entry Point Function
//////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Please, enter the number \n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}