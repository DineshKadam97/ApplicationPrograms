import java.util.*;
import java.io.*;

class program513
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please, enter the name of the folder");
        String FolderName = sobj.nextLine();   

        File fobj = new File(FolderName);
        String Header = null;    
        
        try
        {        
            boolean bRet = fobj.isDirectory();
            
            if(bRet == true)
            {
                File list[] = fobj.listFiles();
                
                for(int i = 0; i < list.length; i++)
                {
                    if((list[i].getName()).endsWith(".txt"))
                    {
                        Header = list[i].getName() + " " + list[i].length();
                        
                        for(int j = Header.length(); j < 100; j++)
                        {
                            Header = Header + " ";
                        }
                        
                        System.out.println(Header);
                        System.out.println(Header.length());
                    }       
                }
            }
        }

        catch(Exception iobj)
        {
            System.out.println("Excdeption occured : "+iobj);
        }
    }
}