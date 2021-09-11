import java.util.Scanner;

class Figure
{
    void area(int a,int b)
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("1.Rectangle\n2.Triangle");
        int choice=sc.nextInt();
        if (choice==1)
            System.out.println("The area of the rectangle is : "+(a*b));
        else if(choice==2)
            System.out.println("The area of the triangle is : "+(b*a)/2);
        else
            System.out.println("Invalid choice");

    }
}
class Rectangle extends Figure
{
    void area(int l,int b)
    {
        System.out.println("The area of the rectangle is : "+(l*b));
    }
}
class Triangle extends Figure
{
    void area(int b,int h)
    {
        System.out.println("The area of the triangle is : "+(b*h)/2);
    }
}
public class pgm12 {
    public static void main(String[] args)
    {
        Rectangle rec1=new Rectangle();
        rec1.area(10, 20);
        Triangle tr1=new Triangle();
        tr1.area(30,10);
        Figure f1=new Figure();
        f1.area(10, 20);
    }
}
