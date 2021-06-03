/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salee <salee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 12:46:12 by salee             #+#    #+#             */
/*   Updated: 2021/06/01 12:46:18 by salee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*left_trim(char *s1, char *set)
{
	size_t	i;
	char	*s1_tmp;

	i = 0;
	s1_tmp = s1;
	while (s1_tmp[i] != '\0')
	{
		if (ft_strchr(set, s1_tmp[i]) == NULL)
			break ;
		i++;
	}
	return (s1 + i);
}

static int	right_trim(char *s1, char *set)
{
	int		i;
	char	*s1_tmp;

	s1_tmp = s1;
	i = ft_strlen(s1_tmp);
	while (i > 0)
	{
		if (ft_strchr(set, s1_tmp[i]) == NULL)
			break ;
		i--;
	}
	return (i);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*s1_tmp;
	char	*trimed_str;
	int		last_index;

	s1_tmp = left_trim((char *)s1, (char *)set);
	last_index = right_trim((char *)s1_tmp, (char *)set);
	trimed_str = malloc(last_index + 2);
	if (trimed_str == NULL)
		return (NULL);
	ft_strlcpy(trimed_str, s1_tmp, last_index + 2);
	return (trimed_str);
}
