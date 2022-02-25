#include <stdio.h>
#define process 5
#define resource 3
int main()
{
    int allocation[process][resource], maximum[process][resource], needMatrix[process][resource];
    int avialable[resource], flagTable[process], answer[process];
    int index = 0;

    printf("Enter allocation matrix : \n");
    for (int i = 0; i < process; i++)
    {
        for (int j = 0; j < resource; j++)
            scanf("%d", &allocation[i][j]);
    }

    printf("Enter the maximum matrix : \n");
    for (int i = 0; i < process; i++)
    {
        for (int j = 0; j < resource; j++)
            scanf("%d", &maximum[i][j]);
    }

    printf("Enter avialable resources : ");
    for (int i = 0; i < 3; i++)
        scanf("%d", &avialable[i]);

    for (int i = 0; i < process; i++)
        flagTable[i] = 0;

    for (int i = 0; i < process; i++)
    {
        for (int j = 0; j < resource; j++)
            needMatrix[i][j] = maximum[i][j] - allocation[i][j];
    }
    for (int k = 0; k < process; k++)
    {
        for (int i = 0; i < process; i++)
        {
            if (flagTable[i] == 0)
            {
                int flag = 0;
                for (int j = 0; j < resource; j++)
                {
                    if (needMatrix[i][j] > avialable[j])
                    {
                        flag = 1;
                        break;
                    }
                }
                if (flag == 0)
                {
                    answer[index] = i;
                    index++;
                    for (int y = 0; y < resource; y++)
                        avialable[y] += allocation[i][y];
                    flagTable[i] = 1;
                }
            }
        }
    }
    int isSafe = 1;
    for (int i = 0; i < process; i++)
    {
        if (flagTable[i] == 0)
        {
            isSafe = 0;
            printf("The system is not safe.");
            break;
        }
    }
    if(isSafe = 1)
    {
        printf("The follwing is the safe sequence : ");
        for (int i = 0; i < process - 1; i++)
            printf(" P%d ->", answer[i]);
            printf(" P%d", answer[process - 1]);
    }

    return 0;
}