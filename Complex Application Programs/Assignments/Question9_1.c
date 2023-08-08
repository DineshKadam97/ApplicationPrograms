/////////////////////////////////////////////////////////////////////////////////////
// 
// Problem Statement : Accept N numbers from user and return difference between 
//                     summation of even elements and summation of odd elements.
//
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Difference
// Input :         Integer, Integer
// Output :        Integer
// Description :   Finds the difference between sum of even and sum of odd numbers.
// Author :        Dinesh Devidasrao Kadam
// Date :          12 May 2013
//
////////////////////////////////////////////////////////////////////////////////////

int Difference(int Arr[], int iLength)
{
    int iSumEven = 0;
    int iSumOdd = 0;

    for(int iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iSumEven = iSumEven + Arr[iCnt];
        }
        else
        {
            iSumOdd = iSumOdd + Arr[iCnt];
        }
    }

    return(iSumEven - iSumOdd);
}

///////////////////////////////////////////////////////////////////////
// Entry Point Function
//////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iRet = 0;

    printf("Please enter the number of elements \n");
    scanf("%d", &iSize);

    ptr = (int *) malloc(iSize * sizeof(int));

    printf("Enter the numbers : \n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }
    
    iRet = Difference(ptr, iSize);
    
    printf("Difference between sum of even and odd is : %d \n", iRet);

    free(ptr);
    
    return 0;
}