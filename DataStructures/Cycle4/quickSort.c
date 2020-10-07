#include <stdio.h>
#define MAX_SIZE 100
void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int partition(int A[], int low, int high)
{
    int pivot = A[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++)
    {
        if (A[j] < pivot)
        {
            i++;
            swap(&A[i], &A[j]);
        }
    }
    swap(&A[i + 1], &A[high]);
    return (i + 1);
}

void quickSort(int A[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(A, low, high);

        quickSort(A, low, pi - 1);
        quickSort(A, pi + 1, high);
    }
}

void printArray(int A[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}
int main()
{
    int n = 0, i = 0;
    scanf("%d", &n);
    int A[MAX_SIZE];
    for (i = 0; i < n; i++)
        scanf("%d", &A[i]);
    quickSort(A, 0, n - 1);
    printf("Sorted array: \n");
    printArray(A, n);
    return 0;
}
