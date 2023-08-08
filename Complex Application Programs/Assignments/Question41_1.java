///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a Java program which accept one string from user from user and display the bewlow
//                     pattern.
//  
//  Input :    Hello
//
//  Output :     H * * * *
//               H e * * *    
//               H e l * *
//               H e l l *
//               H e l l o
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

//////////////////////////////////////////////////////////
//
// Class Name : Question41_1
// Function name : main 
// Description : Entry Point Function
//
/////////////////////////////////////////////////////////

class Question40_3
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please, enter the string");
        String str = sobj.nextLine();

        Pattern pobj = new Pattern();
        pobj.Pattern(str);
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
// Class Name :         Pattern
// Function name :      Pattern
// Input :              String
// Output :             Returns Nothing(void)
// Description :        It displays the required pattern.
// Author :             Dinesh Devidasrao Kadam
// Date :               10 July 2023
//
/////////////////////////////////////////////////////////////////////////////////////////////

class Pattern
{
    public void Pattern(String str)
    {
        char Arr[] = str.toCharArray();
        int i, j = 0;

        int iCnt = 0;
        
        for(i = 1; i <= Arr.length; i++)
        {
            for(j = 1, iCnt = 0; j <= Arr.length; j++, iCnt++)
            {
                if(i >= j)
                {
                    System.out.print(Arr[iCnt]+"\t");
                }
                else
                {
                    System.out.print("*\t");
                }
            }

            System.out.println();
        }
    }
}