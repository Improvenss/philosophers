/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_all_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsever <gsever@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 20:49:16 by gsever            #+#    #+#             */
/*   Updated: 2022/09/05 21:07:06 by gsever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo_bonus.h"

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