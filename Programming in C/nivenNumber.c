//Program : Question 17 (Program to check if the given number is Niven or not)
//Author: Roshan Aji Cherian
#include <stdio.h>
#include <stdbool.h>
bool checkNiven(int n)
{
    if (n == 0)
        return false;
    int temp = n, sum = 0;
    while (temp)
    {
        sum += (temp % 10);
        temp = temp / 10;
    }
    if (n % sum == 0)
        return true;
    else
        return false;
}
int main()
{
    int n = 0;
    printf("Enter the number : ");
    scanf("%d", &n);
    if (checkNiven(n))
        printf("%d is a Niven number\n", n);
    else
        printf("%d is not a Niven number\n", n);
    return 0;
}