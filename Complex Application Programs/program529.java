import java.util.*;

class program523
{
    public static void main(String Arg[])
    {
        DBMS obj = new DBMS();
        obj.StartDBMS();
        obj.InsertIntoTable("Rahul", 23, 89);
        obj.InsertIntoTable("Sagar", 26, 98);
        obj.InsertIntoTable("Pooja", 20, 56);
        obj.InsertIntoTable("Sayali", 30, 78);
        obj.InsertIntoTable("Tajas", 29, 68);
        
        obj.SelectFrom();
        obj.SelectFrom(3);
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
    
    //Insert into table student values(_ ,_ , _)
    public void InsertIntoTable(String Name, int Age, int Marks)
    {
        Student sobj = new Student(Name, Age, Marks);
        lobj.add(sobj);  //InsertLast sarkh aahe
    }

    // select *  from student
    public void SelectFrom()
    {
        System.out.println("Records from the student database are : ");

        for(Student sref : lobj)  // for(int iCnt = 0; iCnt < lobj.length())
        {
            sref.Display();
        }
    }
    
    // select *from student where No = 11;
    public void SelectFrom(int No)
    {
        System.out.println("Records from the student database are : ");

        for(Student sref : lobj)  // for(int iCnt = 0; iCnt < lobj.length())
        {
            if(sref.Rno == No)
            {
                sref.Display();
                break;
            }
        }
    }
}