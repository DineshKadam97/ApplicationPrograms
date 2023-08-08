///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a Java program which accept one string from user from user and display the bewlow
//                     pattern.
//  
//  Input :    Hello
//
//  Output :     H 
//               H e     
//               H e l
//               H e l l 
//               H e l l o
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

//////////////////////////////////////////////////////////
//
// Class Name : Question40_3
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
// Date :               6 July 2023
//
/////////////////////////////////////////////////////////////////////////////////////////////

class Pattern
{
    public void Pattern(String str)
    {
        char Arr[] = str.toCharArray();
        int i, j = 0;

        int iCnt = 0;
        
        for(i = Arr.length; i >= 1; i--)
        {
            for(j = Arr.length, iCnt = 0; j >= 1; j--, iCnt++)
            {
                if(j >= i)
                {
                    System.out.print(Arr[iCnt]+"\t");
                } 
            }

            System.out.println();
        }
    }
}