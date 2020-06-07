//Program : Question 21 (To calculate the areas of various shapes)
//Author : Roshan Aji Cherian
#include <stdio.h>
#define PI 3.14
void circleArea()
{
    int r = 0;
    printf("Enter the radius : ");
    scanf("%d", &r);
    printf("Area of the circle is : %f\n", (PI * r * r));
}
void triangleArea()
{
    int breadth = 0, height = 0;
    printf("Breadth : ");
    scanf("%d", &breadth);
    printf("Height : ");
    scanf("%d", &height);
    printf("Area of the triangle is : %f\n", (0.5 * breadth * height));
}
void rectangleArea()
{
    int length = 0, breadth = 0;
    printf("Length : ");
    scanf("%d", &length);
    printf("Breadth : ");
    scanf("%d", &breadth);
    printf("Area of the rectangle is : %f\n", (length * breadth));
}
void sqaureArea()
{
    int length = 0;
    printf("Length : ");
    scanf("%d", &length);
    printf("Area of the square is : %f\n", (length * length));
}
int main()
{
    int choice = 0;
    printf("Enter your choice :\n");
    printf("1.Circle\n2.Triangle\n3.Rectangle\n4.Square\n");
    scanf("%d", &choice);
    switch ((choice))
    {
    case 1:
        circleArea();
        break;
    case 2:
        triangleArea();
        break;
    case 3:
        rectangleArea();
        break;
    case 4:
        sqaureArea();
        break;
    default:
        printf("Invalid Choice\n");
        break;
    }
    return 0;
}