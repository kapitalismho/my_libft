/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salee <salee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 12:46:35 by salee             #+#    #+#             */
/*   Updated: 2021/06/01 13:17:36 by salee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*idx_calculated_string;
	char	*substring;
	size_t	i;
	size_t	s_len;

	s_len = ft_strlen(s);
	if (s_len <= start)
		return (ft_strdup(""));
	if (s_len < len)
		len = s_len;
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
