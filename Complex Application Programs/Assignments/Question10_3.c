/////////////////////////////////////////////////////////////////////////////////////
// 
// Problem Statement : Accept N numbers from user and check whether that number
//                     contains 11 in it or not.
//
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

/////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CheckEleven
// Input :         Integer, Integer
// Output :        Boolean(TRUE or FALSE)
// Description :   Checks whether 11 is present in N numbers or not.
// Author :        Dinesh Devidarao Kadam
// Date :          13 May 2023
//
////////////////////////////////////////////////////////////////////////////////////////////

BOOL CheckEleven(int Arr[], int iLength)
{
    int iCnt = 0;
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            break;
        }
    }

    if(Arr[iCnt] == 11)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

//////////////////////////////////////////////////////////////
// Entry Point Function
//////////////////////////////////////////////////////////////

int main()
{
    int iSize, iCnt = 0;
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

    bRet = CheckEleven(ptr, iSize);

    if(bRet == TRUE)
    {
        printf("11 is present \n");
    }
    else
    {
        printf("11 is not present \n");
    }

    free(ptr);

    return 0;
}