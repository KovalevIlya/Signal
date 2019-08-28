#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

void main(void)
{
  pid_t pid;
  pid = getpid();
  printf("pid = %d", pid);
  printf("\n");
  while(1);
}
