/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 10:12:02 by arabefam          #+#    #+#             */
/*   Updated: 2024/07/10 09:53:42 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <string.h>
# include <stdlib.h>
# include <stdio.h>
# include <sys/time.h>
# include <unistd.h>
# include <pthread.h>
# include <limits.h>
# include "./type.h"

long	ft_atol(const char *str);
void	error_exit(const char *error);
int		is_inputs_valide(char **inputs);
void	data_init(t_data *data, char **inputs);
void	*safe_malloc(size_t bytes);
#endif
