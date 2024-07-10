/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 09:38:22 by arabefam          #+#    #+#             */
/*   Updated: 2024/07/10 09:41:53 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/philo.h"

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
}
