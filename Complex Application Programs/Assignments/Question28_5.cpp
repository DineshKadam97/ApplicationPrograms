/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a program which accept number from user and toggle contents of first and last. 
//                     nibble of the number. Return modified number.                     
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

typedef unsigned long int ULONG;
typedef unsigned int UINT;

//////////////////////////////////////////////////////////////////////////////////////////////////////
// 
// Class Name :         Bitwise
// Characteristic :     Unsigned Integer, Unsigned Integer
//
// Function Name :      ToggleBit
// Input :              Nothing(Because of OOP approach)
// Output :             Unsigned Integer
// Description :        Toggles contents of first and last nibble and returns modified number.     
// Author Name :        Dinesh Devidasrao Kadam
// Date :               6 June 2023
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

class Bitwise
{
    private:
      UINT iNo;

    public:
      Bitwise(UINT X)
      {
         iNo = X;
      }

      ULONG ToggleBit()
      {
        UINT iMask = 0XF000000F;
        ULONG iResult = 0;
        
        iResult = iNo ^ iMask;

        return iResult;
      }
};

////////////////////////////////////////////////////////////////////////
// Entry point function
///////////////////////////////////////////////////////////////////////

int main()
{
    UINT iValue = 0;
    ULONG iRet = 0;

    cout<<"Please, enter the number"<<"\n";
    cin>>iValue;

    Bitwise bobj(iValue);

    iRet = bobj.ToggleBit();

    cout<<"Modified Number is : "<<iRet<<"\n";

    return 0;
}
