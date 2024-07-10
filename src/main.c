/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 08:40:53 by arabefam          #+#    #+#             */
/*   Updated: 2024/07/10 09:45:27 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/philo.h"

int	main(int ac, char *av[])
{
	t_data	data;

	if (ac == 5 || ac == 6)
	{
		if (is_inputs_valide(av))
		{
			data_init(&data, av);
		}
	}
	else
		error_exit("Error : wrong number of arguments!");
	return (0);
}
