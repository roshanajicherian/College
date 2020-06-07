//Program : Question 2 (Check if a number is odd or even)
//Author: Roshan Aji Cherian
#include <stdio.h>
int main()
{
    int number = 0;
    scanf("%d", &number);
    (number % 2 == 0) ? printf("Even\n") : printf("Odd\n");
    return 0;
}