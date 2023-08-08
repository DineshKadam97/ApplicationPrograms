///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a Java program which accept number of rows and number of columns from user 
//                     and display the bewlow pattern.
//  
//  Input :    iRow = 4        iCol = 4
//
//  Output :     * # * # 
//               * # * #    
//               * # * # 
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

//////////////////////////////////////////////////////////
//
// Class Name : Question39_4
// Function name : main 
// Description : Entry Point Function
//
/////////////////////////////////////////////////////////

class Question39_4
{
    public static void main(String Arg[])
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
        
        for(i = 1; i <= iRow; i++)
        {
            for(j = iCol; j >= 1; j--)
            {
                if((j % 2) == 0)
                {
                    System.out.print("*\t");
                }
                else
                {
                    System.out.print("#\t");
                }
            }

            System.out.println();
        }
    }
}