//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a Java program which accept N numbers from user and accept one another
//                     number as NO, return the index of last occurence of NO. 
//
/////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

///////////////////////////////////////////////////////////////
//
// Class Name :     Question36_3
// Function name :  main 
// Description :    Entry Point Function
//
/////////////////////////////////////////////////////////////

class Question36_3
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

        int iRet = mobj.LastOcc(iValue);

        if(iRet == -1)
        {
           System.out.println(+iValue+" is not present in the given elements");
        }
        else
        {
            System.out.println("Last Occurence of "+iValue+" is at index : "+iRet);
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
// Function name :      LastOcc
// Input :              Integer
// Output :             Integer
// Description :        It finds the last occurence of a number in the array.
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

    public int LastOcc(int No)
    {
        int iCnt = 0;
        int iIndex = -1;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] == No)
            {
                iIndex = iCnt;
            }
        }

        return iIndex;
    }
}