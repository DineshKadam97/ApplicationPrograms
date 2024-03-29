import java.util.*;
import java.io.*;

class Packer
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        byte Buffer[] = new byte[1024];
        int iRet = 0;
        boolean bRet = false;
        int PackCount = 0;
        
        System.out.println("-----------------------------------------------------------------------------------------------");
        System.out.println("                             Marvellous Packer Unpacker                                        ");
        System.out.println("-----------------------------------------------------------------------------------------------");
        System.out.println("                    Packing Activity of the Application is started                             ");
        System.out.println("-----------------------------------------------------------------------------------------------");

        System.out.println("Please, enter the name of the folder which contains files you want to pack");
        String FolderName = sobj.nextLine(); 
        System.out.println("-----------------------------------------------------------------------------------------------");  

        File fobj = new File(FolderName);
        String Header = null; 

        System.out.println("Enter the name of packed file that you want to create");
        String PackFile = sobj.nextLine();
        System.out.println("-----------------------------------------------------------------------------------------------"); 
       
       try
     { 
        File Packobj = new File(PackFile);
        bRet = Packobj.createNewFile();
        if(bRet == false)
        {
            System.out.println("Unable to create Packed file");
            return;
        }  
        
        System.out.println("Packed file gets succesfully created in your current directory");
        
        FileOutputStream outobj = new FileOutputStream(Packobj);
               
            bRet = fobj.isDirectory();
            
            if(bRet == true)
            {
                File list[] = fobj.listFiles();
                
                System.out.println("Total number of files found in the directory are : "+list.length);
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

                        FileInputStream inobj = new FileInputStream(list[i]);

                        while((iRet = inobj.read(Buffer)) != -1)
                        {
                            outobj.write(Buffer, 0, iRet);
                        }
                        System.out.println("File successfully packed with name : "+list[i].getName());
                        inobj.close();
                        PackCount++;
                    }       
                }

                System.out.println("-----------------------------------------------------------------------------------------------");
                System.out.println("                               Packing Summary                                                 ");
                System.out.println("-----------------------------------------------------------------------------------------------");
                System.out.println("Total number of files scanned : "+list.length);
                System.out.println("Total number of files packed : "+PackCount);
                System.out.println("-----------------------------------------------------------------------------------------------");
                System.out.println("Thank You for using Marvellous Packer Unpacker");
                System.out.println("-----------------------------------------------------------------------------------------------");
            }
        }

        catch(Exception iobj)
        {
            System.out.println("Exception occured : "+iobj);
        }
    }
}
