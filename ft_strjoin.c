/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salee <salee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 06:18:05 by salee             #+#    #+#             */
/*   Updated: 2021/05/31 06:18:05 by salee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*my_strcat(char *dest, char *src)
{
	size_t	i;
	size_t	dest_length;

	i = 0;
	dest_length = 0;
	while (dest[dest_length])
	{
		dest_length++;
	}
	while (src[i] != '\0')
	{
		dest[dest_length + i] = src[i];
		i++;
	}
	return (dest);
}

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined_string;
	size_t	size;

	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	joined_string = ft_calloc(size, 1);
	if (joined_string == NULL)
		return (NULL);
	joined_string = my_strcat(joined_string, (char *)s1);
	joined_string = my_strcat(joined_string, (char *)s2);
	joined_string[size] = '\0';
	return (joined_string);
}
