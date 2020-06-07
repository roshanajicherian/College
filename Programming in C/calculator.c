//Program : Question 12 (Implement menu driven calculator)
//Author : Roshan Aji Cherian
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int number1 = 0, number2 = 0;
    printf("Enter the numbers : ");
    scanf("%d%d", &number1, &number2);
    printf("Enter the opertation to be performed \n");
    printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
    int choice = 0;
    printf("Choice : ");
    scanf("%d", &choice);
    printf("Result : ");
    switch (choice)
    {
    case 1:
        printf("%d\n", number1 + number2);
        break;
    case 2:
        printf("%d\n", number1 - number2);
        break;
    case 3:
        printf("%d\n", number1 * number2);
        break;
    case 4:
        if (number2 == 0)
            printf("Division by zero undefined \n");
        else
            printf("%d\n", number1 / number2);
        break;
    default:
        printf("Invalid choice\n");
        break;
    }
    return 0;
}