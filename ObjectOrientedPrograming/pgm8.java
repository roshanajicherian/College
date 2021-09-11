import java.util.Scanner;
import java.lang.Math;
public class pgm8 {
    static int addNumbers()
    {
        Scanner sc=new Scanner(System.in);
        int no1,no2;
        System.out.println("Enter the first no : ");
        no1=sc.nextInt();
        System.out.println("Enter the second no : ");
        no2=sc.nextInt();
        return no1+no2;
    }
    static int subtractNumbers()
    {
        Scanner sc=new Scanner(System.in);
        int no1,no2;
        System.out.println("Enter the first no : ");
        no1=sc.nextInt();
        System.out.println("Enter the second no : ");
        no2=sc.nextInt();
        return no1-no2;
    }
    static int multiplyNumbers()
    {
        Scanner sc=new Scanner(System.in);
        int no1,no2;
        System.out.println("Enter the first no : ");
        no1=sc.nextInt();
        System.out.println("Enter the second no : ");
        no2=sc.nextInt();
        return no1*no2;
    }
    static float divideNumbers()
    {
        Scanner sc=new Scanner(System.in);
        int no1,no2;
        System.out.println("Enter the first no : ");
        no1=sc.nextInt();
        System.out.println("Enter the second no : ");
        no2=sc.nextInt();
        return no1/no2;
    }
    static double findSquare()
    {
        Scanner sc=new Scanner(System.in);
        int no1;
        System.out.println("Enter the no : ");
        no1=sc.nextInt();
        return no1*no1;
    }
    static double squareRoot()
    {
        Scanner sc=new Scanner(System.in);
        double no1;
        System.out.println("Enter the no : ");
        no1=sc.nextInt();
        return Math.sqrt(no1);
    }
    static double findPower()
    {
        Scanner sc=new Scanner(System.in);
        int no1,no2;
        System.out.println("Enter the first no : ");
        no1=sc.nextInt();
        System.out.println("Enter the second no : ");
        no2=sc.nextInt();
        return Math.pow(no1, no2);
    }
    static int findFactorial()
    {
        Scanner sc=new Scanner(System.in);
        int no1;
        int res=1;
        System.out.println("Enter the no : ");
        no1=sc.nextInt();
        for (int i = 2; i <= no1; i++) 
            res=res*i;
        return res;       
    }
    public static void main(String[] args)
    {
        int choice=0;
        System.out.println("Enter the operation that you want to perform : ");
        System.out.println("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Square\n6.Square Root\n7.Factorial\n8.Power of a number\n9.Exit");
        System.out.println("Enter your choice : ");
        Scanner sc=new Scanner(System.in);
        choice=sc.nextInt();
        while(choice!=9)
        {
            switch(choice)
            {
                case 1:
                    System.out.printf("The sum of the two numbers is : %d\n",addNumbers());
                    break;
                case 2:
                    System.out.printf("The difference of the two numbers is : %d\n",subtractNumbers());
                    break;
                case 3:
                    System.out.printf("The product of the two numbers is : %d\n", multiplyNumbers());
                    break;
                case 4:
                    System.out.printf("The division of the two numbers is : %f\n",divideNumbers());
                    break;
                case 5:
                    System.out.printf("The square of the number is : %f\n",findSquare());
                    break;
                case 6:
                    System.out.printf("The square root of the numbers is : %f\n",squareRoot());
                    break;
                case 7:
                    System.out.printf("The factorial is  : %d\n",findFactorial());
                    break;
                case 8:
                    System.out.printf("The result is : %f\n",findPower());
                    break;
                case 9:
                    break;
            }
        System.out.println("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Square\n6.Square Root\n7.Factorial\n8.Power of a number\n9.Exit");
        System.out.println("Enter your choice : ");
        choice=sc.nextInt();
    }
        sc.close();
    }
}
