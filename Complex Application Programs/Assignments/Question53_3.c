/////////////////////////////////////////////////////////////////////////////////////
// 
// Problem Statement : Write a recursive program which display below pattern.
// 
// Input : 5    
// Output : 5 4 3 2 1
//
////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayR(int iNo)
{
   if(iNo >= 1)
   {
     printf("%d\t", iNo);
     iNo--;
     DisplayR(iNo);       
   }
}

int main()
{
    int iValue = 0;

    printf("Please, enter the number\n");
    scanf("%d", &iValue);

    DisplayR(iValue);

    return 0;
}