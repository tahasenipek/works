#include <pthread.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>

typedef	struct
{
	long			mil_sn;
	struct timeval	*tv;
}t_thread;

void	*myturn()
{
	int i = 0;
	while (i < 10)
	{
		sleep(1);
		printf("myturn\n");
		i++;
	}
	return NULL;
}

void	*yourturn()
{
	int i = 0;
	while(i < 10)
	{
		sleep(1);
		printf("your turn\n");
		i++;
	}
	return NULL;
}

/* void	babythread(pthread_t th1, pthread_t th2)
{
	while (1)
	{
		pthread_create(&th1, NULL, (void *)myturn, NULL);
		pthread_create(&th2, NULL, (void *)yourturn, NULL);
	}	
} */

int main()
{
	pthread_t	th1, th2;

	//mybabythread(th1, th2);
	pthread_create(&th1, NULL, (void *)myturn, NULL);
	pthread_create(&th2, NULL, (void *)yourturn, NULL);
	pthread_join(th1, NULL);
	pthread_join(th2, NULL);
}
