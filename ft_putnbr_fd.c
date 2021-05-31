/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salee <salee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 02:41:29 by salee             #+#    #+#             */
/*   Updated: 2021/06/01 02:41:29 by salee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	number_printer(char numbers[], int i, int is_negative, int fd)
{
	if (is_negative == 1)
		i++;
	while (i >= 1)
	{
		i--;
		write(fd, &numbers[i], 1);
	}
}

static void	number_setter(long nb, int fd)
{
	int		i;
	int		digit;
	int		is_negative;
	char	numbers[12];

	i = 0;
	is_negative = 0;
	if (nb < 0)
	{
		is_negative = 1;
		nb = nb * -1;
	}
	while (nb != 0)
	{
		digit = nb % 10;
		numbers[i] = digit + '0';
		i++;
		nb = nb / 10;
	}
	if (is_negative == 1)
		numbers[i] = '-';
	number_printer(numbers, i, is_negative, fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	long	nbr;

	nbr = n;
	if (nbr == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	number_setter(nbr, fd);
}
