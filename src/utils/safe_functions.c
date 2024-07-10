/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   safe_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 09:51:29 by arabefam          #+#    #+#             */
/*   Updated: 2024/07/10 09:53:31 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/philo.h"

void	*safe_malloc(size_t bytes)
{
	void	*allocation;

	allocation = NULL;
	allocation = malloc(bytes);
	if (!allocation)
		error_exit("Error : Malloc error");
	return (allocation);
}
