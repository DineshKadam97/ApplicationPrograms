//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a Java program which accept N numbers from user and display the 
//                     multiplication of all the numbers. 
//
/////////////////////////////////////////////////////////////////////////////////////////////////////

import java.io.*;

///////////////////////////////////////////////////////////////
//
// Class Name :     Question36_5
// Function name :  main 
// Description :    Entry Point Function
//
/////////////////////////////////////////////////////////////

class Question36_5
{
    public static void main(String Arg[])
    {
        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));
        int iSize = 0;

        try
        {
            System.out.println("Please, enter the size of array");
            iSize = Integer.parseInt(bobj.readLine());
        }

        catch(IOException iobj)
        {}

        MyArray mobj = new MyArray(iSize);

        System.out.println("Please, enter the elments");
        mobj.Accept();

        int iRet = mobj.MultiplyElements();
        System.out.println("Multiplication is : "+iRet);
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
        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

        try
        {
            for(int iCnt = 0; iCnt < Arr.length; iCnt++)
            {
              Arr[iCnt] = Integer.parseInt(bobj.readLine());
            }
        }

        catch(IOException iobj)
        {}
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////
//
// Class Name :         MyArray
// Function name :      MultiplyElements
// Input :              Nothing
// Output :             Integer
// Description :        It finds the finds the product of N numbers.
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

    public int MultiplyElements()
    {
        int iMult = 1;

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            iMult = iMult * Arr[iCnt];
        }

        return iMult;
    }
}