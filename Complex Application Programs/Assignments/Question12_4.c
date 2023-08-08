/////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Accept N numbers from user and display all such numbers which  
//                     contains 3 digits in it.
//
////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Input :         Integer, Integer
// Output :        Returns Nothing(void)
// Description :   Displays the 3 digit numbers from N numbers.
// Author :        Dinesh Devidarao Kadam
// Date :          13 May 2023
//
//////////////////////////////////////////////////////////////////////////////////////////

void Display(int Arr[], int iLength)
{
    for(int iCnt = 0; iCnt < iLength; iCnt++)
    {
        int iCount = 0;
        int iTemp = Arr[iCnt];
         
        while(Arr[iCnt] != 0)
        {
            Arr[iCnt] = Arr[iCnt] / 10; 
            iCount++;
        }

        if(iCount == 3)
        {
           printf("%d\n", iTemp);
        }
    }
}

//////////////////////////////////////////////////////////////
// Entry Point Function
//////////////////////////////////////////////////////////////

int main()
{
    int iSize, iCnt = 0;
    int *ptr = NULL;

    printf("Please enter the number of elements \n");
    scanf("%d", &iSize);

    ptr = (int *) malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Sorry, Memory is not allocated \n");
        return -1;
    }

    printf("Enter the %d numbers \n", iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }
    
    printf("Three Digits Numbers are : \n");
    Display(ptr, iSize);

    free(ptr);

    return 0;
}