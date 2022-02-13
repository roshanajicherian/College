#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
int main()
{
  struct stat processStats;
  stat("./myFile.txt",&processStats);
  printf("File Size : %ld\nFile Mode : %o",processStats.st_size,processStats.st_mode);
  return 0;
}