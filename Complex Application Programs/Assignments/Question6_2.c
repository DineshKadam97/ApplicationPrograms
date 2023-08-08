///////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a program which accepts number from user 
//                     and print it into word.
//
//////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////
//
// Function Name : Number
// Input :         Integer
// Output :        Returns nothing(void)
// Description :   Prints the single digit in words.
// Author :        Dinesh Devidasrao Kadam
// Date :          4 May 2023
//
//////////////////////////////////////////////////////////////////////////////

void Number(int iNo)
{
    if((iNo > 9)  || (iNo < (-9)))
    {
        printf("Error : Invalid Input\n");
        printf("Note : Please enter digit between 0 to 9\n");
    }
    else if((iNo < 0))
    {
        iNo = -iNo;
    }

    switch(iNo)
    {
        case 0 : printf("Zero \n");
        break;

        case 1 : printf("One \n");
        break;

        case 2 : printf("Two \n");
        break;

        case 3 : printf("Three \n");
        break;

        case 4 : printf("Four \n");
        break;

        case 5 : printf("Five \n");
        break;

        case 6 : printf("Six \n");
        break;

        case 7 : printf("Seven \n");
        break;

        case 8 : printf("Eight \n");
        break;

        case 9 : printf("Nine \n");
        break;
    }  
}

int main()
{
    int iValue = 0;
    
    printf("Enter single digit\n");
    scanf("%d", &iValue);

    Number(iValue);

    return 0;
}