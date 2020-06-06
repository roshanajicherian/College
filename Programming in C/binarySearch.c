#include <stdio.h>
int binarySearch(int A[], int n, int key)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (A[mid] == key)
            return mid;
        if (A[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
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
    printf("Enter the element to be searched : ");
    int key = 0;
    scanf("%d", &key);
    int res = binarySearch(A, n, key);
    if (res == -1)
        printf("Element not found\n");
    else
        printf("Element found at %d position\n", res);
    return 0;
}