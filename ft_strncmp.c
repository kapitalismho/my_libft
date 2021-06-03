/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salee <salee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 12:43:31 by salee             #+#    #+#             */
/*   Updated: 2021/06/01 13:12:31 by salee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*s11;
	unsigned char	*s22;
	size_t			i;

	s11 = (unsigned char *)s1;
	s22 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (i < n && s11[i] != '\0' && s22[i] != '\0')
	{
		if (s11[i] != s22[i])
		{
			break ;
		}
		i++;
	}
	if (i == n)
	{
		i--;
	}
	return (s11[i] - s22[i]);
}
