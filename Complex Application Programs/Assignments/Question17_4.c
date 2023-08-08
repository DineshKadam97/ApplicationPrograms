/////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Accept the number of rows and number of columns and 
//                     display below pattern.
// 
// Input : iRow = 5 iCol = 5
// 
// Output : 1  2  3  4  5
//         -1 -2 -3 -4 -5
//          1  2  3  4  5
//         -1 -2 -3 -4 -5
//          1  2  3  4  5
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
    char ch = '\0';

    for(i = 1; i <= iRow; i++)
    {
        for(j =1, ch = 'a'; j <= iCol; j++, ch++)
        {
           if((i % 2) != 0)
           {
             printf(" %d\t", j);
           }
           else
           {
             printf("%d\t", -j);
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