/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salee <salee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 07:23:25 by salee             #+#    #+#             */
/*   Updated: 2021/05/29 07:23:25 by salee            ###   ########.fr       */
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

int		ft_atoi(char *str)
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
			return (print_numbers(i, str));
		}
	}
	return (0);
}
