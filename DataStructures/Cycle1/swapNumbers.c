#include <stdio.h>
int main()
{
    int number1 = 0, number2 = 0;
    printf("Enter the first number : ");
    scanf("%d", &number1);
    printf("Enter the second number : ");
    scanf("%d", &number2);
    printf("The numbers before swapping\n");
    printf("Number 1 : %d\n", number1);
    printf("Number 2 : %d\n", number2);
    int *pointer1 = &number1, *pointer2 = &number2;
    int temp = 0;
    temp = *pointer1;
    *pointer1 = *pointer2;
    *pointer2 = temp;
    printf("The numbers after swapping\n");
    printf("Number 1 : %d\n", number1);
    printf("Number 2 : %d\n", number2);
}