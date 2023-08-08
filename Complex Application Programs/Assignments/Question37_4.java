/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a Java program which accepts a string from user and reverse the contents of
//                     that string by toggling the case.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

//////////////////////////////////////////////////////////
//
// Class Name : Question37_4
// Function name : main 
// Description : Entry Point Function
//
/////////////////////////////////////////////////////////

class Question37_4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please, enter the string : ");
        String str = sobj.nextLine();

        StringX obj = new StringX();

        String sRet = obj.StrRevTogX(str);
        System.out.println("Reversed String is : " +sRet);
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
// Class Name :         StringX
// Function name :      StrRevTogX
// Input :              String
// Output :             String
// Description :        It reverses the string by toggling the case.
// Author :             Dinesh Devidasrao Kadam
// Date :               6 July 2023
//
/////////////////////////////////////////////////////////////////////////////////////////////

class StringX
{
    public String StrRevTogX(String str)
    {
        char Arr[] = str.toCharArray();

        int iStart = 0;
        int iEnd = Arr.length-1;
        char cTemp = ' ';
        
        while(iStart < iEnd)
        {
            cTemp = Arr[iStart];
            
            if((Arr[iEnd] >= 'A') && (Arr[iEnd] <= 'Z'))
            {
                Arr[iStart] = (char)(Arr[iEnd] + 32);
            }
            else if((Arr[iEnd] >= 'a') && (Arr[iEnd] <= 'z'))
            {
                Arr[iStart] = (char)(Arr[iEnd] - 32);
            }

            if((cTemp >= 'A') && (cTemp <= 'Z'))
            {
                Arr[iEnd] = (char)(cTemp + 32);
            }
            else if((cTemp >= 'a') && (cTemp <= 'z'))
            {
                Arr[iEnd] = (char)(cTemp - 32);
            }
            
            iStart++;
            iEnd--;
        }
        return new String(Arr);
    }
}