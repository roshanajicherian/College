#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

void  Child(void);
void  Parent(void);
int main(void) 
{
pid_t pid =fork();
if (pid == 0) 
Child();
else 
Parent();
}
void  Child(void)
{
printf("Child process is done \n");
}
void  Parent(void)
{
printf("Parent process is done \n");
}
