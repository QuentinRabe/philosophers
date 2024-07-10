/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 09:07:03 by arabefam          #+#    #+#             */
/*   Updated: 2024/07/10 10:21:38 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPE_H
# define TYPE_H
# include "./philo.h"

typedef struct s_fork	t_fork;
typedef struct s_philo	t_philo;
typedef struct s_data	t_data;

struct s_fork
{
	int				id;
	pthread_mutex_t	fork;
};

struct s_philo
{
	int			id;
	int			is_satisfied;
	long		times_eaten;
	long		last_meal_time;
	pthread_t	thread;
	t_data		*data;
};

struct s_data
{
	long	n_philo;
	long	time_die;
	long	time_eat;
	long	time_sleep;
	long	meals_limit;
	t_philo	*philos;
	t_fork	*forks;
};

#endif
