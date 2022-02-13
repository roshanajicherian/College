#include <stdio.h>
#define MAX 10
int main()
{
    int n=0,processId[MAX],burstTime[MAX],waitingTime[MAX],turnAroundTime[MAX],temp=0;
    float averageWaitingTime=0.0,averageTurnAroundTime=0.0;
    printf("Enter the number of processes : ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("PID : ");
        scanf("%d",&processId[i]);
        printf("Burst Time : ");
        scanf("%d",&burstTime[i]);
    }
    // Bubble Sort the process based on burst time 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if(burstTime[j]>burstTime[j+1])
            {
                // Swapping burst times
                temp=burstTime[j];
                burstTime[j]=burstTime[j+1];
                burstTime[j+1]=temp;

                // Swapping Process IDS
                temp=processId[j];
                processId[j]=processId[j+1];
                processId[j+1]=temp;
            }
        }
        
    }
    printf("PID\tBurst Time\tWaiting Time\tTurnarond Time\n");
    for (int i = 0; i < n; i++)
    {
        waitingTime[i]=0;
        turnAroundTime[i]=0;
        for (int j = 0; j < i; j++)
        {
            waitingTime[i]+=burstTime[j];
        }
        turnAroundTime[i]=waitingTime[i]+burstTime[i];
        printf("%d\t\t%d\t\t%d\t%d\n",processId[i],burstTime[i],waitingTime[i],turnAroundTime[i]);
        averageWaitingTime+=waitingTime[i];
        averageTurnAroundTime+=turnAroundTime[i];
    }
    averageWaitingTime/=n;
    averageTurnAroundTime-=n;
    return 0;
}