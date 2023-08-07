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
                
                for(int i = 0; i < list.length; i++)
                {
                    System.out.println("File name : "+list[i].getName()+" File Size : "+list[i].length());
                }
        }
        }

        catch(Exception iobj)
        {
            System.out.println("Excdeption occured : "+iobj);
        }
    }
}