#include <stdio.h>
//Program to find the largest of three numbers
//Author : Roshan Aji Cherian
int main()
{
    int number1 = 0, number2 = 0, number3 = 0;
    //Inputing the three numbers
    printf("First Number : ");
    scanf("%d", &number1);
    printf("Second Number : ");
    scanf("%d", &number2);
    printf("Third Number : ");
    scanf("%d", &number3);
    //Checking if number1 is the largest
    if (number1 >= number2 && number2 >= number3)
        printf("%d is the largest number\n", number1);
    //Checking if number2 is the largest
    else if (number2 >= number1 && number2 >= number3)
        printf("%d is the largest number\n", number2);
    //Checking if number3 is the largest
    else if (number3 >= number1 && number3 >= number2)
        printf("%d is the largest number\n", number3);
    return 0;
}