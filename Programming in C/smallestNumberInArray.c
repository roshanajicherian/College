#include <stdio.h>
#include <limits.h>
int main()
{
    //n=size of the array
    //A= Array to store the elements
    //minimumElement= Variable to store the minimum element in the array
    int n = 0;
    int minimumElement = INT_MAX; //intializing minimumElement to a high positive value
    printf("Enter n : ");
    scanf("%d", &n);
    int A[100];
    printf("Enter the array elements : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
        if (A[i] < minimumElement)
            minimumElement = A[i];
    }
    printf("The minimum value in the array is : %d\n", minimumElement);
    return 0;
}