/////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Accept N numbers from user and display summation of digits of 
//                     each number.
//
////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : DisplaySum
// Input :         Integer, Integer
// Output :        Returns Nothing(void)
// Description :   Performs addition of digits of each number.
// Author :        Dinesh Devidarao Kadam
// Date :          13 May 2023
//
//////////////////////////////////////////////////////////////////////////////////////////

void DisplaySum(int Arr[], int iLength)
{
    for(int iCnt = 0; iCnt < iLength; iCnt++)
    {
        int iDigit = 0;
        int iSum = 0;
        int iTemp = Arr[iCnt];

        while(Arr[iCnt] != 0)
        {
            iDigit = Arr[iCnt] % 10;
            iSum = iSum + iDigit;
            Arr[iCnt] = Arr[iCnt] / 10;
        }

        printf("Sum of digits in %d is %d \n", iTemp, iSum);
    }
}

//////////////////////////////////////////////////////////////
// Entry Point Function
//////////////////////////////////////////////////////////////

int main()
{
    int iSize, iCnt = 0;

    int *ptr = NULL;

    printf("Please, Enter the number of elements \n");
    scanf("%d", &iSize);

    ptr = (int *) malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Sorry, Memory is not allocated \n");
        return -1;
    }

    printf("Enter the elements \n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    DisplaySum(ptr, iSize);

    free(ptr);

    return 0;
}