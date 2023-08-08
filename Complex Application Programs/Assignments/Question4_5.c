///////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a program which accepts total marks and obtained 
//                     marks  from user and calculate percentage.
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Percentage
// Input :         Float, Float
// Output :        Float
// Description :   Finds the percentage
// Author :        Dinesh Devidasrao Kadam
// Date :          4 May 2023
//
/////////////////////////////////////////////////////////////////////////////////////

float Percentage(int iNo1, int iNo2)
{
    float fPercent = 0.0f;
    if(iNo1 == 0)
    {
        printf("Error : Total marks should not be zero\n");
        return -1;
    }

    fPercent = (iNo2/iNo1) * 100;

    return fPercent;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0f;

    printf("Enter the total marks\n");
    scanf("%d", &iValue1);

    printf("Enter the marks obtained\n");
    scanf("%d", &iValue2);

    fRet = Percentage(iValue1, iValue2);
    
    if(fRet == -1)
    {
      printf("Note : Please enter non zero marks\n");
    }
    else
    {
        printf("You got %f percent", fRet);
    }
    
    return 0;
}