/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salee <salee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 12:27:36 by salee             #+#    #+#             */
/*   Updated: 2021/06/01 12:27:42 by salee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	unsigned char	*s1_2;
	unsigned char	*s2_2;
	unsigned char	c2;
	unsigned char	*return_value;
	size_t			i;

	s1_2 = (unsigned char *)s1;
	s2_2 = (unsigned char *)s2;
	c2 = (unsigned char)c;
	i = 0;
	return_value = NULL;
	while (i < n)
	{
		s1_2[i] = s2_2[i];
		if (s2_2[i] == c2)
		{
			return_value = s1_2 + i + 1;
			break ;
		}
		i++;
	}
	return (return_value);
}
