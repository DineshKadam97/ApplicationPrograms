/////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Accept N numbers from user and return product of all odd elements. 
//
////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

typedef unsigned long int ULONG;

/////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Multiply
// Input :         Integer, Integer
// Output :        Unsigned Long Integer
// Description :   Performs the multiplication of odd elements from N numbers.
// Author :        Dinesh Devidarao Kadam
// Date :          13 May 2023
//
////////////////////////////////////////////////////////////////////////////////////////////

ULONG Multiply(int Arr[], int iLength)
{
    int iCnt = 0;
    ULONG iMult = 1;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
       if((Arr[iCnt] % 2) != 0)
       {
          iMult = iMult * Arr[iCnt];
       }
    }

    return iMult;
}

///////////////////////////////////////////////////////////////////////
// Entry Point Function
//////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    ULONG iRet = 0;

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
    
    iRet = Multiply(ptr, iSize);
    printf("Multiplication of odd numbers is : %d \n", iRet);

    free(ptr);
    
    return 0;
}