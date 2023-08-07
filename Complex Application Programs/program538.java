import java.util.*;

class program538
{
    public static void main(String Arg[])
    {
        DBMS obj = new DBMS();
        obj.StartDBMS();

        obj.InsertIntoTable("Dinesh", "Developer", 26, 90000);
        obj.InsertIntoTable("Sanket", "Developer", 25, 70000);
        obj.InsertIntoTable("Dipti", "Manager", 24, 150000);
        obj.InsertIntoTable("Jeevan", "Tester", 27, 30000);
        obj.InsertIntoTable("Kiran", "Tester", 26, 45000);

        obj.SelectFrom();
        obj.SelectFrom(5);
        System.out.println("Heighest salary is : "+obj.Aggregate_Max_Salary());
        obj.Select_Max_Salary();

        System.out.println("Lowest salary is : "+obj.Aggregate_Min_Salary());
        obj.Select_Min_Salary();

        System.out.println("Sum of the salary is : "+obj.Aggregate_Sum_Salary());
        System.out.println("Average salary is : "+obj.Aggregate_Avg_Salary());

        obj.DeleteFrom_EID(4);
        obj.SelectFrom();

        obj.DeleteFrom_Name("Sanket");
        obj.SelectFrom();
    }
}

class Employee
{
    public int EID;
    public String Name;
    public String Designation;
    public int Age;
    public int Salary;

    public static int Generator;

    static 
    {
        Generator = 1;
    }

    public Employee(String str1, String str2, int X, int Y)
    {
        this.EID = Generator++;
        this.Name = str1;
        this.Designation = str2;
        this.Age = X;
        this.Salary = Y;
    }

    public void Display()
    {
        System.out.format("%s%20s%20s%20s%20s\n", this.EID, this.Name, this.Designation, this.Age, this.Salary);
    }
}

class DBMS
{
    public LinkedList<Employee> lobj;

    public DBMS()
    {
        lobj = new LinkedList<Employee>();
    }

    public void StartDBMS()
    {
        System.out.println("--------------------------------------------------------------------------------------------");
        System.out.println("Welcome to Marvellous DBMS...");
        System.out.println("Table Schema Created Succesfully...");
    }

    public void InsertIntoTable(String Name, String Designation, int Age, int Salary)
    {
        Employee eobj = new Employee(Name, Designation, Age, Salary);
        lobj.add(eobj);
    }

    public void SelectFrom()
    {
        System.out.println("--------------------------------------------------------------------------------------------");
        System.out.println("Records from the table are : ");
        System.out.println("--------------------------------------------------------------------------------------------");
        System.out.println("EID\t\t Name \t\t Designation \t\t  Age \t\t Salary ");
        System.out.println("--------------------------------------------------------------------------------------------");
        for(Employee eref : lobj)                  //for(int iCnt = 0; iCnt < lobj.size(); iCnt++)
        {
            eref.Display();                       //    Employee eref = lobj.get(iCnt);
            
        }
        System.out.println("--------------------------------------------------------------------------------------------");
    }
    
    // select * from Employee where EID = No;
    public void SelectFrom(int No)
    {
        System.out.println("--------------------------------------------------------------------------------------------");
        System.out.println("Records from the table are : ");
        System.out.println("--------------------------------------------------------------------------------------------");
        for(Employee eref : lobj)                 
        {
            if(eref.EID == No)
            {
                eref.Display();
                break;
            }     
        }
        System.out.println("--------------------------------------------------------------------------------------------");  
    }

    public int Aggregate_Max_Salary()
    {
        int iMax = 0;
        
        for(Employee eref : lobj)                 
        {
            if(eref.Salary > iMax)
            {
                iMax = eref.Salary;
            }     
        }
        return iMax;
    }

    public void Select_Max_Salary()
    {
        int iMax = 0;
        
        for(Employee eref : lobj)                 
        {
            if(eref.Salary > iMax)
            {
                iMax = eref.Salary;
            }     
        }

        System.out.println("--------------------------------------------------------------------------------------------");
        System.out.println("Records of the employee having highest salary are : ");
        System.out.println("--------------------------------------------------------------------------------------------");
        for(Employee eref : lobj)                 
        {
            if(eref.Salary == iMax)
            {
                eref.Display();
            }     
        }
        System.out.println("--------------------------------------------------------------------------------------------");  
    }

    public int Aggregate_Min_Salary()
    {
        Employee etemp = lobj.get(0);
        int iMin = etemp.Salary;
        
        for(Employee eref : lobj)                 
        {
            if(eref.Salary < iMin)
            {
                iMin = eref.Salary;
            }     
        }
        return iMin;
    }

    public void Select_Min_Salary()
    {
        Employee etemp = lobj.get(0);
        int iMin = etemp.Salary;
        
        for(Employee eref : lobj)                 
        {
            if(eref.Salary < iMin)
            {
                iMin = eref.Salary;
            }     
        }

        System.out.println("--------------------------------------------------------------------------------------------");
        System.out.println("Records of the employee having lowest salary are : ");
        System.out.println("--------------------------------------------------------------------------------------------");
        for(Employee eref : lobj)                 
        {
            if(eref.Salary == iMin)
            {
                eref.Display();
            }     
        }
        System.out.println("--------------------------------------------------------------------------------------------");  
    }

    public int Aggregate_Sum_Salary()
    {
        int iSum = 0;
        
        for(Employee eref : lobj)                 
        {
            iSum = iSum + eref.Salary;       
        }
        return iSum;
    }

    public float Aggregate_Avg_Salary()
    {
        int iSum = 0;
        int iCnt = 0;
        
        for(Employee eref : lobj)                 
        {
            iSum = iSum + eref.Salary;    
            iCnt++;   
        }
        return (float)iSum/(float)iCnt;
    }
    
    // delete from employee where EID = 3;
    public void DeleteFrom_EID(int No)
    {
        int i = 0;

        for(Employee eref : lobj)                 
        {
            if(eref.EID == No)
            {
                lobj.remove(i);
                break;
            } 
            i++;    
        }
    }
    
    // delete from employee where Name = Sanket;
    public void DeleteFrom_Name(String str)
    {
        int i = 0;

        for(Employee eref : lobj)                 
        {
            if(eref.Name.equals(str))
            {
                lobj.remove(i);
                break;
            } 
            i++;    
        }
    }
}