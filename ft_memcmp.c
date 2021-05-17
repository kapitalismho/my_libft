/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salee <salee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 22:40:39 by salee             #+#    #+#             */
/*   Updated: 2021/05/12 22:57:16 by salee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, int len)
{
	unsigned char	*s1b;
	unsigned char	*s2b;
	int				result;

	s1b = (unsigned char *)s1;
	s2b = (unsigned char *)s2;
	result = 0;
	if (s1b == s2b)
	{
		return (result);
	}
	while (len--)
	{
		if (*s1b != *s2b)
		{
			result = *s1b - *s2b;
			break ;
		}
		s1b++;
		s2b++;
	}
	return (result);
}
