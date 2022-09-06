/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_all_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsever <gsever@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 20:49:16 by gsever            #+#    #+#             */
/*   Updated: 2022/09/06 12:24:28 by gsever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file init_all_bonus.c
 * @author Gorkem SEVER (gsever)
 * @brief 
 * @version 0.1
 * @date 2022-09-06
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "philo_bonus.h"

void	init_semaphore(t_base *base)
{
	sem_open()
}

/**
 * @brief Philosopher's values entering here.
 * 
 * @return void
 * @param base* 
 * @fn malloc()				: Bellekte yer aciyoruz.
 * @bug Clear.
 */
void	init_philo_b(t_base *base)
{
	int	i;

	base->philos = malloc(sizeof(t_philos) * base->philos_count);
	i = -1;
	while (++i < base->philos_count)
	{
		base->philos[i].base = base;
		base->philos[i].id = i + 1;
		base->philos[i].eat_count = 0;
		base->philos[i].last_eat_time = 0;
	}
}

/** -> * All OK *
 * @brief Checking args and initializing values for philos.
 * @param ac : For params are okay.
 * @param av** : For params values are okay.
 * @param base* : Getting main stuct.
 * @fn check_args : Checking args is true and initializing when checking.
 * @fn check_args_in_values : Checking args values.
 * @fn get_current_time()	: Simdiki zamani aliyoruz. 'ms' cinsinden.
 * @return void
 */
void	init_args_b(int ac, char **av, t_base *base)
{
	check_args_b(ac, av);
	base->philos_count = ft_atoi(av[1]);
	base->time_to_die = ft_atoi(av[2]);
	base->time_to_eat = ft_atoi(av[3]);
	base->time_to_sleep = ft_atoi(av[4]);
	base->must_eat = -1;
	// base->is_running = true;
	if (ac == 6)
		base->must_eat = ft_atoi(av[5]);
	check_args_in_values_b(base);
	// base->start_time = get_current_time_b();
}