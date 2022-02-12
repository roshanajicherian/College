#include <stdio.h>
#include <unistd.h>
int main()
{
  printf("exec2.c program is being executed. PID = %d\n",getpid());
  return 0;
}
