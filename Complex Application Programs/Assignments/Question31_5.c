////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a program which display addition of digits of element from singly linear linked list.                    
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node* next;
}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, int No)
{
    PNODE newn = NULL;
    newn = (PNODE) malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        // Sequene is important
        newn->next = *Head;
        *Head = newn;
    }
}

void InsertLast(PPNODE Head, int No)
{
    PNODE newn = NULL;
    newn = (PNODE) malloc (sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    PNODE temp = *Head;                                    // as we are in C we have to define temp here

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        // Sequene is important
        while(temp->next != NULL)
        {
           temp = temp->next;
        }
        temp->next = newn;
    }
}

int Count(PNODE Head)
{   
   int iCount = 0;
   while(Head != NULL)
   {
      iCount++;
      Head = Head->next;
   }

   return iCount;
}

void InsertAtPos(PPNODE Head, int NO, int iPos)
{
    PNODE newn = NULL;
    newn = (PNODE) malloc(sizeof(NODE));

    newn->data = NO;
    newn->next = NULL;

    int iLength = 0;
    iLength = Count(*Head);

    if((iPos < 1) || (iPos > iLength + 1))
    {
       printf("Error : Invalid Position \n");
       return;
    }

    int iCnt = 0;
    PNODE temp = *Head;

    if(iPos == 1)
    {
        InsertFirst(Head, NO);
    }
    else if(iPos == iLength + 1)
    {
        InsertLast(Head, NO);
    }
    else
    {
        for(iCnt = 1; iCnt < iPos - 1; iCnt++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;
    }
}

void DeleteFirst(PPNODE Head)
{
    PNODE temp = *Head;

    if(*Head == NULL)          //LL is empty
    {
        return;
    }
    else if((*Head)->next == NULL)    // LL contains one node
    {
       free(*Head);
       Head = NULL;
    } 
    else                              // LL contains more than one one node
    {
        *Head = (*Head)->next;
        free(temp);
    }
}

void DeleteLast(PPNODE Head)
{
    PNODE temp = *Head;

    if(*Head == NULL)          //LL is empty
    {
        return;
    }
    else if((*Head)->next == NULL)    // LL contains one node
    {
       free(*Head);
       Head = NULL;
    } 
    else                              // LL contains more than one one node
    {
        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;

    }
}

void DeleteAtPos(PPNODE Head, int iPos)
{
    int iLength = 0;
    iLength = Count(*Head);
    int iCnt = 0;
    PNODE temp = *Head;
    PNODE tempX = NULL;

    if((iPos < 1) || (iPos > iLength))
    {
        printf("Error : Invalid Position \n");
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst(Head);
    }
    else if(iPos == iLength)
    {
        DeleteLast(Head);
    }
    else
    {
        for(iCnt = 1; iCnt < iPos - 1; iCnt++)
        {
            temp = temp->next;
        }

        tempX = temp->next;
        temp->next = temp->next->next;
        free(tempX);
    }
}

void Display(PNODE Head)
{
   printf("Elements in the LinkedList are : \n");

   while(Head != NULL)
   {
      printf("|%d|->", Head->data);
      Head = Head->next;
   }

   printf("NULL \n");
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
// Function Name :      AddDigits
// Input :              Structure Pointer   
// Output :             Integer
// Description :        Adds digits of each element from singly linear linked list.
// Author Name :        Dinesh Devidasrao Kadam
// Date :               15 June 2023
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

int AddDigits(PNODE Head)
{
    int iDigit = 0;
    int iSum = 0;
    int iNo = 0;

    while(Head != NULL)
    {
        iSum = 0;
        iNo = Head->data;
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
        }
        
        printf("Addition of digits in %d is : %d \n \n", Head->data, iSum);

        Head = Head->next;
    }
}

////////////////////////////////////////////////////////////////////////
// Entry point function
///////////////////////////////////////////////////////////////////////

int main()
{
    PNODE First = NULL;

    int iRet = 0;
    int iSize = 0;
    int *ptr = NULL;
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;

    printf("Please, enter the number of elements you want in Linked List\n");
    scanf("%d", &iSize);

    ptr = (int*) malloc (sizeof(int) * iSize);

    printf("Please, enter the elements \n");
    
    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        InsertFirst(&First, ptr[iCnt]);
    }

    free(ptr);

    Display(First);

    iRet = Count(First);
    printf("Number of nodes are : %d \n \n", iRet);
     
    AddDigits(First);                           //Addition of digits of each element

    printf("Please, enter the element you want to add at last position \n");
    scanf("%d", &iValue1);

    InsertLast(&First, iValue1);
    Display(First);

    iRet = Count(First);
    printf("Number of nodes are : %d \n \n", iRet);
    
    printf("Please, enter the element you want to add in the Linked List\n");
    scanf("%d", &iValue1);

    printf("Please, enter the position at which you want to add the element\n");
    scanf("%d", &iValue2);

    InsertAtPos(&First, iValue1, iValue2);
    Display(First);

    iRet = Count(First);
    printf("Number of nodes are : %d \n \n", iRet);

    DeleteFirst(&First);
    Display(First);

    iRet = Count(First);
    printf("Number of nodes after deleteing first node are : %d \n \n", iRet);

    DeleteLast(&First);
    Display(First);

    iRet = Count(First);
    printf("Number of nodes after deleteing last node are : %d \n \n", iRet);

    printf("Please, enter the position of node which you want to delete \n");
    scanf("%d", &iValue2);

    DeleteAtPos(&First, iValue2);
    Display(First);

    iRet = Count(First);
    printf("Number of nodes are : %d \n \n", iRet);

    return 0;
}