#include "philo.h"

int validate_args(int ac, char **av)
{
    int i;
    int j;

    if (ac < 5 || ac > 6)
        return (ft_putendl_fd("Error: Invalid number of arguments.", 2), FALSE);
        
    i = 1;
    while (i < ac)
    {
        j = 0;
        while (av[i][j])
        {
            if (!isdigit(av[i][j]))
                return (ft_putendl_fd("Error: Arguments must be positive integers.", 2), FALSE);
            j++;
        }
        i++;
    }
    return (TRUE);
}