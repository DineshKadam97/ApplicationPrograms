/////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Accept the number of rows and number of columns and 
//                     display below pattern.
// 
// Input : iRow = 4 iCol = 5
// 
// Output : 2 4 6 8 10
//          1 3 5 7 9
//          2 4 6 8 10
//          1 3 5 7 9
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
// Date :          19 May 2023
//
///////////////////////////////////////////////////////////////////////////

void Display(int iRow, int iCol)
{
    int i, j = 0;
    int iCnt = 1;

    for(i = 1; i <= iRow; i++)
    {
        for(j =1; j <= iCol; j++)
        {
           if((i % 2) != 0)
           {
             printf("%d\t", 2*j);
           }
           else
           {
             printf("%d\t", (2*j) -1);
           } 
        }

        printf("\n");
    }    
}

///////////////////////////////////////////////////////////////////////////
// Entry Point Function
//////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1, iValue2 = 0;

    printf("Please, enter the number of rows \n");
    scanf("%d", &iValue1);

    printf("Please, enter number of columns \n");
    scanf("%d", &iValue2);

    Display(iValue1, iValue2);

    return 0;
}