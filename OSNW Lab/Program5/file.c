#include <stdio.h>
#include<sys/stat.h>
#include <fcntl.h>
#include<unistd.h>
int main(void) {
int fd,n,sw,fd2;
char buff[30];
fd = open("new.txt",O_CREAT | O_RDWR ,0777);
fd2=  open("new2.txt",O_RDWR,0777);
n=read(fd2,buff,12);
printf("Bytes read from new2 =%d\n",n);
sw=write(fd,"SECOND LINE",11);
printf("No of bytes Written in new %d\n",sw);
close(fd);
close(fd2);
return 0;
  }