#include <stdio.h>
#include <errno.h>
#include <unistd.h>
#include <linux/unistd.h>
#include <linux/time.h>
#define __NR_sys_my_xtime 333

int main() {
   int ret;
   struct timespec *current_time;
   ret = syscall(__NR_sys_my_xtime, current_time);
   if(ret)
      printf("Time is %ld ns.\n", current_time.tv_nsec);
   else
      printf("ret = %d, errno = %d\n", ret, errno);
   return 0;
}
