#include <pthread.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>

int mail = 0;
pthread_mutex_t	mutex;


void	*mails()
{
	int	i = 0;

	while (i < 10000)
	{
		pthread_mutex_lock(&mutex);
		mail++;
		i++;
		pthread_mutex_unlock(&mutex);
	}
	return (NULL);
}

int	main()
{
	pthread_t	th1, th2;

	pthread_mutex_init(&mutex, NULL);
	pthread_create(&th1, NULL, (void *)mails, NULL);
	pthread_create(&th2, NULL, (void *)mails, NULL);
	pthread_join(th1, NULL);
	pthread_join(th2, NULL);
	printf("mail %d\n", mail);
	pthread_mutex_destroy(&mutex);
}
