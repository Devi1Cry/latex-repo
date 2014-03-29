#define N 50

#include <sys/time.h>
#include <stdio.h>

int main()
{
	struct timeval gtodTimes[N];
	char *procClockTimes[N];
	FILE  *my_xtime;
	for(int i = 0; i < N; i++)
	{
		my_xtime = fopen("/proc/myxtime", "r");
		gettimeofday(&gtodTimes[i], 0);
		fgets(procClockTimes[i], 11, my_xtime);
		fclose(my_xtime);
	}

	for(int i = 0; i < N; i++)
	{
		printf("%ld %s", gtodTimes[i].tv_sec, procClockTimes[i]);
	} 
}
