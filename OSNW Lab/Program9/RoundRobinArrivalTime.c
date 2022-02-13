#include <stdio.h>
#define MAX 30
int main()
{
    int n=0,burstTime[MAX],arrivalTime[MAX],timeQuantum=0,time=0,isCompleted=0,
    waitingTimeInter,turnAroundTimeInter,remainBurstTime[MAX];
    float averageWaitingTime=0.0,averageTurnaroundTime=0.0;
    printf("Enter the number of proccess : ");
    scanf("%d",&n);
    printf("Enter the time quantum : ");
    scanf("%d",&timeQuantum);
    for (int i = 0; i < n; i++)
    {
        printf("Burst Time : ");
        scanf("%d",&burstTime[i]);
        remainBurstTime[i]=burstTime[i];
        printf("Arrival Time : ");
        scanf("%d",&arrivalTime[i]);
    }
    int remain=n;
    printf("PID\tBurst Time\tArrival Time\tWaiting Time\tTurnarond Time\n");
    for(int i=0;remain!=0;)
    {
        // Case 1: The time required for the execution of the process is 
        // less than the time quantum
        if(remainBurstTime[i]<=timeQuantum && remainBurstTime[i]>0)
        {
            time+=remainBurstTime[i];
            remainBurstTime[i]=0;
            isCompleted=1;
        }
        // Case 2 : The time required for the exection of the process is
        // more than the time quantum
        else if(remainBurstTime[i]>timeQuantum && remainBurstTime>0)
        {
            time+=timeQuantum;
            remainBurstTime[i]-=timeQuantum;
        }
        // Calculation after the process has completed 
        if(remainBurstTime[i]==0 && isCompleted==1)
        {
            remain--;
            waitingTimeInter=time-arrivalTime[i]-burstTime[i];
            turnAroundTimeInter=time-arrivalTime[i];
            averageWaitingTime+=waitingTimeInter;
            averageTurnaroundTime+=turnAroundTimeInter;
            isCompleted=0;
            printf("%d\t\t%d\t\t%d\t\t%d\t%d\n",i+1,burstTime[i],arrivalTime[i],waitingTimeInter,turnAroundTimeInter);
        }
        if(i==n-1)
            i=0;
        else if(arrivalTime[i+1]<=time)
            i++;
        else
            i=0;
    }
    averageWaitingTime/=n;
    averageTurnaroundTime/=n;
    printf("Average Waiting Time : %f\n",averageWaitingTime);
    printf("Average Turnaround Time : %f\n",averageTurnaroundTime); 
    return 0;
}