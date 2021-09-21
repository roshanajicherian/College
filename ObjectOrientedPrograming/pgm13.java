abstract class A
{
    public abstract void disp();
}
class B extends A
{
    public void disp()
    {
        System.out.println("Call from B for a function defined in abstract class A");
    }
}
public class pgm13 {
    public static void main(String args[])
    {
        B obj1=new B();
        obj1.disp();
    }
}
