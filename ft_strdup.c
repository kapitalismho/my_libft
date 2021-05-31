/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salee <salee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 11:06:21 by salee             #+#    #+#             */
/*   Updated: 2021/05/29 11:06:21 by salee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	size_t	i;
	size_t	src_length;
	char	*dest;

	i = 0;
	src_length = ft_strlen(src);
	dest = malloc(src_length + 1);
	if (dest == NULL)
		return (NULL);
	while (i <= src_length)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
