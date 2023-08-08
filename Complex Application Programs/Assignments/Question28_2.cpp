/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a program which accept number and position from user and OFF that bit. 
//                     Return modified number.                     
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

#define ERR_NOTFOUND 0
typedef unsigned int UINT;

//////////////////////////////////////////////////////////////////////////////////////////////////////
// 
// Class Name :         Bitwise
// Characteristic :     Unsigned Integer, Unsigned Integer
//
// Function Name :      OffBit
// Input :              Nothing(Because of OOP approach)
// Output :             Unsigned Integer
// Description :        OFFs entered bit if it is ON and returns the modified number.
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

      UINT OffBit()
      {
        UINT iMask = 0X00000001;
        UINT iResult = 0;
        UINT iPower = 1;

        if((iPos < 1) || (iPos > 32))
        {
          cout<<"Error : Invalid position"<<"\n";
          return ERR_NOTFOUND;
        }
        
        iMask = iMask << (iPos - 1);
        
        iMask = ~iMask;

        iResult = iNo & iMask;

        return iResult;
      }
};

////////////////////////////////////////////////////////////////////////
// Entry point function
///////////////////////////////////////////////////////////////////////

int main()
{
    UINT iValue = 0, iBit = 0;
    int iRet = 0;

    cout<<"Please, enter the number"<<"\n";
    cin>>iValue;

    cout<<"Please, enter the bit position that you want to check"<<"\n";
    cin>>iBit;

    Bitwise bobj(iValue, iBit);

    iRet = bobj.OffBit();

    if(iRet == ERR_NOTFOUND)
    {
       cout<<"Note : Please, enter the bit position from 1 to 32"<<"\n";
    }
    else
    {
       cout<<"Modified Number is : "<<iRet<<"\n";
    }

    return 0;
}
