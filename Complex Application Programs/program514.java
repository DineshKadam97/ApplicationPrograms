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

        System.out.println("Enter the name of packed file that you want to create");
        String PackFile = sobj.nextLine();
       
       try
     { 
        File Packobj = new File(PackFile);
        boolean bRet = Packobj.createNewFile();
        if(bRet == false)
        {
            System.out.println("Unable to create Packed file");
            return;
        }  

        FileOutputStream outobj = new FileOutputStream(Packobj);
               
            bRet = fobj.isDirectory();
            
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
                        
                        byte bHeader[] = Header.getBytes();

                        outobj.write(bHeader, 0, bHeader.length);
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