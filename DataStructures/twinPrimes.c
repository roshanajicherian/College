#include <stdio.h>
#include <stdbool.h>
bool isPrime(int n)
{
    int i=0;
    for (i = 2; i*i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main()
{
    int i=0;
    printf("The twin primes till 100 are : \n");
    for (i = 3; i <= 100; i++)
    {
        if ((i + 2 <= 100) && (isPrime(i)) && (isPrime(i + 2)))
            printf("(%d,%d)\n", i, i + 2);
    }

    return 0;
}