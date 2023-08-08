/////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Accept the number of rows and number of columns and 
//                     display below pattern.
// 
// Input : iRow = 3 iCol = 5
// 
// Output : A A A A A
//          B B B B B 
//          C C C C C 
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
    char ch = '\0';

    for(i = 1, ch = 'A'; i <= iRow; i++, ch++)
    {
        for(j =1; j <= iCol; j++)
        {
            printf("%c\t", ch);
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