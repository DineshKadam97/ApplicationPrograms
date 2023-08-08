/////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Accept N numbers from user and return the difference between
//                     largest and smallest number.
//
////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Difference
// Input :         Integer, Integer
// Output :        Integer
// Description :   Finds the difference between largest and smallest number from N numbers.
// Author :        Dinesh Devidarao Kadam
// Date :          13 May 2023
//
////////////////////////////////////////////////////////////////////////////////////////////

int Difference(int Arr[], int iLength)
{
    int iCnt = 0;
    int iMax = Arr[0];
    int iMin = Arr[0];

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
       if(Arr[iCnt] > iMax)
       {
         iMax = Arr[iCnt];
       }

       if(Arr[iCnt] < iMin)
       {
         iMin = Arr[iCnt];
       }
    }

    return (iMax - iMin);
}

//////////////////////////////////////////////////////////////
// Entry Point Function
//////////////////////////////////////////////////////////////

int main()
{
    int iSize, iCnt, iRet = 0;
    int *ptr = NULL;

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
    
    iRet = Difference(ptr, iSize);
    printf("Difference between largest and smallest is : %d \n", iRet);

    free(ptr);
    
    return 0;
}