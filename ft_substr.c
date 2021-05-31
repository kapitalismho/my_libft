/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salee <salee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 00:44:14 by salee             #+#    #+#             */
/*   Updated: 2021/05/31 00:44:14 by salee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *idx_calculated_string;
	char *substring;
	size_t i;

	if (ft_strlen(s) <= start)
		return (ft_strdup(""));
	i = 0;
	idx_calculated_string = (char *)s + start;
	substring = malloc(len + 1);
	if (substring == NULL)
		return (NULL);
	while (i < len && idx_calculated_string[i] != 0)
	{
		substring[i] = idx_calculated_string[i];
		i++;
	}
	substring[i] = '\0';
	return (substring);
}
