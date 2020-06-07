//Program : Question 15 (To check if a numebr is a Strong number or not)
//Author : Roshan Aji Cherian
#include <stdio.h>
#include <stdbool.h>
typedef long long int lli;
lli factorial[9];
void preCompute()
{
    factorial[0] = 1, factorial[1] = 1;
    for (lli i = 2; i <= 9; i++)
        factorial[i] = factorial[i - 1] * i;
}
bool checkStrong(int n)
{
    if (n == 0)
        return false;
    int temp = n;
    int sum = 0;
    while (temp)
    {
        sum += factorial[temp % 10];
        temp = temp / 10;
    }
    if (sum == n)
        return true;
    else
        return false;
}
int main()
{
    preCompute();
    int n = 0;
    printf("Enter the number : ");
    scanf("%d", &n);
    if (checkStrong(n))
        printf("%d is a strong number\n", n);
    else
        printf("%d is not a strong number\n", n);
    return 0;
}
