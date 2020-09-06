#include <stdio.h>
void solve(int n)
{
    int res = 0,i=0,fac=1;
    for (i = 1; i <= n; i++)
    {
        fac *= i;
        res += (fac / i);
    }
    printf("The value of the expression till %d is %d\n", n, res);
}
int main()
{
    int n = 0;
    printf("Enter n : ");
    scanf("%d", &n);
    solve(n);
    return 0;
}