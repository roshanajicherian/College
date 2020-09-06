#include <stdio.h>
int main()
{
    int number1 = 0, number2 = 0;
    printf("Enter the first number : ");
    scanf("%d", &number1);
    printf("Enter the second number : ");
    scanf("%d", &number2);
    int *pointer1 = NULL, *pointer2 = NULL;
    pointer1 = &number1, pointer2 = &number2;
    printf("The sum of the two numbers is : %d\n", *pointer1 + *pointer2);
    return 0;
}