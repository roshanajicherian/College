<<<<<<< HEAD
import java.util.Scanner;

public class pgm6 {
    static int findFactorial(int n)
    {
        if (n==0)
            return 1;
        else
            return n*findFactorial(n-1);
    }
    public static void main(String[] args) {

        int x;
        Scanner sc=new Scanner(System.in);
        System.out.printf("Enter the number : ");
        x=sc.nextInt();
        System.out.printf("The factorial of %d is %d",x,findFactorial(x));
        sc.close();
    }
}
=======
class AreaCalculator
{
    public void area(int a)
    {
        System.out.printf("The area of the square is : %d\n",a*a);
    }
    public void area(int l,int b)
    {
        System.out.printf("The area of the rectangle is : %d\n",l*b);
    }
    public void area(double r)
    {
        float PI=3.14f;
        System.out.printf("The area of the circle is : %f\n",PI*r*r);
    }
}
public class pgm6
{
    public static void main(String[] args)
    {
        AreaCalculator myObj=new AreaCalculator();
        myObj.area(5);
        myObj.area(5,10);
        myObj.area(5.5);
    }
}
>>>>>>> dad57285ecc338e98b96b72b3aa0965c597d296b
