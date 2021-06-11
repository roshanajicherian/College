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