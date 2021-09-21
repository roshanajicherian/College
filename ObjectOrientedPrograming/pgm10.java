class Shape
{
    public class Circle
    {
        public void Draw()
        {
            System.out.println("Inside Draw function of circle");
        }
        public void Erase()
        {
            System.out.println("Inside Erase function of circle");
        }
    }
    public class Square
    {
        public void Draw()
        {
            System.out.println("Inside Draw function of square");

        }
        public void Erase()
        {
            System.out.println("Inside Erase function of square");
            
        }
    }
    public class Triangle
    {
        public void Draw()
        {
            System.out.println("Inside Draw function of triangle");
        }
        public void Erase()
        {
            System.out.println("Inside Erase function of triangle");
            
        }
    }

}
public class pgm10 {
    public static void main(String args[])
    {
        Shape obj1=new Shape();
        Shape.Circle obj2=obj1.new Circle();
        Shape.Square obj3=obj1.new Square();
        Shape.Triangle obj4=obj1.new Triangle();
        obj2.Draw();
        obj2.Erase();
        obj3.Draw();
        obj3.Erase();
        obj4.Draw();
        obj4.Erase();
    }
}
