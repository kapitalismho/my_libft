/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salee <salee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 12:24:16 by salee             #+#    #+#             */
/*   Updated: 2021/06/01 12:24:58 by salee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	size_calculator(int is_negative, long n)
{
	int		i;

	i = 0;
	if (n < 0)
	{
		is_negative = 1;
		n = n * -1;
	}
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	if (is_negative == 1)
		i++;
	return (i);
}

static char	*number_setter(long n, int i, char *ret_string, int is_negative)
{
	int		digit;

	ret_string[i] = '\0';
	i--;
	if (is_negative == 1)
		n = n * -1;
	while (n != 0)
	{
		digit = n % 10;
		ret_string[i] = digit + '0';
		n = n / 10;
		i--;
	}
	if (is_negative == 1)
		ret_string[i] = '-';
	return (ret_string);
}

char		*ft_itoa(int n)
{
	int		is_negative;
	int		i;
	char	*ret_string;

	is_negative = 0;
	if (n < 0)
		is_negative = 1;
	i = size_calculator(is_negative, (long)n);
	if (n == 0)
		ret_string = malloc(2);
	else
		ret_string = malloc(i + 1);
	if (ret_string == NULL)
		return (NULL);
	if (n == 0)
	{
		ret_string[0] = '0';
		ret_string[1] = '\0';
	}
	else
		number_setter((long)n, i, ret_string, is_negative);
	return (ret_string);
}
