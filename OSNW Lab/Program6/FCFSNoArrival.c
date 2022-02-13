// Program to implement FCFS Scheduling with no arrival time 

#include <stdio.h>
#define MAX 30
int main()
{
  int n=0,burstTime[MAX],waitingTime[MAX],turnAroundTime[MAX];
  float averageWaitingTime=0.0,averageTurnAroundTime=0.0;
  printf("Enter the number of process : ");
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  {
    printf("Burst Time : ");
    scanf("%d",&burstTime[i]);
  }
  printf("Process ID\tBurst Time\tWaiting Time\tTurnaround Time\n");
  for(int i=0;i<n;i++)
  {
    waitingTime[i]=0;
    turnAroundTime[i]=0;
    for(int j=0;j<i;j++)
    {
      waitingTime[i]=waitingTime[i]+burstTime[j];
    }
    turnAroundTime[i]=waitingTime[i]+burstTime[i];
    printf("%d\t\t\t%d\t\t\t%d\t\t\t\t%d\n",i+1,burstTime[i],waitingTime[i],turnAroundTime[i]);
    averageWaitingTime=averageWaitingTime+waitingTime[i];
    averageTurnAroundTime=averageTurnAroundTime+turnAroundTime[i];
  }
  averageWaitingTime/=n;
  averageTurnAroundTime/=n;
  printf("Average Waiting Time : %f\n",averageWaitingTime);
  printf("Average Turnaround Time : %f\n",averageTurnAroundTime);
  return 0;
}