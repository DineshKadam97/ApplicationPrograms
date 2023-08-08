/////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Accept N numbers from user and accept range. Display all the 
//                     elements from that range.
//
////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Range
// Input :         Integer, Integer, Integer, Integer
// Output :        Returns Nothing(void)
// Description :   Displays the elements within the given range.
// Author :        Dinesh Devidarao Kadam
// Date :          13 May 2023
//
////////////////////////////////////////////////////////////////////////////////////////////

void Range(int Arr[], int iLength, int iNo1, int iNo2)
{
    for(int iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] > iNo1) && (Arr[iCnt] < iNo2))
        {
            printf("%d\n",Arr[iCnt]);
        }
    }
}

///////////////////////////////////////////////////////////////////////
// Entry Point Function
//////////////////////////////////////////////////////////////////////

int main()
{
    int iSize, iCnt, iStart, iEnd = 0;
    int *ptr = NULL;

    printf("Please Enter the number of elements \n");
    scanf("%d", &iSize);

    ptr = (int *) malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Sorry, Meory is not allocated \n");
    }

    printf("Enter the starting point : \n");
    scanf("%d", &iStart);

    printf("Enter the ending point \n");
    scanf("%d", &iEnd);

    printf("Enter %d numbers \n", iSize);
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }
    
    printf("Numbers between the range are : \n");
    Range(ptr, iSize, iStart, iEnd);

    free(ptr);

    return 0;
}