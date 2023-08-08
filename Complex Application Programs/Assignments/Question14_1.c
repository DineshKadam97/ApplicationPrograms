/////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Accept the number from user and display below pattern. 
// 
// Input : 5
// 
// Output : A B C D E
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
    char ch = '\0';

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1, ch = 'A'; iCnt <= iNo; iCnt++, ch++)
    {
        printf("%c\t", ch);
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