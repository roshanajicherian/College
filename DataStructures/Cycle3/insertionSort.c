#include <stdio.h>
#define MAX_SIZE 100
void insertionSort(int A[], int n)
{
    int key = 0, i = 0, j = 0;
    for (i = 1; i < n; i++)
    {
        key = A[i];
        j = i - 1;
        while (j >= 0 && A[j] > key)
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = key;
    }
    printf("The array in sorted order is : ");
    for (int i = 0; i < n; i++)
        printf("%d ", A[i]);
    printf("\n");
}
int main()
{
    int n = 0;
    printf("Enter the the number of elements of the array : ");
    scanf("%d", &n);
    int A[MAX_SIZE];
    for (int i = 0; i < n; i++)
        scanf("%d",&A[i]);
    insertionSort(A, n);
    return 0;
}