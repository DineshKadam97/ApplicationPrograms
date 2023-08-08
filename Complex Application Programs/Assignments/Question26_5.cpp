//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a program which accept one number and checks whether first and last bits are ON or OFF. 
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;
typedef unsigned int UINT;

//////////////////////////////////////////////////////////////////////////////////////////////////////
// 
// Class Name :         Bitwise
// Characteristic :     UNSIGNED INT
// Function Name :      CheckBit
// Input :              Nothing (Beause of OOP approach)
// Output :             Boolean(TRUE or FALSE)
// Description :        Checks whether first(1) and last(32) bits are ON or OFF.
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
        UINT iMask = 0X80000001;
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
        cout<<"First(1) and Last(32) bits are ON"<<"\n";
    }
    else
    {
        cout<<"First(1) and Last(32) bits are OFF"<<"\n";
    }

    return 0;
}
