import java.util.*;
import java.io.*;

class program520
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        byte Header[] = new byte[100];
        int iRet = 0;
        String HeaderStr = new String(Header);
        String Tokens[]; 
        
        System.out.println("---------------------------Marvellous Packer Unpacker------------------------------------------");
        System.out.println("Unpacking Activity of the Application is started");
        
        System.out.println("Enter the file name which contains the packed the data");
        String PackFile = sobj.nextLine();
        
        try
        {
             File Packobj = new File(PackFile);

             FileInputStream inobj = new FileInputStream(Packobj);

             while((iRet =inobj.read(Header, 0, 100)) > 0);
             {
                HeaderStr = new String(Header);
                
             System.out.println(HeaderStr); 

            
             Tokens = HeaderStr.split(" ");

             File newfileobj = new File(Tokens[0]);
             newfileobj.createNewFile(); 

             FileOutputStream outobj = new FileOutputStream(newfileobj);
            
             int FileSize = Integer.parseInt(Tokens[1]);
             byte Buffer[] = new byte[FileSize];

             inobj.read(Buffer, 0, FileSize); 

             outobj.write(Buffer, 0, FileSize);
             
             }
             

        }

        catch(Exception eobj)
        {
            System.out.println("Exceptio Occured : "+eobj);
        }

    }
}