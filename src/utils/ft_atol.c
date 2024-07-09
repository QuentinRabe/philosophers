/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 08:57:19 by arabefam          #+#    #+#             */
/*   Updated: 2024/07/09 13:47:18 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/philo.h"

static inline int	is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

static inline int	is_space(char c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

static const char	*digit_start(const char *str)
{
	const char	*number;
	int			len;

	number = NULL;
	len = 0;
	while (is_space(*str))
		++str;
	if (*str == '+')
		++str;
	else if (*str == '-')
		error_exit("Error : Args should be positive number");
	number = str;
	while (is_digit(*str))
	{
		++str;
		++len;
	}
	if (len > 10)
		error_exit("Error : Args should fit in INT");
	return (number);
}

long	ft_atol(const char *str)
{
	long	number;

	number = 0;
	str = digit_start(str);
	while (is_digit(*str))
		number = (number * 10) + (*str++ - '0');
	if (number > INT_MAX)
		error_exit("Error : Args should fit in INT");
	return (number);
}
