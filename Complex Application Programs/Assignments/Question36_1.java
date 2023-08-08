//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a Java program which accept N numbers from user and accept one another
//                     number as NO, check whether NO is present or not. 
//
/////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

///////////////////////////////////////////////////////////////
//
// Class Name :     Question36_1
// Function name :  main 
// Description :    Entry Point Function
//
/////////////////////////////////////////////////////////////

class Question36_1
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iSize = 0;

        System.out.println("Please, enter the number of elements");
        iSize = sobj.nextInt();

        MyArray mobj = new MyArray(iSize);

        System.out.println("Please, enter the elements");
        mobj.Accept();

        System.out.println("Please, enter the number that you want to search");
        int iValue = sobj.nextInt();

        boolean bRet = mobj.CheckNumber(iValue);
        if(bRet == true)
        {
            System.out.println(iValue+" is present in the given elements");
        }
        else
        {
            System.out.println(iValue+" is absent in the given elements");
        }
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
// Class Name :         ArrayX
// Function name :      Accept
// Input :              Integer
// Output :             Returs Nothing(void)
// Description :        It accepts the N numbers.
// Author :             Dinesh Devidasrao Kadam
// Date :               6 July 2023
//
/////////////////////////////////////////////////////////////////////////////////////////////

class ArrayX
{
    protected int Arr[];

    protected ArrayX(int iSize)
    {
        Arr = new int[iSize];
    }

    protected void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////
//
// Class Name :         MyArray
// Function name :      CheckNumber
// Input :              Integer
// Output :             Boolean(true or false)
// Description :        It checks whether entered number present in the array or not.
// Author :             Dinesh Devidasrao Kadam
// Date :               6 July 2023
//
////////////////////////////////////////////////////////////////////////////////////////////////

class MyArray extends ArrayX
{
    public MyArray(int iSize)
    {
        super(iSize);
    }

    public boolean CheckNumber(int No)
    {
        int iCnt = 0;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] == No)
            {
                break;
            }
        }

        if(iCnt < Arr.length)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}