#include <stdio.h>
//Program to find the sum of first n odd numbers
//Author: Roshan Aji Cherian

int main()
{
    int n = 0;
    scanf("%d", &n);
    int i = 1, count = 0, sum = 0;
    //Loop to traverse through the odd numbers
    for (i = 1; count < n; i += 2)
    {
        sum += i; //Adding to the sum each odd number
        count++;
    }
    printf("Sum of first %d numbers : %d\n", n, sum);
    return 0;
}