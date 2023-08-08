/////////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Accept one number from user, if number is less than 10 print  
//                     "Hello" othwerwise print "Demo".
//
////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Input :         Integer
//  Output :        Returns Nothing
//  Description :   It will print "Hello" or "Demo" depending on the condition
//  Author :        Dinesh Devidasrao Kadam
//  Date :          24 April 2023
//
/////////////////////////////////////////////////////////////////////////////////

void Display(int iNo1)
{
    if(iNo1<10)
    {
        printf("Hello\n");
    }
    else
    {
        printf("Demo");
    }
}

/////////////////////////////////////////////////////////////
// Entry Point Function
////////////////////////////////////////////////////////////

int main()
{
   int iValue = 0;
   printf("Enter the number\n");
   scanf("%d", &iValue);

   Display(iValue);
   
   return 0;
}