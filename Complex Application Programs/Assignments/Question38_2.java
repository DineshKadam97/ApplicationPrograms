///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a Java program which accept number of rows and number of columns from user 
//                     and display the bewlow pattern.
//  
//  Input :    iRow = 4        iCol = 4
//
//  Output :     A B C D
//               a b c d
//               a b c d
//               A B C D
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

//////////////////////////////////////////////////////////
//
// Class Name : Question38_2
// Function name : main 
// Description : Entry Point Function
//
/////////////////////////////////////////////////////////

class Question38_2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please, enter the number of rows");
        int iValue1 = sobj.nextInt();

        System.out.println("Please, enter the number of columns");
        int iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();

        pobj.Pattern(iValue1, iValue2);
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
// Class Name :         Pattern
// Function name :      Pattern
// Input :              Integer, Integer
// Output :             Returns Nothing(void)
// Description :        It displays the required pattern.
// Author :             Dinesh Devidasrao Kadam
// Date :               6 July 2023
//
/////////////////////////////////////////////////////////////////////////////////////////////

class Pattern
{
    public void Pattern(int iRow, int iCol)
    {
        int i, j = 0;
        char ch1 = ' ';
        char ch2 = ' ';

        for(i = 1; i <= iRow; i++)
        {
            for(j = 1,  ch1 = 'a', ch2 = 'A'; j <= iCol; j++, ch1++, ch2++)
            {
                if((i % 2) == 0)
                {
                  System.out.print(ch1+" ");
                }
                else
                {
                   System.out.print(ch2+" ");
                }
            }

            System.out.println();   
        }
    }
}