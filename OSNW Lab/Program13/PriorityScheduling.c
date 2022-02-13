#include <stdio.h>
#define MAX 30
int main()
{
    int n=0,processId[MAX],burstTime[MAX],priority[MAX],
    waitingTime[MAX],turnAroundTime[MAX],temp=0;
    float averageWaitingTime=0.0,averageTurnAroundTime=0.0;
    printf("Enter the number of processes : ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("PID : ");
        scanf("%d",&processId[i]);
        printf("Burst Time : ");
        scanf("%d",&burstTime[i]);
        printf("Priority : ");
        scanf("%d",&priority[i]);
    }
    // Sorting the processes based on priority
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if(priority[j]>priority[j+1])
            {
                temp=priority[j];
                priority[j]=priority[j+1];
                priority[j+1]=temp;

                temp=processId[j];
                processId[j]=processId[j+1];
                processId[j+1]=temp;
                
                temp=burstTime[j];
                burstTime[j]=burstTime[j+1];
                burstTime[j+1]=temp;
            }
        }
        
    }
    printf("PID\tPriority\tBurst Time\tWaiting Time\tTurnarond Time\n");
    for (int i = 0; i < n; i++)
    {
        waitingTime[i]=0;
        turnAroundTime[i]=0;
        for (int j = 0; j < i; j++)
        {
            waitingTime[i]+=burstTime[j];
        }
        turnAroundTime[i]=waitingTime[i]+burstTime[i];
        printf("%d\t\t%d\t\t%d\t\t%d\t%d\n",processId[i],priority[i],burstTime[i],waitingTime[i],turnAroundTime[i]);
        averageWaitingTime+=waitingTime[i];
        averageTurnAroundTime+=turnAroundTime[i];
    }
    averageWaitingTime/=n;
    averageTurnAroundTime/=n;
    printf("Average Waiting Time : %f",averageWaitingTime);
    printf("Average Turnaround Time : %f",averageTurnAroundTime);    
    return 0;
}