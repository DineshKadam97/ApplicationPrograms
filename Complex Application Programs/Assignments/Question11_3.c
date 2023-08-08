/////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Accept N numbers from user and accept another number as NO and
//                     return index of last occurence of NO.
//
////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : LastOcc
// Input :         Integer, Integer, Integer
// Output :        Integer
// Description :   Finds the index of last occurence of NO.
// Author :        Dinesh Devidarao Kadam
// Date :          13 May 2023
//
////////////////////////////////////////////////////////////////////////////////////////////

int LastOcc(int Arr[], int iLength, int iValue)
{
    int iCnt = 0; 
    
    for(iCnt = iLength; iCnt >= 0; iCnt--)
    {
        if(Arr[iCnt] == iValue)
        {
           break;
        }
    }

    return iCnt;
}

///////////////////////////////////////////////////////////////////////
// Entry Point Function
//////////////////////////////////////////////////////////////////////

int main()
{
    int iSize, iCnt, NO, iRet = 0;
    int *ptr = NULL;

    printf("Enter the number of elements \n");
    scanf("%d", &iSize);

    ptr = (int *) malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Sorry, memory is not allocated \n");
        return -1;
    }

    printf("Enter the %d elements \n", iSize);
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    printf("Enter number\n");
    scanf("%d", &NO);

    iRet = LastOcc(ptr, iSize, NO);

    if(iRet == -1)
    {
        printf("There is no such element \n");
    }
    else
    {
        printf("Index of last occurence of %d is : %d \n", NO, iRet);
    }

    

    free(ptr);

    return 0;
}