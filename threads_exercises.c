#include "philo.h"

void	*write_code(void *coder)
{
	printf("Is reading theory\n");
	sleep(2);
	printf("Code is Ready\n");
	return (NULL);
}

int main(int ac, char **av)
{
	pthread_t	abdou;
	pthread_t	mouad;
	pthread_t	ahmed;
	pthread_t	ayman;


	pthread_create(&abdou, NULL, write_code, NULL);
	pthread_create(&mouad, NULL, write_code, NULL);
	pthread_create(&ahmed, NULL, write_code, NULL);
	pthread_create(&ayman, NULL, write_code, NULL);

	pthread_join(abdou, NULL);
	// pthread_join(mouad, NULL);
	// pthread_join(ahmed, NULL);
	// pthread_join(ayman, NULL);
}