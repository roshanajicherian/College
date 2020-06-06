#include <stdio.h>
void findFactors(int n)
{
    int i = 0;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
            printf("%d ", i);
    }
    printf("\n");
}
int main()
{
    int n = 0;
    scanf("%d", &n);
    printf("The factors of %d are : ", n);
    findFactors(n);
    return 0;
}