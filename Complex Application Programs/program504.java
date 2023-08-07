import java.util.*;
import java.io.*;

class program503
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please, enter the name of the file");
        String FileName = sobj.nextLine();       
        
        try
        {
            File fobj = new File(FileName);

            boolean bRet = fobj.createNewFile();
            if(bRet == true)
            {
              System.out.println("File is created succesfully");
            }
        else
            {
              System.out.println("Unable to create file");
            }
        }

        catch(IOException iobj)
        {
            System.out.println("Excdeption occured : "+iobj);
        }

    }
}