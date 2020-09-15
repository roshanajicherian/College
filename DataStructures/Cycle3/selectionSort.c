#include <stdio.h>
#define MAX_SIZE 100
void selctionSort(int A[], int n)
{

    int i = 0, j = 0, minimumIndex = 0;
    for (i = 0; i < n - 1; i++)
    {
        minimumIndex = i;
        for (j = i+1; j < n; j++)
        {
            if (A[j] < A[minimumIndex])
                minimumIndex = j;
        }
        int temp = A[minimumIndex];
        A[minimumIndex] = A[i];
        A[i] = temp;
    }
    printf("The array in sorted order is : ");
    for (i = 0; i < n; i++)
        printf("%d ", A[i]);
    printf("\n");
}
int main()
{
    int n = 0;
    int A[MAX_SIZE];
    printf("Enter the number of the elements of the array : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &A[i]);
    selctionSort(A, n);
    return 0;
}