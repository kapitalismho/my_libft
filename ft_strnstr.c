/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salee <salee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 12:43:54 by salee             #+#    #+#             */
/*   Updated: 2021/06/01 18:39:38 by salee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	len;

	i = 1;
	if (!*s2)
		return ((char *)s1);
	len = ft_strlen(s2);
	if (n > ft_strlen(s1))
		n = ft_strlen(s1);
	while (len <= n--)
	{
		if (*s1 == *s2)
		{
			while (1)
			{
				if (i == len)
					return ((char *)s1);
				if (s1[i] != s2[i])
					break ;
				i++;
			}
		}
		s1++;
	}
	return (NULL);
}
