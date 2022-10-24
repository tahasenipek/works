#include <pthread.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>

void	*myturn()
{
	while (1)
	{
		sleep(1);
		printf("myturn\n");
	}
	return (NULL);
}

void	*yourturn()
{
	while(1)
	{
		sleep(1);
		printf("yourturn\n");
	}
	return NULL;
}
/* 
 void	new(pthread_t th, pthread_t th1)
{
	while (1)
	{
		sleep(1);
		
	}
}  */

int main()
{
	pthread_t	th, th1;

	pthread_create(&th, NULL, (void *) myturn, NULL);
	pthread_create(&th1, NULL, (void *) yourturn, NULL );
	pthread_join(th, NULL);
	pthread_join(th1, NULL);
}