//////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
// Problem Statement : Accept division from the user and depends on the division diplay the exam timing.
//                     There are 4 divisions in school such as A, B, C, D. Exam of division A is at 7 AM,
//                     B at 8:30 AM, C at 9:20 AM and D at 10:30 AM.
//                     (Application should be case insensitive) 
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : DisplaySchedule
// Input :         Character
// Output :        Returns Nothing(void)
// Description :   Displays exam timings of different divisions.
// Author :        Dinesh Devidasrao Kadam
// Date :          22 May 2023
//
///////////////////////////////////////////////////////////////////////////////////////////

void DisplaySchedule(char Div)
{
    if((Div == 'A') || (Div == 'a'))
    {
        printf("Your exam is at 7 AM \n");
    }
    else if((Div == 'B') || (Div == 'b'))
    {
        printf("Your exam is at 8:30 AM \n");
    }
    else if((Div == 'C') || (Div == 'c'))
    {
        printf("Your exam is at 9:20 AM \n");    
    }
    else if((Div == 'D') || (Div == 'd'))
    {
        printf("Your exam is at 10:30 AM \n");     
    }
    else
    {
        printf("Error : Invalid Input \n");
        printf("Note : Please, enter the division from A to D");
    }  
}

///////////////////////////////////////////////////////////////////////////
// Entry Point Function
//////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';

    printf("Please, enter the Division from A to D \n");
    scanf("%c", &cValue);

    DisplaySchedule(cValue);
        
    return 0;
}