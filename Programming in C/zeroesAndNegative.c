//Program : Question 24 (Count zeroes and negative numbers in an arraqy )
//Author : Roshan Aji Cherian
#include <stdio.h>
#define MAX 1000
int main()
{
    int n = 0, zeroCount = 0, negativeCount = 0;
    int A[MAX];
    printf("Ente the size of the array : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
        if (A[i] == 0)
            zeroCount++;
        if (A[i] < 0)
            negativeCount++;
    }
    printf("Zero Count : %d\n", zeroCount);
    printf("Negative Count : %d\n", negativeCount);
    return 0;
}