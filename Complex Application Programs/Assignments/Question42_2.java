import java.util.Scanner;

class Question42_1
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please, enter the size of first array");
        int iValue1 = sobj.nextInt();

        System.out.println("Please, enter the size of second array");
        int iValue2 = sobj.nextInt();

        MyArray mobj = new MyArray(iValue1, iValue2);

        System.out.println("Please, enter the elements of the first array");
        mobj.Accept1();

        System.out.println("Please, enter the elements of second array");
        mobj.Accept2();

        mobj.Display();

        mobj.displayEven();

    }
}

class ArrayX
{
    public int Arr[], Brr[];
    public int iSize1, iSize2;

    public ArrayX(int X, int Y)
    {
        iSize1 = X;
        iSize2 = Y;

        Arr = new int[iSize1];
        Brr = new int[iSize2];
    }

    public void Accept1()
    {
        Scanner sobj = new Scanner(System.in);

        int iCnt = 0;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }

    public void Accept2()
    {
        Scanner sobj = new Scanner(System.in);

        int iCnt = 0;

        for(iCnt = 0; iCnt < Brr.length; iCnt++)
        {
            Brr[iCnt] = sobj.nextInt();
        }
    }

    public void Display()
    {
        Scanner sobj = new Scanner(System.in);

        int iCnt = 0;

        System.out.println("Elements of the first array are : ");

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.print(Arr[iCnt]+"\t");
        }
        System.out.println();
        
        System.out.println("Elements of the second array are : ");
        for(iCnt = 0; iCnt < Brr.length; iCnt++)
        {
            System.out.print(Brr[iCnt]+"\t");
        }
        System.out.println();
    }
}

class MyArray extends ArrayX
{
    public MyArray(int X, int Y)
    {
        super(X, Y);
    }

    public void displayEven()
    {
        int iCnt = 0;
        System.out.println("Even Elements of the first array are : ");

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
           if(Arr[iCnt] % 2 == 0)
           {
               System.out.print(Arr[iCnt]+"\t");
           }
        }
        System.out.println();
        
        System.out.println("Even Elements of the second array are : ");
        for(iCnt = 0; iCnt < Brr.length; iCnt++)
        {
            if(Brr[iCnt] % 2 == 0)
           {
               System.out.print(Brr[iCnt]+"\t");
           }
        }
        System.out.println();

    }
}