#include <stdio.h>
#define MAX 30
int main()
{
    int n = 0, m = 0; // n - No.of processes m- No. of memory blocks
    int processList[MAX], memoryBlock[MAX], allocation[MAX];
    for (int i = 0; i < MAX; i++)
        allocation[i] = -1;
    printf("Enter the number of processes : ");
    scanf("%d", &n);
    printf("Enter the number of memory block : ");
    scanf("%d", &m);
    printf("Enter the process list : ");
    for (int i = 0; i < n; i++)
        scanf("%d", &processList[i]);
    printf("Enter the memory block size : ");
    for (int i = 0; i < m; i++)
        scanf("%d", &memoryBlock[i]);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (memoryBlock[j] >= processList[i])
            {
                allocation[i] = j;
                memoryBlock[j] -= processList[i];
                break;
            }
        }
    }
    printf("\nPID.\tProcess Size\tBlock no.\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t%d\t",i+1,processList[i]);
        if(allocation[i]!=-1)
        {
            printf("%d\n",allocation[i]+1);
        }
        else 
            printf("Not allocated\n");
    }
    return 0;
}