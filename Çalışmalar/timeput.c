#include <sys/time.h>
#include <stdio.h>



int main()
{
	struct timeval	cur_time;
	gettimeofday(&cur_time, NULL);
	printf("seconf %ld\n micro %d \n", cur_time.tv_sec, cur_time.tv_usec);

}