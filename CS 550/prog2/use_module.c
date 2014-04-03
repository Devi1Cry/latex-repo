#define N 50

#include <sys/time.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	struct timeval gtodTimes[N];
	char *procClockTimes[N];
	FILE  *my_xtime;
	for(int i = 0; i < N; i++)
	{
		my_xtime = fopen("/proc/myxtime", "r");
		if(my_xtime == NULL)
		{
			printf("File pointer null.");
			return 1;
		} 
		/* printf("Iteration %d.\n", i);  */
		gettimeofday(&gtodTimes[i], 0);
		procClockTimes[i] = malloc(sizeof(char)*22);
		fgets(procClockTimes[i], 22, my_xtime);
		fclose(my_xtime);
	}
	//printf("Now outputting results.\n");
	for(int i = 0; i < N; i++)
	{
		printf("%ld %ld | %s\n", 
		       gtodTimes[i].tv_sec,gtodTimes[i].tv_usec, 
		       procClockTimes[i]);
		free(procClockTimes[i]);
	} 
}
