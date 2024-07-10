/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 09:38:22 by arabefam          #+#    #+#             */
/*   Updated: 2024/07/10 10:20:58 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/philo.h"

static void	init_philo(t_data *data)
{
	int		i;
	long	n_philo;
	t_philo	*philo;

	i = -1;
	n_philo = data->n_philo;
	philo = data->philos;
	while (++i < n_philo)
	{
		philo[i].id = i + 1;
		philo[i].is_satisfied = 0;
		philo[i].times_eaten = 0;
		philo[i].data = data;
	}
}

void	data_init(t_data *data, char **inputs)
{
	data->n_philo = ft_atol(inputs[1]);
	data->time_die = ft_atol(inputs[2]);
	data->time_eat = ft_atol(inputs[3]);
	data->time_sleep = ft_atol(inputs[4]);
	if (inputs[5])
		data->meals_limit = ft_atol(inputs[5]);
	else
		data->meals_limit = -1;
	data->philos = safe_malloc(sizeof(t_philo) * data->n_philo);
	data->forks = safe_malloc(sizeof(t_fork) * data->n_philo);
	init_philo(data);
}
