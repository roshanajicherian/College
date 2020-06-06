#include <stdio.h>
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return true;
    }
    return false;
}
int main()
{
    int number = 0;
    scanf("%d", number);
    if (isPrime(number))
        printf("The number is prime\n");
    else
        printf("The number is not prime\n");
    return 0;
}