/////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Accept N numbers from user and return the smallest number.
//
////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Smallest
// Input :         Integer, Integer
// Output :        Integer
// Description :   Finds the smallest number from N numbers.
// Author :        Dinesh Devidarao Kadam
// Date :          13 May 2023
//
////////////////////////////////////////////////////////////////////////////////////////////


int Smallest(int Arr[], int iLength)
{
    int iCnt = 0;
    int iMin = Arr[0];

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
       if(Arr[iCnt] < iMin)
       {
         iMin = Arr[iCnt];
       }
    }

    return iMin;
}

//////////////////////////////////////////////////////////////
// Entry Point Function
//////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iRet = 0;

    printf("Enter number of elements \n");
    scanf("%d", &iSize);

    ptr = (int*) malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Sorry, Memory is not allocated \n");
        return -1;
    }

    printf("Enter the %d elements \n", iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }
    
    iRet = Smallest(ptr, iSize);
    printf("Smallest number is : %d \n", iRet);

    free(ptr);
    
    return 0;
}