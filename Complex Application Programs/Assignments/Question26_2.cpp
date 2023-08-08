////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a program which checks whether 5th and 18th bits are ON or OFF. 
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;
typedef unsigned int UINT;

//////////////////////////////////////////////////////////////////////////////////////////////////////
// 
// Class Name :         Bitwise
// Characteristic :     UNSIGNED INT
//
// Function Name :      CheckBit
// Input :              Nothing(Beause of OOP approach)
// Output :             Boolean(TRUE or FALSE)
// Description :        Checks whether 5th and 18th bits are ON or OFF.
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

      bool CheckBit()
      {
        UINT iMask = 0X00020010;
        UINT iResult = 0;

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
    UINT iValue = 0;
    bool bRet = false;

    cout<<"Please, enter the number"<<"\n";
    cin>>iValue;

    Bitwise bobj(iValue);

    bRet = bobj.CheckBit();

    if(bRet == true)
    {
        cout<<"5th and 18th bits are ON"<<"\n";
    }
    else
    {
        cout<<"5th and 18th bits are OFF"<<"\n";
    }

    return 0;
}
