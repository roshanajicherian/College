//Program : Question 20 (Caluclte sum of n numbers under certain constrains)
//Author : Roshan Aji Cherian
#include <stdio.h>
int findSum(int n)
{
    int sum = 0, i = 0;
    if (n >= 0)
        for (i = n; i <= 2 * n; i++)
            sum += i;
    else
        for (i = 2 * n; i <= n; i++)
            sum += i;

    return sum;
}
int main()
{
    int n = 0;
    printf("Enter n : ");
    scanf("%d", &n);
    printf("Sum : %d\n", findSum(n));
    return 0;
}