import java.util.Scanner;
public class pgm4
{
    public static void main(String[] args) {
    String names[]= new String[5];
    int marks[]=new int[5];
    Scanner sc=new Scanner(System.in);
    for(int i=0;i<5;i++)
    {
        System.out.printf("Enter the name of the %d student : ",i);
        names[i]=sc.next();
        System.out.printf("Enter the marks of the %d student : ", i);
        marks[i]=sc.nextInt();
    }
    System.out.println("Students who scored more than 35 : ");
    for(int i=0;i<5;i++)
    {
        if (marks[i]>=35) {
            System.out.printf("Name : %s\tMarks : %d\n", names[i],marks[i]);
        }
    }
    sc.close();
    }
}