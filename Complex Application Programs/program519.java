import java.util.*;
import java.io.*;

class program513
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        byte Header[] = new byte[100];
        
        System.out.println("---------------------------Marvellous Packer Unpacker------------------------------------------");
        System.out.println("Unpacking Activity of the Application is started");
        
        System.out.println("Enter the file name which contains the packed the data");
        String PackFile = sobj.nextLine();
        
        try
        {
             File Packobj = new File(PackFile);

             FileInputStream inobj = new FileInputStream(Packobj);

             inobj.read(Header, 0, 100);

             String HeaderStr = new String(Header);
             System.out.println(HeaderStr); 

             String Tokens[]; 
             Tokens = HeaderStr.split(" ");

             System.out.println("File Name : "+Tokens[0]);
             System.out.println("File Length : "+Tokens[1]);

             File newofileobj = new File(Tokens[0]);
             newofileobj.createNewFile(); 
        }

        catch(Exception eobj)
        {
            System.out.println("Exceptio Occured : "+eobj);
        }

    }
}