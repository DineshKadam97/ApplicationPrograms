/////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Accept the number of rows and number of columns and 
//                     display below pattern.
// 
// Input : iRow = 4 iCol = 4
// 
// Output : A B C D
//          A B C D 
//          A B C D
//          A B C D
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
    char ch1, ch2 = '\0';

    for(i =1; i <= iRow; i++)
    {
        for(j = 1, ch1 = 'A', ch2 = 'a'; j <= iCol; j++, ch1++, ch2++)
        {
            if((i % 2) == 0)
            {
                printf("%c\t", ch2); 
            }
            else
            {
                printf("%c\t", ch1);
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
    int iValue1 = 0, iValue2 = 0;

    printf("Please, enter the number of rows \n");
    scanf("%d", &iValue1);

    printf("Please, enter the number of columns \n");
    scanf("%d", &iValue2);

    Display(iValue1, iValue2);

    return 0;
}