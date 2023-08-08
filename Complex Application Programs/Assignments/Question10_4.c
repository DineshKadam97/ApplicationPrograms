/////////////////////////////////////////////////////////////////////////////////////
// 
// Problem Statement : Accept N numbers from user and return frequency of eleven 
//                     from it.
//
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CountEleven
// Input :         Integer, Integer
// Output :        Integer.
// Description :   Finds the frequency of 11 in entered numbers.
// Author :        Dinesh Devidarao Kadam
// Date :          13 May 2023
//
////////////////////////////////////////////////////////////////////////////////////////////

int CountEleven(int Arr[], int iLength)
{
    int iCount = 0;
    for(int iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
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
    int iSize, iRet, iCnt = 0;
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

    iRet =  CountEleven(ptr, iSize);

    printf("Frequency of 11 is : %d \n", iRet);

    free(ptr);
    
    return 0;
}