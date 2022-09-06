/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsever <gsever@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 20:47:09 by gsever            #+#    #+#             */
/*   Updated: 2022/09/06 16:48:19 by gsever           ###   ########.fr       */
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
 * @fn init_args_b()			: Argumanlari kontrol ediyoruz.
 * @fn init_philo_b()			: Philosopher's values entering.
 * @fn init_semaphore_b()		: Burada sem_open()'la semaphore olusturuyoruz.
 * @fn init_philo_process_b()	: 
 * @fn destroy_mutexes()		: Destorying mutexes.
 * @fn destory_threads()		: Destroying threads.
 * 
 * @bug Clear
 * @note --> init_sem_b() yapilacak burada kaldin, init_args_b() OK.
 */
void	philo_bonus(int argc, char **argv, t_base *base)
{
	printf("MAIN PID = %d\n", getpid());
	init_args_b(argc, argv, base);
	init_philo_b(base);
	init_semaphore_b(base);
	init_philo_process_b(base);
	while (1);
	// pthread_create(&env.checker, NULL, checker_function, &env);
	// pthread_detach(env.checker);
	// sem_wait(env.sem_done);
	// destroy(&env);
}