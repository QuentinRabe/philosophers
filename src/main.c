/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 08:40:53 by arabefam          #+#    #+#             */
/*   Updated: 2024/07/09 09:14:57 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/philo.h"

int	main(int ac, char *av[])
{
	int	i;

	if (ac == 5 || ac == 6)
	{
		i = 0;
		while (av[++i])
			printf("%ld\n", ft_atol(av[i]));
	}
	else
		error_exit("Error : wrong number of arguments!");
}
