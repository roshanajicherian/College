//Program : Question  13 (Gernerate the Fibonacci Series)
//Author : Roshan Aji Cherian
#include <stdio.h>
void printFibonaciSeries(int fibonaciSeries[], int n)
{
    int i = 0;
    for (i = 0; i < n; i++)
        printf("%d ", fibonaciSeries[i]);
    printf("\n");
}
void generateFibSeries(int n)
{
    int fibonaciSeries[n + 1];
    fibonaciSeries[0] = 0;
    fibonaciSeries[1] = 1;
    int i = 0;
    for (i = 2; i < n; i++)
        fibonaciSeries[i] = fibonaciSeries[i - 1] + fibonaciSeries[i - 2];
    printFibonaciSeries(fibonaciSeries, n);
}
int main()
{
    int n = 0;
    scanf("%d", &n);
    generateFibSeries(n);
    return 0;
}