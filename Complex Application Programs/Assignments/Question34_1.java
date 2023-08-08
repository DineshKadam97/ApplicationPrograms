///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a Java program which accept N numbers from user and display the  
//                     difference between summation even elements and summation of odd elements. 
//
//////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

//////////////////////////////////////////////////////////
//
// Class Name : Question34_1
// Function name : main 
// Description : Entry Point Function
//
/////////////////////////////////////////////////////////

class Question34_1
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please, enter the number of elements");
        int iSize = sobj.nextInt();

        MyArray mobj = new MyArray(iSize);

        System.out.println("Please, enter the elements");
        mobj.Accept();

        int iRet = mobj.Difference();
        System.out.println("Difeence between summation of odd and even is : "+iRet);
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
// Date :               5 July 2023
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
// Function name :      Difference
// Input :              Integer
// Output :             Integer
// Description :        It finds the difference between the summation of Even and Odd numbers.
// Author :             Dinesh Devidasrao Kadam
// Date :               5 July 2023
//
////////////////////////////////////////////////////////////////////////////////////////////////

class MyArray extends ArrayX
{
    public MyArray(int iSize)
    {
        super(iSize);
    }

    public int Difference()
    {
        int iESum = 0;
        int iOSum = 0;

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
           if((Arr[iCnt] % 2) == 0)
           {
             iESum = iESum + Arr[iCnt];
           }
           else
           {
             iOSum = iOSum + Arr[iCnt];
           }
        }

        if(iESum > iOSum)
        {
           return iESum - iOSum;
        }
        else
        {
            return iOSum - iESum;
        }      
    }
}