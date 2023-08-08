/////////////////////////////////////////////////////////////////////////////////////
// 
// Problem Statement : Accept N numbers from user and display all such elements 
//                     which are multiples of 11.
//
/////////////////////////////////////////////////////////////////////////////////////v

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Input :         Integer, Integer, Integer
// Output :        Returns Nothing(void)
// Description :   Displays the numbers divisible by 11 from N numbers.
// Author :        Dinesh Devidarao Kadam
// Date :          13 May 2023
//
////////////////////////////////////////////////////////////////////////////////////////////

void Display(int Arr[], int iLength)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 11) == 0 )
        {
            printf("%d\n", Arr[iCnt]);
        }
    }
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
    
    printf("Elements which are multiples of 11 are : \n");
    Display(ptr, iSize);

    free(ptr);
    
    return 0;
}