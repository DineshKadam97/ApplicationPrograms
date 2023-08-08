/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a program which accept number from user and ON its first 4 bits.
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
// Function Name :      OnBit
// Input :              Nothing(Because of OOP approach)
// Output :             Unsigned Integer
// Description :        ONs first 4 bits of number and returns the modified number.
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

      UINT OnBit()
      {
        UINT iMask = 0X0000000F;
        UINT iResult = 0;

        iResult = iNo | iMask;

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

    iRet = bobj.OnBit();

    cout<<"Modified number is : "<<iRet<<"\n";

    return 0;
}
