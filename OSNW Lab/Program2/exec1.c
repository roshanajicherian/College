#include <stdio.h>
#include <unistd.h>
int main()
{
  printf("exec1.c program is being executed. PID = %d\n",getpid());
  // exec system call is used to change the contents 
  // of a process to a another file execv command takes in two arguments
  // 1. Path of the file to be executed
  // 2. Arguments to be passed to the program to be executed
  char *args[]={NULL};
  execv("./exec2",args);
  return 0;
}
