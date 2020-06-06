#include <stdio.h>
typedef long long int lli;
lli factorial[21];
void preCompute()
{
    factorial[0] = 1, factorial[1] = 1;
    for (lli i = 2; i <= 20; i++)
        factorial[i] = factorial[i - 1] * i;
}
float power(lli x, lli y)
{
    lli res = 1;
    for (lli i = 0; i < y; i++)
        res = res * x;
    return res;
}
void seriesCalculate(lli n)
{
    lli factor = 1, i = 0;
    float result = 0;
    for (i = 1; i <= n; i++, factor += 2)
    {
        if (i == 2)
        {
            result -= ((float)(power(n, factor)) / ((float)factorial[factor]));
            continue;
        }
        result += ((float)power(n, factor)) / ((float)(factorial[factor]));
    }
    printf("Result : %f\n", result);
}
int main()
{
    preCompute();
    lli n = 0;
    printf("Enter n : ");
    scanf("%d", &n);
    seriesCalculate(n);
    return 0;
}