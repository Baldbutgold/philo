/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hadj <ael-hadj@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 01:26:20 by ael-hadj          #+#    #+#             */
/*   Updated: 2025/04/14 01:26:47 by ael-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <stdio.h>


#define TRUE 1
#define FALSE 0

typedef struct s_data
{
    int		num_philos;
    int		time_to_die;
    int		time_to_eat;
    int		time_to_sleep;
    int		num_meals;
}	t_data;

void    ft_putstr(char *s);
int     ft_putchar(char c);
void    ft_putendl_fd(char *s, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);


#endif
