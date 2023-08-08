/////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Accept the number of rows and number of columns and 
//                     display below pattern.
// 
// Input : iRow = 5   iCol = 5
// 
// Output :  1 2 3 4 5
//           1 2     5 
//           1   3   5 
//           1     4 5
//           1 2 3 4 5
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Input :         Integer, Integer
// Output :        Returns Nothing(void)
// Description :   Displays the pattern according to input
// Author :        Dinesh Devidasrao Kadam
// Date :          24 May 2023
//
///////////////////////////////////////////////////////////////////////////

void Display(int iRow, int iCol)
{
    int i = 0 , j = 0;

    if(iRow != iCol)
    {
        printf("Error : Invalid Input \n");
        printf("Note : Number of rows and number of columns should be same \n");
        return;
    }

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if((i == 1) || (i == iRow) || (j == 1) || (j == iCol) || (i == j))
            {
                printf("%d\t", j);
            }
            else
            {
                printf(" \t");
            }
        }

        printf("\n \n");
    }
}

///////////////////////////////////////////////////////////////////////////
// Entry Point Function
//////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Please, enter the number of rows \n");
    scanf("%d", &iValue1);

    printf("Please, enter the number of columns \n");
    scanf("%d", &iValue2);

    Display(iValue1, iValue2);

    return 0;
}