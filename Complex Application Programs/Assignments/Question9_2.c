/////////////////////////////////////////////////////////////////////////////////////
// 
// Problem Statement : Accept N numbers from user and display all such elements 
//                     which are divisible by 5.
//
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Input :         Integer, Integer
// Output :        Returns Nothing(void)
// Description :   Displays the numbers which are divisible by 5.
// Author :        Dinesh Devidasrao Kadam
// Date :          13 May 2013
//
/////////////////////////////////////////////////////////////////////////////////

void Display(int Arr[], int iLength)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 5) == 0)
        {
            printf("%d\n", Arr[iCnt]);
        }
    }
}

//////////////////////////////////////////////////////////////
// Entry Point Function
//////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;

    printf("Please enter the number of elements in Array \n");
    scanf("%d", &iSize);

    ptr = (int *) malloc(iSize * sizeof(int));

    printf("Enter %d elements \n", iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }
    
    printf("Elements Divisible by 5 are : \n");
    Display(ptr, iSize);

    free(ptr);

    return 0;
}