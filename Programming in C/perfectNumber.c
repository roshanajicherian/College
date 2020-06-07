//Program : Question 14 (To check if a numebr is a perfect number or not)
//Author : Roshan Aji Cherian
#include <stdio.h>
#include <stdbool.h>
bool checkPerfect(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
            sum += i;
    }
    if (sum == n)
        return true;
    else
        return false;
}
int main()
{
    int n = 0;
    printf("Enter the number : ");
    scanf("%d", &n);
    if (checkPerfect(n))
        printf("%d is a perfect number\n", n);
    else
        printf("%d is not a perfect number\n", n);
    return 0;
}