/////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Accept N numbers from user and accept another number as NO and
//                     return frequency of NO from it.
//
////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Frequency
// Input :         Integer, Integer, Integer
// Output :        Integer.
// Description :   Finds the frequency of NO from entered numbers.
// Author :        Dinesh Devidarao Kadam
// Date :          13 May 2023
//
////////////////////////////////////////////////////////////////////////////////////////////

int Frequency(int Arr[], int iLength, int iValue)
{
    int iCount = 0;
    for(int iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iValue)
        {
            iCount++;
        }
    }

    return iCount;
}

//////////////////////////////////////////////////////////////
// Entry Point Function
//////////////////////////////////////////////////////////////

int main()
{
    int iSize, iRet, iCnt, NO = 0;
    int *ptr = NULL;
    
    printf("Enter the number of elements \n");
    scanf("%d", &iSize);

    ptr = (int *) malloc(iSize * sizeof(int));
    
    if(ptr == NULL)
    {
        printf("Sorry, Memory is not allocated");
        return -1;
    }

    printf("Enter the %d elements : \n", iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }
    
    printf("Enter the number \n");
    scanf("%d", &NO);

    iRet =  Frequency(ptr, iSize, NO);

    printf("Frequency of %d is : %d \n", NO, iRet);

    free(ptr);
    
    return 0;
}