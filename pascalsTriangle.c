//Program to generate the Pascal's Triangle
//Author : Roshan Aji Cherian
#include <stdio.h>
void generatePascalsTriangle(int n)
{
    int pascal[n + 1][n + 1];
    pascal[0][0] = 1;
    int i = 0;
    for (i = 1; i < n; i++)
    {
        pascal[i][0] = pascal[i][i] = 1;
        int j = 0;
        for (j = 1; j < i; j++)
        {
            pascal[i][j] = pascal[i - 1][j] + pascal[i - 1][j - 1];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", pascal[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int n = 0;
    scanf("%d", &n);
    generatePascalsTriangle(n);
    return 0;
}