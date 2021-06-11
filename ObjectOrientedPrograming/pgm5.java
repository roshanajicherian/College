import java.util.Scanner;

// Implement stack in java 
class myStack
{
    int[] stackArray=new int[10];
    int top=-1;
    Scanner sc= new Scanner(System.in);    
    public void push()
    {
        if(top==10-1)
            System.out.println("Overflow");
        System.out.print("Enter the element : ");
        int elt=sc.nextInt();
        stackArray[++top]=elt;
    }
    public void pop()
    {
        if(top==-1)
            System.out.println("Underflow");
        int elt= stackArray[top--];
        System.out.println(elt);
    }
    public int top()
    {
        return stackArray[top];
    }
}
public class pgm5 {
    public static void main(String[] args)
    {
        myStack s1=new myStack();
        s1.push();
        s1.push();
        s1.push();
        System.out.printf("TOP %d\n",s1.top());
        s1.pop();
        System.out.printf("TOP %d\n",s1.top());
    }
}
