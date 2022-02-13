// Program to implement FCFS Scheduling with arrival time 
#include <stdio.h>
#define MAX 30
int main()
{
    int n=0,burstTime[MAX],arrivalTime[MAX],waitingTime[MAX],turnAroundTime[MAX],temp[MAX];
    float averageWaitingTime=0.0,averageTurnAroundTime=0.0;
    printf("Enter the number of proccess : ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("Burst Time : ");
        scanf("%d",&burstTime[i]);
        printf("Arrival Time : ");
        scanf("%d",&arrivalTime[i]);
    }
    temp[0]=0;
    printf("PID\tBurst Time\tArrival Time\tWaiting Time\tTurnarond Time\n");
    for (int i = 0; i < n; i++)
    {
        waitingTime[i]=0;
        turnAroundTime[i]=0;
        temp[i+1]=temp[i]+burstTime[i];
        waitingTime[i]=temp[i]-arrivalTime[i];
        turnAroundTime[i]=burstTime[i]+waitingTime[i];
        averageWaitingTime+=waitingTime[i];
        averageTurnAroundTime+=turnAroundTime[i];
        printf("%d\t\t%d\t\t%d\t\t%d\t%d\n",i+1,burstTime[i],arrivalTime[i],waitingTime[i],turnAroundTime[i]);
    }
    averageWaitingTime/=n;
    averageTurnAroundTime/=n;
    printf("Average Waiting Time : %f\n",averageWaitingTime);
    printf("Average Turnaround Time : %f\n",averageTurnAroundTime);        
    return 0;
}