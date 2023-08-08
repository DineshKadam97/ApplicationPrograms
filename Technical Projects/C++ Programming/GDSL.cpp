#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////
//
// Structure for singly linear and singly circular linked lists
//
///////////////////////////////////////////////////////////////////////////////////////////

template <class T>
struct NodeS
{
    T data;
    struct NodeS *next;
};

///////////////////////////////////////////////////////////////////////////////////////////
//
// Structure for doubly linear and doubly circular linked lists
//
///////////////////////////////////////////////////////////////////////////////////////////

template <class T>
struct NodeD
{
    T data;
    struct NodeD *next;
    struct NodeD *prev;
};

///////////////////////////////////////////////////////////////////////////////////////////
//
// Class of singly linear Linked list
//
///////////////////////////////////////////////////////////////////////////////////////////

template <class T>
class SinglyLL
{
    public:
        struct NodeS<T> * First;
        int iCount;

    SinglyLL();
    ~SinglyLL();

    void Display();
    int Count();
    
    void InsertFirst(T);
    void InsertLast(T);
    void InsertAtPos(T, int);
    
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int);

    int SearchFirstOcc(T);
    int SearchLastOcc(T);
    int Frequency(T);
    T SumElements();
    T Maximum();
    T Minimum();
};

template <class T>
SinglyLL <T>::SinglyLL()
{
    First = NULL;
    iCount = 0;
}

template<class T>
SinglyLL<T> :: ~SinglyLL()
{
    NodeS<T> *temp = First;

    for(int iCnt = 1; iCnt <= iCount; iCnt++)
    {
        temp = First;
        First = First->next;
        delete temp;
    }
}

template <class T>
void SinglyLL<T>::Display()
{
    struct NodeS<T> *temp = First;

    while(temp != NULL)
    {
        cout<<"|"<<temp->data<<"|->";
        temp = temp->next;
    }
    cout<<"NULL"<<"\n";
}

template <class T>
int SinglyLL<T>::Count()
{
    return iCount;
}

template <class T>
void SinglyLL<T>::InsertFirst(T No)
{
    NodeS<T> *newn = new NodeS<T>;

    newn->data = No;
    newn->next = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        newn->next = First;
        First = newn;
    }
    iCount++;
}

template <class T>
void SinglyLL<T>::InsertLast(T No)
{
    NodeS<T> *newn = new NodeS<T>;

    newn->data = No;
    newn->next = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        NodeS<T> *temp = First;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newn;   
    }
    iCount++;
}

template <class T>
void SinglyLL<T>::DeleteFirst()
{
    if(First == NULL)
    {
        printf("Linked List is empty\n");
        return;
    }
    else if(First->next == NULL)
    {
        delete First;
        First = NULL;
    }
    else 
    {
        NodeS<T> *temp = First;

        First = First->next;
        delete temp;
    }
    iCount--;
}

template <class T>
void SinglyLL<T>::DeleteLast()
{
    if(First == NULL)
    {
        return;
    }
    else if(First->next == NULL)
    {
        delete First;
        First = NULL;
    }
    else 
    {
        NodeS<T> *temp = First;

        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL; 
    }
    iCount--;
}

template <class T>
void SinglyLL<T>::InsertAtPos(T No, int iPos)
{
    NodeS<T> * temp = First;
    if((iPos < 1) || (iPos > iCount + 1))
    {
        cout<<"Invalid Position"<<"\n";
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(No);
    }
    else if(iPos == iCount + 1)
    {
        InsertLast(No);
    }
    else
    {
        for(int iCnt = 1; iCnt < iPos - 1; iCnt++)
        {
            temp = temp->next;
        }

        NodeS<T> *newn = new NodeS<T>;
     
        newn->data = No;
        newn->next = NULL;

        newn->next = temp->next;
        temp->next = newn;
        iCount++;     
    }    
}

template <class T>
void SinglyLL<T>::DeleteAtPos(int iPos)
{
    NodeS<T> *temp = First;
    NodeS<T> *tempX = NULL;

    if((iPos < 1) || (iPos > iCount))
    {
        cout<<"Invalid Position"<<"\n";
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iCount)
    {
        DeleteLast();
    }
    else
    {
        for(int iCnt = 1; iCnt < iPos - 1; iCnt++)
        {
            temp = temp->next;
        }

        tempX = temp->next;
        temp->next = temp->next->next;
        delete tempX;
        iCount--;
    }
}

template<class T>
int SinglyLL<T> :: SearchFirstOcc(T No)
{
    int iCnt = 0;
    int iPos = 0;
    NodeS<T> *temp = First;

    while(temp != NULL)
    {
        iCnt++;
        if(temp->data == No)
        {
           iPos = iCnt;
           break;
        }
        temp = temp->next;
    }

    return iPos;
}

template<class T>
int SinglyLL<T> :: SearchLastOcc(T No)
{
    int iCnt = 0;
    int iPos = 0;
    NodeS<T> *temp = First;

    while(temp != NULL)
    {
        iCnt++;
        if(temp->data == No)
        {
            iPos = iCnt;
        }
        temp = temp->next;
    }

    return iPos;
}

template<class T>
int SinglyLL<T> :: Frequency(T No)
{
    int iFreq = 0;
    NodeS<T> *temp = First;

    while(temp != NULL)
    {
        if(temp->data == No)
        {
            iFreq++;
        }
        temp = temp->next;
    }

    return iFreq;
}

template<class T>
T SinglyLL<T> :: SumElements()
{
    T Sum = 0;
    NodeS<T> *temp = First;

    while(temp != NULL)
    {
        Sum = Sum + (temp->data);
        temp = temp->next;
    }

    return Sum;
}

template<class T>
T SinglyLL<T> :: Maximum()
{
    NodeS<T> *temp = First;
    T iMax = temp->data;

    while(temp != NULL)
    {
        if(temp->data > iMax)
        {
            iMax = temp->data;
        }
        temp = temp->next;
    }

    return iMax;
}

template<class T>
T SinglyLL<T> :: Minimum()
{
    NodeS<T> *temp = First;
    T iMin = temp->data;

    while(temp != NULL)
    {
        if(temp->data < iMin)
        {
            iMin = temp->data;
        }
        temp = temp->next;
    }

    return iMin;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
// Class of singly circular Linked list
//
///////////////////////////////////////////////////////////////////////////////////////////

template <class T>
class SinglyCL
{
    public:
        struct NodeS<T> * First;
        struct NodeS<T> * Last;
        int iCount;

    SinglyCL();
    ~SinglyCL();

    void Display();
    int Count();
    
    void InsertFirst(T);
    void InsertLast(T);
    void InsertAtPos(T, int);
    
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int);

    int SearchFirstOcc(T);
    int SearchLastOcc(T);
    int Frequency(T);
    T SumElements();
    T Maximum();
    T Minimum();
};

template <class T>
SinglyCL <T>::SinglyCL()
{
    First = NULL;
    Last = NULL;
    iCount = 0;
}

template<class T>
SinglyCL<T> :: ~SinglyCL()
{
    NodeS<T> *temp = First;

    for(int iCnt = 1; iCnt <= iCount; iCnt++)
    {
        temp = First;
        First = First->next;
        delete temp;
    }
}

template <class T>
void SinglyCL<T>::Display()
{
    NodeS<T> *temp = First;

    cout<<"->";
    do
    {
        cout<<"|"<<temp->data<<"|->";
        temp = temp->next;
    }while(temp != First);

    cout<<"\n";
}

template <class T>
int SinglyCL<T>::Count()
{
    return iCount;
}

template <class T>
void SinglyCL<T>::InsertFirst(T No)
{
    NodeS<T> *newn = new NodeS<T>;

    newn->data = No;
    newn->next = NULL;

    if((First == NULL) && (Last == NULL))
    {
        First = newn;
        Last = newn;
    }
    else
    {
        newn->next = First;
        First = newn;
    }
    Last->next = First;
    iCount++;
}

template <class T>
void SinglyCL<T>::InsertLast(T No)
{
    NodeS<T> *newn = new NodeS<T>;
        
    newn->data = No;
    newn->next = NULL;

    if((First == NULL) && (Last == NULL))
    {
        First = newn;
        Last = newn;
    }
    else
    {
        Last->next = newn;
        Last = newn;
    }
    Last->next = First;
    iCount++;
}

template <class T>
void SinglyCL<T>::DeleteFirst()
{
    if((First == NULL) && (Last == NULL))
    {
        cout<<"Linked List is empty"<<"\n";
        return;
    }
    else if(First == Last)
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else
    {
        First = First->next;
        delete Last->next;
        Last->next = First;
    }
    iCount--;
}

template <class T>
void SinglyCL<T>::DeleteLast()
{
    if((First == NULL) && (Last == NULL))
    {
        cout<<"Linked List is empty"<<"\n";
        return;
    }
    else if(First == Last)
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else
    {
        NodeS<T> *temp = First;

       while(temp->next->next != Last->next)
       {
           temp = temp->next;
       }

       Last = temp;
       delete Last->next;
       Last->next = First;
    }
    iCount--;
}

template <class T>
void SinglyCL<T>::InsertAtPos(T No, int iPos)
{
    if((iPos < 1) || (iPos > iCount + 1))
    {
        cout<<"Invalid Position"<<"\n";
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(No);
    }
    else if(iPos == (iCount + 1))
    {
        InsertLast(No);
    }
    else
    {
        NodeS<T> *temp = First;

        for(int iCnt = 1; iCnt < iPos - 1; iCnt++)
        {
            temp = temp->next;
        }

        NodeS<T> *newn = new NodeS<T>;

        newn->data = No;
        newn->next = NULL;

        newn->next = temp->next;
        temp->next = newn;

        iCount++;  
    }
}

template <class T>
void SinglyCL<T>::DeleteAtPos(int iPos)
{
    if((iPos < 1) || (iPos > iCount))
    {
        cout<<"Invalid Position"<<"\n";
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == (iCount))
    {
        DeleteLast();
    }
    else
    {
        NodeS<T> *temp = First;
        NodeS<T> *tempX = NULL;

        for(int iCnt = 1; iCnt < iPos - 1; iCnt++)
        {
            temp = temp->next;
        }

        tempX = temp->next;
        temp->next = temp->next->next;
        delete tempX;

        iCount--;
    }
}

template<class T>
int SinglyCL<T> :: SearchFirstOcc(T No)
{
    int iPos = 0;
    int iCnt = 0;
    NodeS<T> *temp = First;

    do
    {
        iCnt++;
        if(temp->data == No)
        {
           iPos = iCnt;
           break;
        }
        temp = temp->next;
    }while(temp != First);

    return iPos;
}

template<class T>
int SinglyCL<T> :: SearchLastOcc(T No)
{
    int iCnt = 0;
    int iPos = 0;
    NodeS<T> *temp = First;

    do
    {
        iCnt++;
        if(temp->data == No)
        {
            iPos = iCnt;
        }
        temp = temp->next;
    }while(temp != First);

    return iPos;
}

template<class T>
int SinglyCL<T> :: Frequency(T No)
{
    int iFreq = 0;
    NodeS<T> *temp = First;

    do
    {
        if(temp->data == No)
        {
            iFreq++;
        }
        temp = temp->next;
    }while(temp != First);

    return iFreq;
}

template<class T>
T SinglyCL<T> :: SumElements()
{
    T Sum;
    NodeS<T> *temp = First;

    do
    {
        Sum = Sum + (temp->data);
        temp = temp->next;
    }while(temp != First);

    return Sum;
}

template<class T>
T SinglyCL<T> :: Maximum()
{
    NodeS<T> *temp = First;
    T iMax = temp->data;

    do
    {
        if(temp->data > iMax)
        {
            iMax = temp->data;
        }
        temp = temp->next;
    }while(temp != First);

    return iMax;
}

template<class T>
T SinglyCL<T> :: Minimum()
{
    NodeS<T> *temp = First;
    T iMin = temp->data;

    do
    {
        if(temp->data < iMin)
        {
            iMin = temp->data;
        }
        temp = temp->next;
    }while(temp != First);

    return iMin;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
// Class of doubly linear Linked list
//
///////////////////////////////////////////////////////////////////////////////////////////

template <class T>
class DoublyLL
{
    public:
        struct NodeD<T> * First;
        struct NodeD<T> * Last;
        int iCount;

    DoublyLL();
    ~DoublyLL();

    void Display();
    int Count();
    
    void InsertFirst(T);
    void InsertLast(T);
    void InsertAtPos(T, int);
    
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int);
    int SearchFirstOcc(T);
    int SearchLastOcc(T);
    int Frequency(T);
    T SumElements();

    T Maximum();
    T Minimum();
};

template <class T>
DoublyLL <T>::DoublyLL()
{
    First = NULL;
    Last = NULL;
    iCount = 0;
}

template<class T>
DoublyLL<T> :: ~DoublyLL()
{
    NodeD<T> *temp = First;

    for(int iCnt = 1; iCnt <= iCount; iCnt++)
    {
        temp = First;
        First = First->next;
        delete temp;
    }
}

template <class T>
void DoublyLL<T>::Display()
{
    NodeD<T> *temp = First;
    
    cout<<"NULL<=>";
    while(temp != NULL)
    {
        cout<<"|"<<temp->data<<"|<=>";
        temp = temp->next;
    }
    cout<<"NULL\n";
}

template <class T>
int DoublyLL<T>::Count()
{
    return iCount;
}

template <class T>
void DoublyLL<T>::InsertFirst(T No)
{
    NodeD<T> *newn = new NodeD<T>;
    
    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if((First == NULL) && (Last == NULL))
    {
        First = newn;
        Last = newn;
        Last->next = NULL;
        First->prev = NULL;
    }
    else
    {
        newn->next = First;
        First->prev = newn;
        First = newn;
        First->prev = NULL;
    }

    iCount++;
}

template <class T>
void DoublyLL<T>::InsertLast(T No)
{
    NodeD<T> *newn = new NodeD<T>;
    
    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if((First == NULL) && (Last == NULL))
    {
        First = newn;
        Last = newn;
        Last->next = NULL;
        First->prev = NULL;
    }
    else
    {
        Last->next = newn;
        newn->prev = Last;

        Last = newn;
        Last->next = NULL;
    }

    iCount++;
}

template <class T>
void DoublyLL<T>::DeleteFirst()
{
    if((First == NULL) && (Last == NULL))
    {
        cout<<"Linked List is empty"<<"\n";
        return;
    }
    else if(First == Last)
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else 
    {
        First = First->next;
        delete First->prev;
        First->prev = NULL;
    }

    iCount--;
}

template <class T>
void DoublyLL<T>::DeleteLast()
{
    if((First == NULL) && (Last == NULL))
    {
        cout<<"Linked List is empty"<<"\n";
        return;
    }
    else if(First == Last)
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else 
    {
        Last = Last->prev;
        delete Last->next;
        Last->next = NULL;
    }
    iCount--;
}

template <class T>
void DoublyLL<T>::InsertAtPos(T No, int iPos)
{
    if((iPos < 1) || (iPos > iCount+1))
    {
        cout<<"Invalid Position"<<"\n";
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(No);
    }
    else if(iPos == iCount+1)
    {
        InsertLast(No);
    }
    else if(iPos <= iCount/2)
    {
        NodeD<T> *temp = First;
        for(int iCnt = 1; iCnt < iPos-1; iCnt++)
        {
            temp = temp->next;
        }

        NodeD<T> *newn = new NodeD<T>;
        newn->data = No;
        newn->next = NULL;
        newn->prev = NULL;

        newn->next = temp->next;
        temp->next->prev = newn;

        newn->prev = temp;
        temp->next = newn;

        iCount++;
    }
    else
    {
        NodeD<T> *temp = Last;

        for(int iCnt = iCount; iCnt > iPos; iCnt--)
        {
            temp = temp->prev;
        }

        NodeD<T> *newn = new NodeD<T>;
        newn->data = No;
        newn->next = NULL;
        newn->prev = NULL;

        newn->prev = temp->prev;
        temp->prev->next = newn;

        newn->next = temp;
        temp->prev = newn;

        iCount++;
    }
}

template <class T>
void DoublyLL<T> :: DeleteAtPos(int iPos)
{
    if((iPos < 1) || (iPos > iCount))
    {
        cout<<"Invalid Position"<<"\n";
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iCount)
    {
        DeleteLast();
    }
    else if(iPos <= iCount/2)
    {
        NodeD<T> *temp = First;

        for(int iCnt = 1; iCnt < iPos-1; iCnt++)
        {
            temp = temp->next;
        }

        temp->next = temp->next->next;
        delete temp->next->prev;
        temp->next->prev = temp;

        iCount--;
    }
    else
    {
       NodeD<T> *temp = Last;

        for(int iCnt = iCount; iCnt > iPos+1; iCnt--)
        {
            temp = temp->prev;
        }

        temp->prev = temp->prev->prev;
        delete temp->prev->next;
        temp->prev->next = temp;

        iCount--;
    }
}

template<class T>
int DoublyLL<T> :: SearchFirstOcc(T No)
{
    int iPos = 0;
    int iCnt = 0;
    NodeD<T> *temp = First;

    while(temp != NULL)
    {
        if(temp->data == No)
        {
           iPos = iCnt;
           break;
        }
        temp = temp->next;
    }

    return iPos;
}

template<class T>
int DoublyLL<T> :: SearchLastOcc(T No)
{
    int iCnt = 0;
    int iPos = 0;
    NodeD<T> *temp = Last;

    while(temp != NULL)
    {
        iCnt++;
        if(temp->data == No)
        {
            iPos = iCount - iCnt + 1;
            break;
        }
        temp = temp->prev;
    }

    return iPos;
}

template<class T>
int DoublyLL<T> :: Frequency(T No)
{
    int iFreq = 0;
    NodeD<T> *temp = First;

    while(temp != First);
    {
        if(temp->data == No)
        {
            iFreq++;
        }
        temp = temp->next;
    }

    return iFreq;
}

template<class T>
T DoublyLL<T> :: SumElements()
{
    NodeD<T> *temp = First;

    T Sum;
   
    while(temp != NULL)
    {
        Sum = Sum + (temp->data);
        temp = temp->next;
    }

    return Sum;
}

template<class T>
T DoublyLL<T> :: Maximum()
{
    NodeD<T> *temp = First;
    T iMax = temp->data;

    while(temp != NULL)
    {
        if(temp->data > iMax)
        {
            iMax = temp->data;
        }
        temp = temp->next;
    }

    return iMax;
}

template<class T>
T DoublyLL<T> :: Minimum()
{
    NodeD<T> *temp = First;
    T iMin = temp->data;

    while(temp != NULL)
    {
        if(temp->data < iMin)
        {
            iMin = temp->data;
        }
        temp = temp->next;
    }

    return iMin;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
// Class of doubly cicular Linked list
//
///////////////////////////////////////////////////////////////////////////////////////////

template <class T>
class DoublyCL
{
    public:
        struct NodeD<T> * First;
        struct NodeD<T> * Last;
        int iCount;

    DoublyCL();
    ~DoublyCL();

    void Display();
    int Count();
    
    void InsertFirst(T);
    void InsertLast(T);
    void InsertAtPos(T, int);
    
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int);

    int SearchFirstOcc(T);
    int SearchLastOcc(T);
    int Frequency(T);
    T SumElements();
    T Maximum();
    T Minimum(); 
};

template <class T>
DoublyCL <T>::DoublyCL()
{
    First = NULL;
    Last = NULL;
    iCount = 0;
}

template<class T>
DoublyCL<T> :: ~DoublyCL()
{
    NodeD<T> *temp = First;

    for(int iCnt = 1; iCnt <= iCount; iCnt++)
    {
        temp = First;
        First = First->next;
        delete temp;
    }
}

template <class T>
void DoublyCL<T>::Display()
{
    NodeD<T> *temp = First;

    cout<<"Elements of the LinkedList are : "<<"\n";
    cout<<" <=> ";

    do
    {
        cout<<"|"<<temp->data<<"| <=> ";
        temp = temp->next;
    }while(temp != Last->next);
    cout<<"\n";
}

template <class T>
int DoublyCL<T>::Count()
{
    return iCount;
}

template <class T>
void DoublyCL<T>::InsertFirst(T No)
{
    NodeD<T> *newn = new NodeD<T>;

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if((First == NULL) && (Last == NULL))
    {
       First = newn;
       Last = newn;
    }
    else
    {
        newn->next = First;
        First->prev = newn;
        First = newn;
    }

    Last->next = First;
    First->prev = Last;
    iCount++;
}

template <class T>
void DoublyCL<T>::InsertLast(T No)
{
    NodeD<T> *newn = new NodeD<T>;

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if((First == NULL) && (Last == NULL))
    {
       First = newn;
       Last = newn;
    }
    else
    {
        Last->next = newn;
        newn->prev = Last;
        Last = newn;
    }

    Last->next = First;
    First->prev = Last;
    iCount++;
}

template <class T>
void DoublyCL<T>::DeleteFirst()
{
    if((First == NULL) && (Last == NULL))
    {
       cout<<"LinkedList is empty"<<"\n";
       return;
    }
    else if(First == Last)
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else
    {
        First = First->next;
        delete First->prev;
        First->prev = Last;
    }

    Last->next =  First;
    iCount--;
}

template <class T>
void DoublyCL<T>::DeleteLast()
{
    if((First == NULL) && (Last == NULL))
    {
       cout<<"LinkedList is empty"<<"\n";
       return;
    }
    else if(First == Last)
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else
    {
        Last = Last->prev;
        delete Last->next;
        Last->next = First;
    }

    First->prev = Last;
    iCount--;
}

template <class T>
void DoublyCL<T>::InsertAtPos(T No, int iPos)
{
    if((iPos < 1) ||(iPos > iCount+1))
    {
        cout<<"Invalid Position"<<"\n";
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(No);
    }
    else if(iPos == iCount+1)
    {
        InsertLast(No);
    }
    else if(iPos <= iCount/2)
    {
        NodeD<T> *temp = First;
        for(int iCnt = 1; iCnt < iPos-1; iCnt++)
        {
            temp = temp->next;
        }
        
        NodeD<T> *newn = new NodeD<T>;
        newn->data = No;
        newn->next = NULL;
        newn->prev = NULL;

        newn->next = temp->next;
        temp->next->prev = newn;

        newn->prev = temp;
        temp->next = newn; 

        iCount++;
    }
    else
    {
        NodeD<T> *temp = Last;
        for(int iCnt = iCount; iCnt > iPos; iCnt--)
        {
            temp = temp->prev;
        }
        
        NodeD<T> *newn = new NodeD<T>;
        newn->data = No;
        newn->next = NULL;
        newn->prev = NULL;

        newn->prev = temp->prev;
        temp->prev->next = newn;

        newn->next = temp;
        temp->prev = newn;

        iCount++;
    }
}

template <class T>
void DoublyCL<T>::DeleteAtPos(int iPos)
{
        if((iPos < 1) || (iPos > iCount))
    {
        cout<<"Invalid Position"<<"\n";
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iCount)
    {
        DeleteLast();
    }
    else if(iPos <= iCount/2)
    {
        NodeD<T> *temp = First;
        for(int iCnt = 1; iCnt < iPos-1; iCnt++)
        {
            temp = temp->next;
        }

        temp->next = temp->next->next;
        delete temp->next->prev;
        temp->next->prev = temp;
        iCount--;
    }
    else
    {
        NodeD<T> *temp = Last;
        for(int iCnt = iCount; iCnt > iPos+1; iCnt--)
        {
            temp = temp->prev;
        }

        temp->prev = temp->prev->prev;
        delete temp->prev->next;
        temp->prev->next = temp;

        iCount--;
    }
}

template<class T>
int DoublyCL<T> :: SearchFirstOcc(T No)
{
    int iPos = 0;
    int iCnt = 0;
    NodeD<T> *temp = First;

    do
    {
        iCnt++;
        if(temp->data == No)
        {
           iPos = iCnt;
           break;
        }
        temp = temp->next;
    }while(temp != First);

    return iPos;
}

template<class T>
int DoublyCL<T> :: SearchLastOcc(T No)
{
    int iCnt = 0;
    int iPos = 0;
    NodeD<T> *temp = Last;

    do
    {
        iCnt++;
        if(temp->data == No)
        {
            iPos = iCount - iCnt + 1;
            break;
        }
        temp = temp->prev;
    }while(temp != Last);

    return iPos;
}

template<class T>
int DoublyCL<T> :: Frequency(T No)
{
    int iFreq = 0;
    NodeD<T> *temp = First;

    do
    {
        if(temp->data == No)
        {
            iFreq++;
        }
        temp = temp->next;
    }while(temp != First);

    return iFreq;
}

template<class T>
T DoublyCL<T> :: SumElements()
{
    NodeD<T> *temp = First;
    T Sum;

    do
    {
        Sum = Sum + temp->data;
        temp = temp->next;
    }while(temp != First);

    return Sum;
}

template<class T>
T DoublyCL<T> :: Maximum()
{
    NodeD<T> *temp = First;
    T iMax = temp->data;

    do
    {
        if(temp->data > iMax)
        {
            iMax = temp->data;
        }
        temp = temp->next;
    }while(temp != First);

    return iMax;
}

template<class T>
T DoublyCL<T> :: Minimum()
{
    NodeD<T> *temp = First;
    T iMin = temp->data;

    do
    {
        if(temp->data < iMin)
        {
            iMin = temp->data;
        }
        temp = temp->next;
    }while(temp != First);

    return iMin;
}

////////////////////////////////////////////////////////////////////////////////////////////////
//
// class of Stack
//
///////////////////////////////////////////////////////////////////////////////////////////////

template<class T>
class Stack
{
    public:
      NodeS<T> *First;
      int iCount;

      Stack();
      ~Stack();

      void Display();
      int Count();

      void Push(T);
      void Pop();
};

template<class T>
Stack<T> :: Stack()
{
    First = NULL;
    iCount = 0;
}

template<class T>
Stack<T> :: ~Stack()
{
    NodeS<T> *temp = First;

    while(temp != NULL)
    {
        temp = First;
        First = First->next;
        delete temp;
    }
}

template<class T>
void Stack<T> :: Display()
{
    NodeS<T> *temp = First;

    while(temp != NULL)
    {
        cout<<"|"<<temp->data<<"|->";
        temp = temp->next;
    }
    cout<<"NULL"<<"\n";
}

template<class T>
int Stack<T> :: Count()
{
    return iCount;
} 

template<class T>
void Stack<T> :: Push(T No)
{
    NodeS<T> *newn = new NodeS<T>;

    newn->data = No;
    newn->next = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        NodeS<T> *temp = First;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
    iCount++;
}

template<class T>
void Stack<T> :: Pop()
{
    if(First == NULL)
    {
        cout<<"Linked List is empty"<<"\n";
    }
    else if(First->next == NULL)
    {
        delete First;
        First = NULL;
    }
    else
    {
        NodeS<T> *temp = First;
        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
    }
    iCount--;
}

////////////////////////////////////////////////////////////////////////////////////////////////
//
// class of Que
//
///////////////////////////////////////////////////////////////////////////////////////////////

template<class T>
class Que
{
    public:
      NodeS<T> *First;
      int iCount;

      Que();
      ~Que();

      void Display();
      int Count();

      void Enque(T);
      void Deque();
};

template<class T>
Que<T> :: Que()
{
    First = NULL;
    iCount = 0;
}

template<class T>
Que<T> :: ~Que()
{
    NodeS<T> *temp = First;

    while(temp != NULL)
    {
        temp = First;
        First = First->next;
        delete temp;
    }
}

template<class T>
void Que<T> :: Display()
{
    NodeS<T> *temp = First;

    while(temp != NULL)
    {
        cout<<"|"<<temp->data<<"|->";
        temp = temp->next;
    }
    cout<<"NULL"<<"\n";
}

template<class T>
int Que<T> :: Count()
{
    return iCount;
} 

template<class T>
void Que<T> :: Enque(T No)
{
    NodeS<T> *newn = new NodeS<T>;

    newn->data = No;
    newn->next = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        NodeS<T> *temp = First;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
    iCount++;
}

template<class T>
void Que<T> :: Deque()
{
    if(First == NULL)
    {
        cout<<"Linked List is empty"<<"\n";
    }
    else if(First->next == NULL)
    {
        delete First;
        First = NULL;
    }
    else
    {
        NodeS<T> *temp = First;
        First = First->next;
        delete temp;
    }
    iCount--;
}

////////////////////////////////////////////////////////////////////////////////////////////
//
// Class for searching algorithms
//
//////////////////////////////////////////////////////////////////////////////////////////

template <class T>
class ArrayX
{
    public:
        T *Arr;
        int iSize;

        ArrayX(int);
        ~ArrayX();
        void Accept();
        void Display();
        bool LinearSearch(T);
        bool BidirectinalSearch(T);
        bool CheckSorted();
        bool BinarySearch(T);

        void BubbleSort();
        void BubbleSortEfficient();
        void SelectionSort();
        void InsertionSort();
};

template <class T>
ArrayX<T>:: ArrayX(int iNo)
{
    this->iSize = iNo;
    this->Arr = new T[iSize];
}

template <class T>
ArrayX<T> :: ~ArrayX()
{
    delete []Arr;
}

template <class T>
void ArrayX<T> :: Accept()
{
    cout<<"Enter the elements : \n";
    for(int iCnt = 0; iCnt < iSize ; iCnt++)
    {
        cin>>Arr[iCnt];
    }
}

template <class T>
void ArrayX<T> :: Display()
{    
    cout<<"Elements of array are: \n";
    for(int iCnt = 0; iCnt < iSize ; iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }
    cout<<"\n";
}

template <class T>
bool ArrayX<T> :: LinearSearch(T No)
{
    bool flag  = false;

    for(int iCnt = 0; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt] == No)
        {
            flag = true;
            break;
        }
    }
    return flag;
}

template <class T>
bool ArrayX<T> :: BidirectinalSearch(T No)
{
    bool flag  = false;
    int iStart = 0;
    int iEnd = iSize - 1;

    while(iStart <= iEnd)
    {
        if((Arr[iStart] == No) || (Arr[iEnd] == No))
        {
            flag = true;
            break;
        }
        iStart++;
        iEnd--;
    }
    return flag;
}

template <class T>
void ArrayX<T> :: BubbleSort()
{
    T temp;
    int i = 0, j = 0;

    for(i = 0; i < iSize; i++)
    {
        for(j = 0; j < iSize - i - 1; j++)
        {
            if(Arr[j] > Arr[j+1])
            {
                temp = Arr[j];
                Arr[j] = Arr[j+1];
                Arr[j+1] = temp;
            }
        }
        cout<<"Data after pass : "<<i+1<<"\n";
        Display();
    }
}

template <class T>
bool ArrayX<T> :: BinarySearch(T No)
{
    bool flag = false;

    int iStart = 0, iEnd = 0, iMid = 0;
    
    iStart = 0;
    iEnd = iSize - 1;

    while(iStart <= iEnd)
    {
        iMid = iStart + (iEnd - iStart) / 2;
        if( (Arr[iMid] == No) || (Arr[iStart] == No) || (Arr[iEnd] == No))
        {
            flag = true;
            break;
        }
        else if(Arr[iMid] < No)
        {
            iStart = iMid + 1;
        }
        else if(Arr[iMid] > No)
        {
            iEnd = iMid - 1;
        }
    }
    return flag;
}

template <class T>
void ArrayX<T> :: BubbleSortEfficient()
{
    T temp;
    int i = 0, j = 0;
    bool flag = false;

    for(i = 0; i < iSize; i++)
    {
        flag = false;

        for(j = 0; j < iSize - i - 1; j++)
        {
            if(Arr[j] < Arr[j+1])
            {
                temp = Arr[j];
                Arr[j] = Arr[j+1];
                Arr[j+1] = temp;
                flag = true;
            }
        }
        if(flag == false)
        {
            break;
        }
        cout<<"Data after pass : "<<i+1<<"\n";
        Display();
    }
}

template <class T>
void ArrayX <T>::SelectionSort()
{
    int i = 0, j = 0, min_index = 0;
    T temp;

    for(i = 0; i < iSize-1; i++)
    {
        min_index = i;

        for(j = i+1; j < iSize; j++)
        {
            if(Arr[j] < Arr[min_index])
            {
                min_index = j;
            }
        }
        temp = Arr[i];
        Arr[i] = Arr[min_index];
        Arr[min_index] = temp;
    }
}

template <class T>
void ArrayX <T>::InsertionSort()
{
    int i =0, j = 0;
    T selected;

    for(i = 1; i < iSize; i++)
    {
        for(j = i -1, selected = Arr[i] ; ((j >= 0) && (Arr[j] > selected)) ; j--)
        {
            Arr[j + 1] = Arr[j];
        }
        Arr[j + 1] = selected;
    }
}

template <class T>
bool ArrayX<T> :: CheckSorted()
{
    int iCnt = 0;
    bool flag = true;

    for(iCnt = 0; iCnt < iSize-1; iCnt++)
    {
        if(Arr[iCnt] <= Arr[iCnt+1])
        {
            continue;
        }
        else 
        {
            flag = false;
            break;
        }
    }
    return flag;
}

///////////////////////////////////////////////////////////////////////////////////////////
// Entry Point function
///////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    cout<<"--------------------------------------------------------------------------------------"<<"\n";
    cout<<"                           Singly Linear Linked List                                   "<<"\n";
    cout<<"--------------------------------------------------------------------------------------"<<"\n";
    SinglyLL <int>obj1;
   
    obj1.InsertFirst(51);
    obj1.InsertFirst(21);
    obj1.InsertFirst(11);
    obj1.InsertLast(101);
    obj1.InsertLast(111);
    obj1.InsertLast(11);

    obj1.Display();
    cout<<"Number of Nodes in the linked list are : "<<obj1.Count()<<"\n \n";

    int iRet = obj1.SumElements();
    cout<<"Sum of the elements is : "<<iRet<<"\n \n";

    iRet = obj1.Maximum();
    cout<<"Maximum of the elements is : "<<iRet<<"\n \n";

    iRet = obj1.Minimum();
    cout<<"Minimum of the elements is : "<<iRet<<"\n \n";

    iRet = obj1.SearchFirstOcc(11);
    if(iRet == 0)
    {
        cout<<"Element is not present in the given linked list"<<"\n";
    }
    else
    {
       cout<<"First Ocurrence of 11 is at position : "<<iRet<<"\n \n";
    }
    
    iRet = obj1.SearchLastOcc(21);
    if(iRet == 0)
    {
        cout<<"Element is not present in the given linked list"<<"\n";
    }
    else
    {
       cout<<"Last Ocurrence of 11 is at position : "<<iRet<<"\n \n";
    }

    iRet = obj1.Frequency(11);
    cout<<"Frequency of 11 is : "<<iRet<<"\n \n";

    obj1.InsertAtPos(55, 4);
    obj1.Display();
    cout<<"Number of Nodes in the linked list are : "<<obj1.Count()<<"\n \n";

    obj1.DeleteAtPos(4);
    obj1.Display();
    cout<<"Number of Nodes in the linked list are : "<<obj1.Count()<<"\n \n";

    obj1.DeleteFirst();
    obj1.DeleteLast();

    obj1.Display();
    cout<<"Number of Nodes in the linked list are : "<<obj1.Count()<<"\n \n";

    cout<<"--------------------------------------------------------------------------------------"<<"\n";   
    cout<<"                           Singly Circular Linked List                                   "<<"\n";
    cout<<"--------------------------------------------------------------------------------------"<<"\n";
    SinglyCL <char>obj2;
    obj2.InsertFirst('C');
    obj2.InsertFirst('B');
    obj2.InsertFirst('A');
    obj2.InsertLast('D');
    obj2.InsertLast('E');
    
    obj2.Display();
    cout<<"Number of Nodes in the linked list are : "<<obj2.Count()<<"\n \n";
    
    iRet = obj2.SumElements();
    cout<<"Sum of the ekements is : "<<iRet<<"\n \n";

    iRet = obj2.Maximum();
    cout<<"Maximum of the ekements is : "<<iRet<<"\n \n";

    iRet = obj2.Minimum();
    cout<<"Minimum of the ekements is : "<<iRet<<"\n \n";

    iRet = obj2.SearchFirstOcc('D');
    if(iRet == 0)
    {
        cout<<"Element is not present in the given linked list"<<"\n";
    }
    else
    {
       cout<<"First Ocurrence of D is at position : "<<iRet<<"\n \n";
    }

    iRet = obj2.SearchLastOcc('D');
    if(iRet == 0)
    {
        cout<<"Element is not present in the given linked list"<<"\n";
    }
    else
    {
       cout<<"Last Ocurrence of D is at position : "<<iRet<<"\n \n";
    }

    iRet = obj2.Frequency('D');
    cout<<"Frequency of D is : "<<iRet<<"\n \n";

    obj2.InsertAtPos('O', 4);
    obj2.Display();
    cout<<"Number of Nodes in the linked list are : "<<obj2.Count()<<"\n \n";

    obj2.DeleteAtPos(4);
    obj2.Display();
    cout<<"Number of Nodes in the linked list are : "<<obj2.Count()<<"\n \n";

    obj2.DeleteFirst();
    obj2.DeleteLast();

    obj2.Display();
    cout<<"Number of Nodes in the linked list are : "<<obj2.Count()<<"\n \n";

    cout<<"--------------------------------------------------------------------------------------"<<"\n"; 
    cout<<"                           Doubly Linear Linked List                                   "<<"\n";
    cout<<"--------------------------------------------------------------------------------------"<<"\n";
    DoublyLL <double>obj3;
    obj3.InsertFirst(51.56);
    obj3.InsertFirst(21.35);
    obj3.InsertFirst(11.658);
    obj3.InsertLast(101.889);
    obj3.InsertLast(11.658);
    obj3.InsertLast(111.321);

    obj3.Display();
    cout<<"Number of Nodes in the linked list are : "<<obj3.Count()<<"\n \n";

    double dRet = obj3.SumElements();
    cout<<"Addition of the elements is : "<<dRet<<"\n \n";

    dRet = obj3.Maximum();
    cout<<"Maximum of the elements is : "<<dRet<<"\n \n";

    dRet = obj3.Minimum();
    cout<<"Minimum of the elements is : "<<dRet<<"\n \n";

    iRet = obj3.SearchFirstOcc(111.658);
    if(iRet == 0)
    {
        cout<<"Element is not present in the given linked list"<<"\n";
    }
    else
    {
       cout<<"First Ocurrence of 11.658 is at position : "<<iRet<<"\n \n";
    }

    iRet = obj3.SearchLastOcc(11.658);
    if(iRet == 0)
    {
        cout<<"Element is not present in the given linked list"<<"\n";
    }
    else
    {
       cout<<"Last Ocurrence of 11.658 is at position : "<<iRet<<"\n \n";
    }
    
    iRet = obj3.Frequency(21.35);
    cout<<"Frequency of 21.35 is : "<<iRet<<"\n \n";

    obj3.InsertAtPos(55.65, 4);
    obj3.Display();
    cout<<"Number of Nodes in the linked list are : "<<obj3.Count()<<"\n \n";

    obj3.DeleteAtPos(4);
    obj3.Display();
    cout<<"Number of Nodes in the linked list are : "<<obj3.Count()<<"\n \n";

    obj3.DeleteFirst();
    obj3.DeleteLast();

    obj3.Display();
    cout<<"Number of Nodes in the linked list are : "<<obj3.Count()<<"\n \n";

    cout<<"--------------------------------------------------------------------------------------"<<"\n";    
    cout<<"                           Doubly Circular Linked List                                   "<<"\n";;
    cout<<"--------------------------------------------------------------------------------------"<<"\n";
    DoublyCL <float>obj4;

    obj4.InsertFirst(50.56f);
    obj4.InsertFirst(20.35f);
    obj4.InsertFirst(10.658f);
    obj4.InsertLast(100.889f);
    obj4.InsertLast(110.321f);
    
    obj4.Display();
    cout<<"Number of Nodes in the linked list are : "<<obj4.Count()<<"\n \n";

    float fRet = obj4.SumElements();
    cout<<"Addition of the elements is : "<<fRet<<"\n \n";

    fRet = obj4.Maximum();
    cout<<"Maximum of the elements is : "<<fRet<<"\n \n";

    fRet = obj4.Minimum();
    cout<<"Minimum of the elements is : "<<fRet<<"\n \n";

    iRet = obj4.SearchFirstOcc(110.321);
    if(iRet == 0)
    {
        cout<<"Element is not present in the given linked list"<<"\n";
    }
    else
    {
       cout<<"First Ocurrence of 110.321 is at position : "<<iRet<<"\n \n";
    }
    
    iRet = obj4.SearchLastOcc(110.321);
    if(iRet == 0)
    {
        cout<<"Element is not present in the given linked list"<<"\n";
    }
    else
    {
       cout<<"First Ocurrence of 110.321 is at position : "<<iRet<<"\n \n";
    }

    iRet = obj4.Frequency(20.35);
    cout<<"Frequency of 20.35 is : "<<iRet<<"\n \n";

    obj4.InsertAtPos(55.55f, 2);
    obj4.Display();
    cout<<"Number of Nodes in the linked list are : "<<obj4.Count()<<"\n \n";

    obj4.DeleteAtPos(2);
    obj4.Display();
    cout<<"Number of Nodes in the linked list are : "<<obj4.Count()<<"\n \n";

    obj4.DeleteFirst();
    obj4.DeleteLast();

    obj4.Display();
    cout<<"Number of Nodes in the linked list are : "<<obj4.Count()<<"\n \n";
    
    cout<<"--------------------------------------------------------------------------------------"<<"\n";    
    cout<<"                                  Stack                                               "<<"\n";
    cout<<"--------------------------------------------------------------------------------------"<<"\n";
    Stack <float>obj5;

    obj5.Push(50.56f);
    obj5.Push(20.35f);
    obj5.Push(10.658f);
    obj5.Push(100.889f);
    obj5.Push(110.321f);
    
    obj5.Display();
    cout<<"Number of Nodes in the stack are : "<<obj5.Count()<<"\n \n";

    obj5.Pop();
    obj5.Pop();

    obj5.Display();
    cout<<"Number of Nodes in the stack are : "<<obj5.Count()<<"\n \n";

    cout<<"--------------------------------------------------------------------------------------"<<"\n";    
    cout<<"                                  Que                                               "<<"\n";
    cout<<"--------------------------------------------------------------------------------------"<<"\n";
    Que <float>obj6;

    obj6.Enque(50.56f);
    obj6.Enque(20.35f);
    obj6.Enque(10.658f);
    obj6.Enque(100.889f);
    obj6.Enque(110.321f);
    
    obj6.Display();
    cout<<"Number of Nodes in the Que are : "<<obj6.Count()<<"\n \n";

    obj6.Deque();
    obj6.Deque();

    obj6.Display();
    cout<<"Number of Nodes in the Que are : "<<obj6.Count()<<"\n \n";
    cout<<"--------------------------------------------------------------------------------------"<<"\n";
    cout<<"                                Searching Algoriths                                   "<<"\n";
    cout<<"--------------------------------------------------------------------------------------"<<"\n";

    int iValue = 0;
    bool bRet = false;

    cout<<"Enter the size of array : \n";
    cin>>iValue;

    ArrayX <int>*obj = new ArrayX<int>(iValue);

    obj->Accept();
    obj->Display();

    cout<<"Enter the element that you want to search\n";
    cin>>iValue;

    bRet = obj->BinarySearch(iValue);
    if(bRet == true)
    {
        cout<<iValue<<" is present in the array\n";
    }
    else
    {
        cout<<iValue<<" is not present in the array\n";
    }
    delete obj;


    return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
