import java.util.*;
import java.io.*;

class program505
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please, enter the name of the file");
        String FileName = sobj.nextLine();       
        
        try
        {
            File fobj = new File(FileName);

            boolean bRet = fobj.exists();
            if(bRet == true)
            {
              System.out.println("File is existing");
            }
        else
            {
              System.out.println("There is no such file file");
            }
        }

        catch(Exception iobj)
        {
            System.out.println("Excdeption occured : "+iobj);
        }

    }
}