/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsever <gsever@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 20:47:09 by gsever            #+#    #+#             */
/*   Updated: 2022/09/05 21:05:30 by gsever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file philo_bonus.c
 * @author Görkem SEVER (gsever)
 * @brief 
 * @version 0.1
 * @date 2022-09-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "philo_bonus.h"

/**
 * @brief Philosopher's main function.
 * 
 * @return void
 * 
 * @param argc Arguman count from shell.
 * @param argv Arguman veriable from shell.
 * @param base Base structure from library.
 * 
 * @fn init_args_b()		: Argumanlari kontrol ediyoruz.
 * @fn init_philo()			: Philosopher's values entering.
 * @fn init_mutex()			: Creating mutex for thread's forks.
 * @fn init_philo_thread()	: Burada thread sonrasi lifecycle dongusu var.
 * @fn destroy_mutexes()	: Destorying mutexes.
 * @fn destory_threads()	: Destroying threads.
 * 
 * @bug Clear
 * @note --> init_sem_b() yapilacak burada kaldin, init_args_b() OK.
 */
void	philo_bonus(int argc, char **argv, t_base *base)
{
	init_args_b(argc, argv, base);
}