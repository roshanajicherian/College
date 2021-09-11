
/*Suppose your institution wishes to maintain a database of its employees. The database
is divided into a number of classes whose (Assistant Professor, Associate Professor,
Professor etc). Construct a Super Class Person to store personal information. Derive
all the above classes from the Class. Develop a Java program to specify all the classes
and define functions to create the database and retrieve individual information as and
when required. Support at least 5 employees on each category.
Your work*/
class Emplopyee
{
    int empid;
    String empName,phoneNumber,deptName;
    Emplopyee(int empid,String empName,String phoneNumber,String deptName)
    {
        this.empid=empid;
        this.empName=empName;
        this.phoneNumber=phoneNumber;
        this.deptName=deptName;
    }
    void retriveData()
    {
        System.out.println("Empid "+this.empid+"\nEmpname : "+this.empName+"\nPhone : "+this.phoneNumber+"deptName : "+this.deptName);
     
    }
}
class AssistantProfessor extends Emplopyee
{
    String special;
    AssistantProfessor(int empid,String empName,String phoneNumber,String deptName,String special)
    {
        super(empid, empName, phoneNumber,deptName);
        this.special=special;
        
    }
    void retriveData()
    {
        System.out.println("Empid "+this.empid+"\nEmpname : "+this.empName+"\nPhone : "+this.phoneNumber+"deptName : "+this.deptName+"special : "+this.special);
    }
}
class AssociateProfessor extends Emplopyee
{
    String special;
    AssociateProfessor(int empid,String empName,String phoneNumber,String deptName,String special)
    {
        super(empid, empName, phoneNumber,deptName);
        this.special=special;
    }
    void retriveData()
    {
        System.out.println("Empid "+this.empid+"\nEmpname : "+this.empName+"\nPhone : "+this.phoneNumber+"deptName : "+this.deptName+"special : "+this.special);
    }
}
class Professor extends Emplopyee
{
    int experience;
    String special;
    Professor(int empid,String empName,String phoneNumber,String deptName,String special,int experience)
    {
        super(empid, empName, phoneNumber,deptName);
        this.experience=experience;
        this.special=special;
    }
    void retriveData()
    {
        System.out.println("Empid "+this.empid+"\nEmpname : "+this.empName+"\nPhone : "+this.phoneNumber+"\ndeptName : "+this.deptName+"\nSpecial : "+this.special+"\nExperinece : "+this.experience);
    }
}
public class pgm14 {
    public static void main(String[] args)
    {
        AssistantProfessor ap1=new AssistantProfessor(100, "John", "1234567890", "CS", "Big Data");
        AssistantProfessor ap2=new AssistantProfessor(101, "Jane", "1234567898", "IT", "Cybersequrity");
        AssociateProfessor asso1=new AssociateProfessor(102, "Jeff", "1245567890", "CS", "Neural Networks");
        AssociateProfessor asso2=new AssociateProfessor(103, "Jim", "12455142190", "IT", "Data Science");
        Professor prof1=new Professor(104, "Rick", "1251242678", "CS", "Machine Learning",13);
        Professor prof2=new Professor(104, "Ryan", "1452415214", "IT", "Artifical Intelligence",15);
        ap1.retriveData();
        ap2.retriveData();
        asso1.retriveData();
        asso2.retriveData();
        prof1.retriveData();
        prof2.retriveData();
    }
}
