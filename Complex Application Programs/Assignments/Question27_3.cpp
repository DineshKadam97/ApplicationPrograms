/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a program which accept number from user and toggle 7th bit of number.
//                     Return the modified number.                     
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

typedef unsigned int UINT;

//////////////////////////////////////////////////////////////////////////////////////////////////////
// 
// Class Name :         Bitwise
// Characteristic :     UNSIGNED INT
//
// Function Name :      ToggleBit
// Input :              Nothing(Because of OOP aaproach)
// Output :             Unsigned Integer
// Description :        Toggles the 7th bit of number and returns the modified number.
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

      UINT ToggleBit()
      {
        UINT iMask = 0X00000040;
        UINT iResult = 0;

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
    UINT iRet = 0;

    cout<<"Please, enter the number"<<"\n";
    cin>>iValue;

    Bitwise bobj(iValue);

    iRet = bobj.ToggleBit();

    cout<<"Modified number is : "<<iRet<<"\n";

    return 0;
}
