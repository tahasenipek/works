#include <sys/time.h>
#include <stdio.h>
#include <stdlib.h>

typedef	struct
{
	struct timeval	tv;
	long	s_time;
	long	ms;
}t_philo;


int	main()
{
	t_philo		*philo;

	philo = malloc(sizeof(t_philo));
	gettimeofday(&philo->tv, NULL);
	printf("seconds %ld\n microsecond : %d \n", philo->tv.tv_sec, philo->tv.tv_usec);
	philo->ms = (philo->tv.tv_sec * 1000) + (philo->tv.tv_usec / 1000);
	printf("ms %ld\n", philo->ms);
	return (0);
}