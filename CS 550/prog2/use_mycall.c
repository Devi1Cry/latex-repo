#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <unistd.h>
#include <linux/unistd.h>
#define __NR_my_xtime 314

int main() {
   int ret;
   struct timespec *current_time = malloc(sizeof(struct timespec));
   ret = syscall(__NR_my_xtime, current_time);
   if(ret==0)
      printf("Time is %ld ns.\n", current_time->tv_nsec);
   else
      printf("ret = %d, errno = %d\n", ret, errno);
   return 0;
}
