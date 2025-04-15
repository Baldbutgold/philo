#include "philo.h"
#include <pthread.h>
#define n 2

int	count;
pthread_mutex_t mutex;

void	*write_code(void *coder)
{
	int	i = 0;
	while (i < 100000000)
	{
		pthread_mutex_lock(&mutex);
		count++;
		pthread_mutex_unlock(&mutex);
		i++;
	}
	return (NULL);
}

int	main()
{
	pthread_t a[n];
	int	i;

	pthread_mutex_init(&mutex, NULL);
	i = 0;
	while (i < n)
		if (pthread_create(&a[i++], NULL, write_code, NULL))
			return (printf("crashed at creation"), 1);
	i = 0;
	while (i < n)
		if (pthread_join(a[i++], NULL))
			return (printf("crashed at join"), 1);
	pthread_mutex_destroy(&mutex);
	i = 0;
	printf("%d\n", count);
}

/*int main(int ac, char **av)*/
/*{*/
/*	pthread_t	a;*/
/*	pthread_t	b;*/
/**/
/*	if (pthread_create(&a, NULL, write_code, NULL))*/
/*		return (1);*/
/*	if (pthread_create(&b, NULL, write_code, NULL))*/
/*		return (1);*/
/*	if (pthread_join(a, NULL))*/
/*		return (1);*/
/*	if (pthread_join(b, NULL))*/
/*		return (1);*/
/*	printf("%d\n", count);*/
/*}*/
