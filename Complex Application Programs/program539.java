import java.util.*;

class program538
{
    public static void main(String Arg[])
    {
        DBMS obj = new DBMS();
        obj.StartDBMS();
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

        String Query;
        int TokensCount = 0;
        String Tokens[];
        Scanner sobj = new Scanner(System.in);

        while(true)
        {
            System.out.print("Marvellous DBMS : ");
            Query = sobj.nextLine();

            Tokens = Query.split(" ");
            TokensCount = Tokens.length;

            if(TokensCount == 1)
            {
                if("exit".equals(Tokens[0]))
                {
                    System.out.println("Thank You for using Marvellous DBMS");
                    break;
                }
                else
                {
                    System.out.println("\t \t Invalid Query");
                }
            }
            else if(TokensCount == 3)
            {

            }
            else if(TokensCount == 4)
            {
                if(("select".equalsIgnoreCase(Tokens[0])))
                {
                    SelectFrom();
                }
            }
            else if(TokensCount == 5)
            {
                if("select".equalsIgnoreCase(Tokens[0]) && ("MAX".equalsIgnoreCase(Tokens[1])) && ("Salary".equalsIgnoreCase(Tokens[2])))
                {
                    System.out.println("Highest salary is : "+Aggregate_Max_Salary());
                }
                else if("select".equalsIgnoreCase(Tokens[0]) && ("MIN".equalsIgnoreCase(Tokens[1])) && ("Salary".equalsIgnoreCase(Tokens[2])))
                {
                    System.out.println("Lowest salary is : "+Aggregate_Min_Salary());
                }
                else if("select".equalsIgnoreCase(Tokens[0]) && ("SUM".equalsIgnoreCase(Tokens[1])) && ("Salary".equalsIgnoreCase(Tokens[2])))
                {
                    System.out.println("Sum of the salary is : "+Aggregate_Sum_Salary());
                }
                else if("select".equalsIgnoreCase(Tokens[0]) && ("Avg".equalsIgnoreCase(Tokens[1])) && ("Salary".equalsIgnoreCase(Tokens[2])))
                {
                    System.out.println("Average salary is : "+Aggregate_Avg_Salary());
                }
                else
                {
                    System.out.println("\t \t Invalid Query");
                }

            }
            else if(TokensCount == 6)
            {

            }
            else if(TokensCount == 7)
            {
                if("delete".equalsIgnoreCase(Tokens[0]) && ("EID".equalsIgnoreCase(Tokens[4])))
                {
                    DeleteFrom_EID(Integer.parseInt(Tokens[6]));
                }
                else if("delete".equalsIgnoreCase(Tokens[0]) && ("Name".equalsIgnoreCase(Tokens[4])))
                {
                    DeleteFrom_Name(Tokens[6]);
                }
                else if("delete".equalsIgnoreCase(Tokens[0]) && ("Designation".equalsIgnoreCase(Tokens[4])))
                {
                    DeleteFrom_Designation(Tokens[6]);
                }
                else
                {
                    System.out.println("\t \t Invalid Query");
                }
            }
            else if(TokensCount == 8)
            {
                if("insert".equalsIgnoreCase(Tokens[0]))
                {
                    InsertIntoTable(Tokens[4], Tokens[5], Integer.parseInt(Tokens[6]), Integer.parseInt(Tokens[7]));
                }
                else if(("select".equalsIgnoreCase(Tokens[0])) && ("Name".equalsIgnoreCase(Tokens[5])))
                {
                    SelectFrom_Name(Tokens[7]);
                }
                else if(("select".equalsIgnoreCase(Tokens[0])) && ("EID".equalsIgnoreCase(Tokens[5])))
                {
                    SelectFrom_EID(Integer.parseInt(Tokens[7]));
                }
                else if(("select".equalsIgnoreCase(Tokens[0]))&& ("Designation".equalsIgnoreCase(Tokens[5])))
                {
                    SelectFrom_Designation(Tokens[7]);
                }
                else if(("select".equalsIgnoreCase(Tokens[0]))&& ("Age".equalsIgnoreCase(Tokens[5])))
                {
                    SelectFrom_Age(Integer.parseInt(Tokens[7]));
                }
                else if(("select".equalsIgnoreCase(Tokens[0]))&& ("Salary".equalsIgnoreCase(Tokens[5])) &&  (">".equalsIgnoreCase(Tokens[6])))
                {
                    SelectFrom_Salary(Integer.parseInt(Tokens[7]));
                }
                else if(("select".equalsIgnoreCase(Tokens[0]))&& ("Age".equalsIgnoreCase(Tokens[5])) &&  (">".equalsIgnoreCase(Tokens[6])))
                {
                    SelectFrom_Salary(Integer.parseInt(Tokens[7]));
                }
                else
                {
                    System.out.println("\t \t Invalid Query");
                }
            }
            else if(TokensCount == 10)
            {
                if(("update".equalsIgnoreCase(Tokens[0]))&& ("Salary".equalsIgnoreCase(Tokens[3])) &&  ("EID".equalsIgnoreCase(Tokens[7])))
                {
                    UpdateSalarybyEID(Integer.parseInt(Tokens[5]), Integer.parseInt(Tokens[9]));
                }
                if(("update".equalsIgnoreCase(Tokens[0]))&& ("Salary".equalsIgnoreCase(Tokens[3])) &&  ("Name".equalsIgnoreCase(Tokens[7])))
                {
                    UpdateSalarybyName(Integer.parseInt(Tokens[5]), Tokens[9]);
                }
            }
            else
            {
                System.out.println("\t \t Invalid Query");
                break;
            }
        }
    }

    public void InsertIntoTable(String Name, String Designation, int Age, int Salary)
    {
        Employee eobj = new Employee(Name, Designation, Age, Salary);
        lobj.add(eobj);
        System.out.println("\t \t One row gets inserted succesfully");
    }

    public void SelectFrom()
    {
        System.out.println("--------------------------------------------------------------------------------------------");
        System.out.println("Records from the table are : ");
        System.out.println("--------------------------------------------------------------------------------------------");
        System.out.println("EID\t\t Name \t\t Designation \t\t  Age \t\t  Salary ");
        System.out.println("--------------------------------------------------------------------------------------------");
        for(Employee eref : lobj)                  //for(int iCnt = 0; iCnt < lobj.size(); iCnt++)
        {
            eref.Display();                       //    Employee eref = lobj.get(iCnt);
            
        }
        System.out.println("--------------------------------------------------------------------------------------------");
    }
    
    // select * from Employee where EID = No;
    public void SelectFrom_EID(int No)
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

    public void SelectFrom_Name(String str)
    {
        System.out.println("--------------------------------------------------------------------------------------------");
        System.out.println("Records from the table are : ");
        System.out.println("--------------------------------------------------------------------------------------------");
        for(Employee eref : lobj)                 
        {
            if(eref.Name.equalsIgnoreCase(str))
            {
                eref.Display();
            }     
        }
        System.out.println("--------------------------------------------------------------------------------------------");  
    }

    public void SelectFrom_Designation(String str)
    {
        System.out.println("--------------------------------------------------------------------------------------------");
        System.out.println("Records from the table are : ");
        System.out.println("--------------------------------------------------------------------------------------------");
        for(Employee eref : lobj)                 
        {
            if(eref.Designation.equalsIgnoreCase(str))
            {
                eref.Display();
            }     
        }
        System.out.println("--------------------------------------------------------------------------------------------");  
    }

    public void SelectFrom_Age(int No)
    {
        System.out.println("--------------------------------------------------------------------------------------------");
        System.out.println("Records from the table are : ");
        System.out.println("--------------------------------------------------------------------------------------------");
        for(Employee eref : lobj)                 
        {
            if(eref.Age > No)
            {
                eref.Display();
            }     
        }
        System.out.println("--------------------------------------------------------------------------------------------");  
    }

    public void SelectFrom_Salary(int No)
    {
        System.out.println("--------------------------------------------------------------------------------------------");
        System.out.println("Records from the table are : ");
        System.out.println("--------------------------------------------------------------------------------------------");
        for(Employee eref : lobj)                 
        {
            if(eref.Salary >= No)
            {
                eref.Display();
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
        if(i < lobj.size())
        {
            System.out.println("\t \t One row gets deleted succesfully");
        }
        else
        {
            System.out.println("\t \t Error : Invalid EID");
        }
    }
    
    // delete from employee where Name = Sanket;
    public void DeleteFrom_Name(String str)
    {
        int i = 0;

        for(Employee eref : lobj)                 
        {
            if(eref.Name.equalsIgnoreCase(str))
            {
                lobj.remove(i);
                break;
            } 
            i++;    
        }
        if(i < lobj.size())
        {
            System.out.println("\t \t One row gets deleted succesfully");
        }
        else
        {
            System.out.println("\t \t Error : Invalid Name");
        }
    }

     // delete from employee where Designation = developer
    public void DeleteFrom_Designation(String str)
    {
        int i = 0;

        for(Employee eref : lobj)                 
        {
            if(eref.Designation.equalsIgnoreCase(str))
            {
                lobj.remove(i);
                break;
            } 
            i++;    
        }
        if(i < lobj.size())
        {
            System.out.println("\t \t One row gets deleted succesfully");
        }
        else
        {
            System.out.println("\t \t Error : Invalid Designation");
        }
    }
    
    // update employee set salary = 60000 where Name = Jeevan
    public void UpdateSalarybyName(int No, String str)
    {
        int i = 0;
        for(Employee eref : lobj)
        {
            if(eref.Name.equalsIgnoreCase(str))
            {
                eref.Salary = No;
                break;
            }
            i++;
        }

        if(i < lobj.size())
        {
            System.out.println("\t \t One row gets affected succesfully");
        }
        else
        {
            System.out.println("\t \t Name is not present in the table");
        }
        
    }

    // update employee set salary = 60000 where Name = Jeevan
    public void UpdateSalarybyEID(int No1, int No2)
    {
        int i = 0;
        for(Employee eref : lobj)
        {
            if(eref.EID == No2)
            {
                eref.Salary = No1;
                break;
            }
            i++;
        }
        
        if(i < lobj.size())
        {
            System.out.println("\t \t One row gets affected succesfully");
        }
        else
        {
            System.out.println("\t \t EID is not present in the table");
        }
    }

}

// insert into employee values Sanket Developer 25  70000
//   0      1      2      3      4        5     6     7
// No of tokens : 8

// select * from student
//   0    1   2     3
// No of tokens : 4

// select * from employee
//   0    1   2     3
// No of Tokens : 4

// select * from employee where Name = Dinesh
//   0    1   2     3      4    5   6   7
//  No of Tokens : 8

// select * from employee where EID = 2
//   0    1   2     3      4    5   6   7
//  No of Tokens : 8

// select * from employee where Designation = Developer
//   0    1   2     3      4    5   6   7
//  No of Tokens : 8

// select * from employee where Age > 25
//   0    1   2     3      4    5   6   7
//  No of Tokens : 8

// select * from employee where Salary > 50000
//   0    1   2     3      4      5    6   7
//  No of Tokens : 8

// delete from employee where EID = 4
//   0     1     2       3     4  5  6   
//  No of Tokens : 7

// update employee set salary = 60000 where Name = Jeevan
//   0       1      2    3    4   5     6     7  8   9