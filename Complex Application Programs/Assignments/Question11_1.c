/////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Accept N numbers from user and accept another number as NO and
//                     check whether NO is present or not.
//
////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

/////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CheckNO
// Input :         Integer, Integer, Integer
// Output :        Boolean(TRUE or FALSE)
// Description :   Check whether NO is present in entered numbers.
// Author :        Dinesh Devidarao Kadam
// Date :          13 May 2023
//
////////////////////////////////////////////////////////////////////////////////////////////

BOOL CheckNO(int Arr[], int iLength, int iValue)
{
    int iCnt = 0;
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iValue)
        {
            break;
        }
    }

    if(Arr[iCnt] == iValue)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

///////////////////////////////////////////////////////////////////////
// Entry Point Function
//////////////////////////////////////////////////////////////////////

int main()
{
    int iSize, iCnt, NO = 0;
    BOOL bRet = FALSE;
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

    bRet = CheckNO(ptr, iSize, NO);

    if(bRet == TRUE)
    {
        printf("%d is present \n", NO);
    }
    else
    {
        printf("%d is not present \n", NO);
    }

    free(ptr);

    return 0;
}