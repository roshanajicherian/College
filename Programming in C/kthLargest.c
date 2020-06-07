#include <stdio.h>
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void bubbleSort(int A[], int n, int k)
{
    int i = 0, j = 0;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (A[j] < A[j + 1])
                swap(&A[j], &A[j + 1]);
        }
    }
    printf("The %d largest element in the array is : %d\n", k, A[k - 1]);
}
int main()
{
    int n = 0;
    printf("Enter the number of elements : ");
    scanf("%d", &n);
    int A[n];
    printf("Enter the array elements : ");
    for (int i = 0; i < n; i++)
        scanf("%d", &A[i]);
    printf("k : ");
    int k = 0;
    scanf("%d", &k);
    bubbleSort(A, n, k);
    return 0;
}