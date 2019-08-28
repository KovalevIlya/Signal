#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>

void main(void)
{
  int a = 0, sig;
  pid_t pid;
  sigset_t fsig;
  pid = getpid();
  printf("pid = %d\n", pid);
  printf("a = %d\n", a);
  sigaddset(&fsig, SIGUSR1);
  sigprocmask(SIG_BLOCK, &fsig, NULL);
  while(1)
  {
    sigwait(&fsig, &sig);
    a++;
    printf("a = %d\n", a);
  }
}
