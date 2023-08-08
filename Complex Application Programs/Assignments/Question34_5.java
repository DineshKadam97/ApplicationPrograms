///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a Java program which accept N numbers from user and display the  
//                     elements which are multiples of 11. 
//
//////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

///////////////////////////////////////////////////////////////
//
// Class Name : Question34_5
// Function name : main 
// Description : Entry Point Function
//
//////////////////////////////////////////////////////////////

class Question34_5
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please, enter the number of elements");
        int iSize = sobj.nextInt();

        MyArray mobj = new MyArray(iSize);

        System.out.println("Please, enter the elements");
        mobj.Accept();
        
        System.out.println("Elements which are multiples of 11 are : ");
        mobj.Display();
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
// Function name :      Display
// Input :              Nothing
// Output :             Returns Nothing(void)
// Description :        It displays the elements which are multiples of 11.
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

    public void Display()
    {
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
           if(((Arr[iCnt] % 11) == 0))
           {
             System.out.println(Arr[iCnt]);
           }
        }     
    }
}