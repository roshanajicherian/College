#include <stdio.h>
#define MAX 30
int main()
{
    int n=0,quantumTime=0,burstTime[MAX],waitingTime[MAX],turnAroundTime[MAX],
    remainingBurstTime[MAX], count=0, temp=0, sq=0;
    float averageWaitingTime=0.0,averageTurnAroundTime=0.0;
    printf("Enter the number of proccess : ");
    scanf("%d",&n);
    printf("Enter the quantum time : ");
    scanf("%d",&quantumTime);
    for (int i = 0; i < n; i++)
    {
        printf("Burst Time : ");
        scanf("%d",&burstTime[i]);
        remainingBurstTime[i]=burstTime[i];
    }
    while(1)
    {
        for (int i = 0; i < n; i++)
        {
            temp=quantumTime;
            if(remainingBurstTime[i]==0)
            {
                count++;
                continue;
            }
            if(remainingBurstTime[i]>quantumTime)
            {
                remainingBurstTime[i]-=quantumTime;
            }    
            else
            {
                if(remainingBurstTime>=0)
                {
                    temp=remainingBurstTime[i];
                    remainingBurstTime[i]=0;
                }

            }
            sq+=temp;
            turnAroundTime[i]=sq;
        }
        
        if(n==count)
            break;
    }
    printf("PID\tBurst Time\tWaiting Time\tTurnarond Time\n");
    for (int i = 0; i < n; i++)
    {
        waitingTime[i]=turnAroundTime[i]-burstTime[i];
        averageTurnAroundTime+=turnAroundTime[i];
        averageWaitingTime+=waitingTime[i];
        printf("%d\t\t%d\t\t%d\t%d\n",i+1,burstTime[i],waitingTime[i],turnAroundTime[i]);
    }
    averageTurnAroundTime/=n;
    averageWaitingTime/=n;
    printf("Average Waiting Time : %f\n",averageWaitingTime);
    printf("Average Turnaround Time : %f\n",averageTurnAroundTime); 
    return 0;
}