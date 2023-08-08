/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a program which accept number and position from user and check whether bit at 
//                     that position is ON or OFF. If the bit is ON return true otherwise return false.                    
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

typedef unsigned int UINT;

//////////////////////////////////////////////////////////////////////////////////////////////////////
// 
// Class Name :         Bitwise
// Characteristic :     Unsigned Integer, Unsigned Integer
//
// Function Name :      CheckBit
// Input :              Nothing(Because of OOP approach)
// Output :             Unsigned Integer
// Description :        Checks whether entered bit is ON or OFF in the given number.
// Author Name :        Dinesh Devidasrao Kadam
// Date :               6 June 2023
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

class Bitwise
{
    private:
      UINT iNo;
      UINT iPos;

    public:
      Bitwise(UINT X, UINT Y)
      {
         iNo = X;
         iPos = Y;
      }

      bool CheckBit()
      {
        UINT iMask = 0X00000001;
        UINT iResult = 0;

        if((iPos < 1) || (iPos > 32))
        {
          cout<<"Error : Invalid position"<<"\n";
          return false;
        }
        
        iMask = iMask << (iPos - 1);
        iResult = iNo & iMask;

        if(iResult == iMask)
        {
          return true;        
        }
        else
        {
          return false;
        }
      }
};

////////////////////////////////////////////////////////////////////////
// Entry point function
///////////////////////////////////////////////////////////////////////

int main()
{
    UINT iValue = 0, iBit = 0;
    bool bRet = false;

    cout<<"Please, enter the number"<<"\n";
    cin>>iValue;

    cout<<"Please, enter the bit position that you want to check"<<"\n";
    cin>>iBit;

    Bitwise bobj(iValue, iBit);

    bRet = bobj.CheckBit();

    if(bRet == true)
    {
        cout<<iBit<<"th Bit is ON"<<"\n";
    }
    else
    {
        cout<<iBit<<"th Bit is OFF"<<"\n";
    }

    return 0;
}
