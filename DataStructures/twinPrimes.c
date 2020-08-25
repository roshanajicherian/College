#include <stdio.h>
#include <stdbool.h>
bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main()
{
    printf("The twin primes till 100 are : \n");
    for (int i = 3; i <= 100; i++)
    {
        if ((i + 2 <= 100) && (isPrime(i)) && (isPrime(i + 2)))
            printf("(%d,%d)\n", i, i + 2);
    }

    return 0;
}