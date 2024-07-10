/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checking_inputs.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 09:24:27 by arabefam          #+#    #+#             */
/*   Updated: 2024/07/10 09:35:32 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/philo.h"

int	is_inputs_valide(char **inputs)
{
	int	i;

	i = 0;
	while (inputs[++i])
		ft_atol(inputs[i]);
	return (1);
}
