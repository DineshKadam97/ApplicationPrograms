import java.util.*;

class program523
{
    public static void main(String Arg[])
    {
        Student sobj1 = new Student("Amit", 23, 89);
        Student sobj2 = new Student("Sagar", 24, 90);

        sobj1.Display();
        sobj2.Display();

        DBMS obj = new DBMS();
        obj.StartDBMS();


    }
}

class Student
{
    public int Rno;
    public String Name; 
    public int Age;
    public int Marks;

    public static int Generator;

    static
    {
        Generator = 0;        // static block
    }

    public Student(String str, int X, int Y)
    {
       this.Rno = ++Generator;
       this.Name = str;
       this.Age = X;
       this.Marks = Y;
    }

    public void Display()
    {
        System.out.println(this.Rno + " " + this.Name + " " + this.Age + " "+ this.Marks);
    }
}

class DBMS
{
    public LinkedList<Student> lobj;

    public DBMS()
    {
        lobj = new LinkedList<Student> ();
    }

    public void StartDBMS()
    {
        System.out.println("Marvellous DBMS started succesfully....");
        System.out.println("Table Schema created successfully....");
    }
}