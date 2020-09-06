#include <stdio.h>
int linearSearch(int A[], int n, int key)
{
    int i = 0;
    for (i = 0; i < n; i++)
    {
        if (A[i] == key)
            return i;
    }
    return -1;
}
int main()
{
    int n = 0, key = 0, i = 0;
    printf("Enter the number of elements in the array : ");
    scanf("%d", &n);
    int A[n];
    printf("Enter the array : ");
    for (i = 0; i < n; i++)
        scanf("%d", &A[i]);
    printf("Enter the element to be searched for : ");
    scanf("%d", &key);
    int index = linearSearch(A, n, key);
    if (index != -1)
        printf("Element found at index %d\n", index);
    else
        printf("Element not found\n");
    return 0;
}
