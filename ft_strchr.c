/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salee <salee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 12:33:37 by salee             #+#    #+#             */
/*   Updated: 2021/06/01 12:33:42 by salee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char c2;

	c2 = (char)c;
	while (*s != '\0' && *s != c2)
	{
		s++;
	}
	if (*s == c2)
	{
		return (char *)(s);
	}
	return (NULL);
}
