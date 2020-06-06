#include <stdio.h>
#include <stdbool.h>
typedef long long int lli;
lli factorial[21];
void preCompute()
{
    factorial[0] = 1, factorial[1] = 1;
    for (lli i = 2; i <= 20; i++)
        factorial[i] = factorial[i - 1] * i;
}
bool isPrime(lli n)
{
    for (lli i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
lli nextPrime(lli n)
{
    lli prime = n;
    while (true)
    {
        prime++;
        if (isPrime(prime))
            return prime;
    }
}
void findSeriesResult(lli n)
{
    lli numerator = 2, denominator = 3;
    lli i = 0;
    float result = 0;
    for (i = 2; i <= n; i++)
    {
        result += (((float)numerator) / ((float)factorial[denominator]));
        denominator += 2;
        numerator = nextPrime(numerator);
    }
    result++; //Adding the first term  of the seriez which was not included in the above loop
    printf("Result : %f\n", result);
}
int main()
{
    preCompute();
    lli n = 0;
    printf("Enter n :");
    scanf("%d", &n);
    findSeriesResult(n);
    return 0;
}