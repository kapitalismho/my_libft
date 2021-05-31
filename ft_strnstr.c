/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salee <salee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 06:12:48 by salee             #+#    #+#             */
/*   Updated: 2021/05/29 06:12:48 by salee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*big2;
	char	*big2_end;
	size_t	little_len;

	if (big == NULL)
		ft_strlen(big);
	big2 = (char *)big;
	big2_end = big2 + len;
	little_len = ft_strlen(little);
	if (little_len == 0)
		return (big2);
	big2_end = big2_end - (little_len - 1);
	while (big2 < big2_end)
	{
		if (ft_strncmp(big2, (char *)little, little_len) == 0)
			return (big2);
		big2++;
	}
	return (NULL);
}
