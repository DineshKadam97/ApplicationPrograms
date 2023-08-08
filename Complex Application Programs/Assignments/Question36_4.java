//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a Java program which accept N numbers from user and accept range, 
//                     Display all the elements from that range. 
//
/////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

///////////////////////////////////////////////////////////////
//
// Class Name :     Question36_4
// Function name :  main 
// Description :    Entry Point Function
//
/////////////////////////////////////////////////////////////

class Question36_4
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please, enter the number of elements");
        int iSize = sobj.nextInt();

        MyArray mobj = new MyArray(iSize);

        System.out.println("Please, enter the elements");
        mobj.Accept();

        System.out.println("Please, enter the starting point of the range");
        int iValue1 = sobj.nextInt();

        System.out.println("Please, enter the ending point of the range");
        int iValue2 = sobj.nextInt();
        
        System.out.println("Elements between "+iValue1+" and "+iValue2+" are : ");
        mobj.Display(iValue1, iValue2);
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
// Function name :      Display
// Input :              Integer, Integer
// Output :             Nothing(void)
// Description :        It displays the numbers bewteen the given range.
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

    public void Display(int iNo1, int iNo2)
    {
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
           if((Arr[iCnt] >= iNo1) && (Arr[iCnt] <= iNo2))
           {
             System.out.println(Arr[iCnt]);
           }
        }

    }
}