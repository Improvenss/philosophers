/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo_bonus.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsever <gsever@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 18:33:22 by gsever            #+#    #+#             */
/*   Updated: 2022/09/05 20:58:03 by gsever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/** @file philosophers.h
 * @brief Library for 'philosophers' project.
 * @author Görkem SEVER (gsever)
 * @bug Not know bugs.
 */

#ifndef PHILOSOPHERS_H
# define PHILOSOPHERS_H

//	STANDARD LIBRARY INCLUDES
# include <unistd.h> /*
	write()		-> System call used to write data from the buffer,
	fork()		-> Create thread from process. */
# include <stdlib.h> /*
	free()		-> Deallocatig all allocated memory,
	exit()		-> Closing everything with atexit() and terminates program. */
# include <stdio.h> /*
	printf()	-> A library function to send formatted output to the screen. */
# include <signal.h> /*
	kill()		-> Close process from PID. */
# include <stdint.h> /*
	Type	 	Name		Num_Bytes	Num_Bits	Integer_Range
	int8_t	 ->	char			1			8		-128 to 127,
	int16_t	 ->	short			2			16		-32768 to 32767,
	int32_t	 ->	int				4			32		-2147483648 to 2147483647,
	int64_t	 ->	long long		8			64		-9.223372e+18 to 9.223372e+18
	uint8_t	 ->	unsigned char	1			8			0 to 255,
	uint16_t ->	unsigned short	2			16			0 to 65535,
	uint32_t ->	unsigned int	4			32			0 to 4294967295,
	uint64_t ->	unsigned l_l 	8			64		0 to 18446744073709551615 */
# include <stdbool.h>
# include <errno.h>
# include <limits.h>
# include <string.h> /*
	memset()	-> Filling memory allocated with a value we want,
	malloc()	-> Allocating memory with NULL. */
# include <sys/types.h>
# include <sys/time.h> /*
	gettimeofday() */
# include <pthread.h> /*Mendatory part:
	pthread_create() -> Create process for one function,
	pthread_detach() -> Thread'la isimiz bittiginde bunu geri ,
	pthread_join()	 -> p_create ile gorevlendigimiz thread'i calistirmaya yariyor,
	pthread_mutex_init(),
	pthread_mutex_destroy(),
	pthread_mutex_lock(),
	pthread_mutex_unlock() */
# include <semaphore.h> /* Bonus part:
	sem_open(),
	sem_close(),
	sem_post(),
	sem_wait(),
	sem_unlink() */

//	ACTIONS --> 🍽 💤 💭 🍴 💀
# define STR_EAT "is eating"
# define STR_SLEEP "is sleeping"
# define STR_THINK "is thinking"
# define STR_TOOK_FORK "has taken a fork"
# define STR_DEAD "died"

//	COLORS --> 🟥 🟩 🟦
# define LB		"\033[0;36m"
# define BLUE	"\033[0;34m"
# define YELLOW	"\033[0;33m"
# define GREEN	"\033[0;32m"
# define RED	"\033[0;31m"
# define RESET	"\033[0m"
# define X		"\033[m"

/* ************************************************************************** */
/* STRUCT DEFINES AREA													  	  */
/* ************************************************************************** */

typedef struct s_base	t_base;
typedef struct s_philo	t_philo;

/**
 * @brief Holding number, number is actions.
 */
typedef enum s_state
{
	EAT,
	SLEEP,
	THINK,
	TOOK_FORK,
	DEAD
}		t_state;

/**
 * @brief This struct for just one philosopher.
 * @param base*		OK:	Main event BRUH.
 * @param id			OK:	Philosopher's turn id.
 * @param eat_count		OK:	How many times eated.
 * @param last_eat_time	OK:	Elapsed time since the philosopher last ate.
 */
typedef struct s_philos
{
	t_base		*base;
	int			id;
	int			eat_count;
	uint64_t	last_eat_time;
}		t_philos;

/**
 * @brief This struct for main cycle.
 * @param philos*		OK:	Creates a Philosopher.
 * @param checker			Checker's thread.
 * @param sem_forks*		The philo's count forks.
 * @param sem_write*		Write command's semaphore.
 * @param sem_done*			If finished eating or died philosopher.
 * @param philos_pid*		Holding in array philosopher's pid number.
 * @param philos_count	OK: The amount of philosophers we have.
 * @param time_to_die	OK: The time the philosophers take to die.
 * @param time_to_eat	OK: The time the philosophers take to eat.
 * @param time_to_sleep	OK: The time the philosophers take to sleep.
 * @param must_eat		OK: Cycle count --> Must eat count.
 */
typedef struct s_base
{
	t_philos	*philos;
	pthread_t	checker;
	sem_t		*sem_forks;
	sem_t		*sem_write;
	sem_t		*sem_done;
	int			*philos_pid;
	int			philos_count;
	int			time_to_die;
	int			time_to_eat;
	int			time_to_sleep;
	int			must_eat;
}		t_base;

/* ************************************************************************** */
/* FUNCTION PROTOTYPES														  */
/* ************************************************************************** */

//check_args_bonus.c
void	check_args_in_values_b(t_base *base);
void	check_args_on_shell_b(int ac, char **av);
void	check_args_b(int argc, char **argv);

//error_bonus.c
int		ft_perror_b(char *str);

//init_all_bonus.c
void	init_args_bonus(int ac, char **av, t_base *base);

#endif