#include <stdio.h>
#define MAX 30
int main()
{
    int n=0,processId[MAX],burstTime[MAX],arrivalTime[MAX],waitingTime[MAX],
    turnAroundTime[MAX],temp=0;
    float averageWaitingTime=0.0,averageTurnAroundTime=0.0;
    printf("Enter the number of processes : ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("PID : ");
        scanf("%d",&processId[i]);
        printf("Burst Time : ");
        scanf("%d",&burstTime[i]);
        printf("Arrival Time : ");
        scanf("%d",&arrivalTime[i]);
    }
    
    return 0;
}