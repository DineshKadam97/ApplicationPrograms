//////////////////////////////////////////////////////////////////////////////
// 
// Problem Statement : Write a program which displays ASCII table. Table 
//                     contains symbol, Decimal, Hexa Decimal and Octal 
//                     representation of every member from 0 to 255.
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////
//
// Function name : DisplayASCII
// Input :         Accepts Nothing
// Output :        Returns Nothing(void)
// Description :   Displays ASCII table.
// Author :        Dinesh Devidasrao Kadam
// Date :          22 May 2023
//
///////////////////////////////////////////////////////////////////////////

void DisplayASCII()
{
    int iCnt = 0;

    for(iCnt = 0; iCnt <= 127; iCnt++)
    {
        printf("%c\t%d\n", iCnt, iCnt);
    }
}

///////////////////////////////////////////////////////////////////////////
// Entry Point Function
//////////////////////////////////////////////////////////////////////////

int main()
{
    printf("ASCII table is : \n");

    DisplayASCII();

    return 0;
}