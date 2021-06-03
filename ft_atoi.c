/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salee <salee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 12:13:54 by salee             #+#    #+#             */
/*   Updated: 2021/06/01 13:08:00 by salee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	print_numbers(size_t i, char *str)
{
	long	result;
	long	sign;
	size_t	sign_counter;

	result = 0;
	sign = 1;
	sign_counter = 0;
	while (str[i] != '\0' && (str[i] == '+' || str[i] == '-'))
	{
		sign_counter++;
		if (sign_counter > 1)
			return (0);
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i] != '\0' && ('0' <= str[i] && str[i] <= '9'))
	{
		result = result * 10;
		result = result + str[i] - '0';
		i++;
	}
	return (result * sign);
}

int			ft_atoi(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\f' ||
			str[i] == '\n' || str[i] == '\r' ||
			str[i] == '\t' || str[i] == '\v')
		{
			i++;
		}
		else
		{
			return (print_numbers(i, (char *)str));
		}
	}
	return (0);
}
