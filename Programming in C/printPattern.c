//Soltuion to the print patter problem
//Author : Roshan Aji Cherian
#include <stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d  ", j);
        }
        printf("\n");
    }
    return 0;
}