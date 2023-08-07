import java.util.*;
import java.io.*;

class program509
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please, enter the name of the folder");
        String FolderName = sobj.nextLine();   

        File fobj = new File(FolderName);    
        
        try
        {        
            boolean bRet = fobj.isDirectory();
            
            if(bRet == true)
            {
                File list[] = fobj.listFiles();
                
                System.out.println("Number of files in that directory are : "+list.length);
            }
        }

        catch(Exception iobj)
        {
            System.out.println("Excdeption occured : "+iobj);
        }

    }
}