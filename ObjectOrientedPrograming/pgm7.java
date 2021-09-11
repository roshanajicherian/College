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