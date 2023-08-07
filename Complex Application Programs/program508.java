import java.util.*;
import java.io.*;

class program505
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please, enter the name of the folder");
        String FolderName = sobj.nextLine();       
        
        try
        {
            File fobj = new File(FolderName);
            boolean bRet = fobj.isDirectory();
            
            if(bRet == true)
            {
                System.out.println("Its a directory");
            }
            else
            {
                System.out.println("Its not a directory");
            }
        }

        catch(Exception iobj)
        {
            System.out.println("Excdeption occured : "+iobj);
        }

    }
}