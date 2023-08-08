/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a program which accept number from user and count number of ON(1) bits in it.
//                     without using % and / operator.                     
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
// Function Name :      OffBit
// Input :              Nothing(Because of OOP approach)
// Output :             Unsigned Integer
// Description :        OFFs 7th bit of number if its ON and returns the modified number.
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

      UINT CountOne()
      {
        UINT iMask = 0X00000040;
        UINT iResult = 0;

        iResult = iNo & iMask;

        if(iResult == iMask)
        {
          return iNo - 64;        //to turn off the 7th bit we have to minus 64(2 raise to 6) from the number
        }
        else
        {
            return ERR_BITOFF;
        }
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

    iRet = bobj.CountOne();

    cout<<"Number of ON(1) bits are : "<<iRet<<"\n";

    return 0;
}
