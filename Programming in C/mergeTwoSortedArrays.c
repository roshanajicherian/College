#include <stdio.h>
void mergeArrays(int A[], int B[], int finalArray[], int n1, int n2)
{
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2)
    {
        if (A[i] < B[j])
            finalArray[k++] = A[i++];
        else
            finalArray[k++] = B[j++];
    }
    while (i < n1)
        finalArray[k++] = A[i++];
    while (j < n2)
        finalArray[k++] = B[j++];
}
int main()
{
    int n1 = 0, n2 = 0;
    printf("Enter the number of elementns in the first array : ");
    scanf("%d", &n1);
    printf("Enter the number of elementns in the second array : ");
    scanf("%d", &n2);
    int A[n1], B[n2];
    printf("Enter the first array : ");
    for (int i = 0; i < n1; i++)
        scanf("%d", &A[i]);
    printf("Enter the second array : ");
    for (int i = 0; i < n2; i++)
        scanf("%d", &B[i]);
    int finalArray[n1 + n2];
    //Arrays are always passed by refernece.
    //Therfore result will be stored in finalArray
    mergeArrays(A, B, finalArray, n1, n2);
    printf("The merged array is : ");
    for (int i = 0; i < n1 + n2; i++)
    {
        printf("%d ", finalArray[i]);
    }
    printf("\n");
    return 0;
}