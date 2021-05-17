/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salee <salee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 23:46:56 by salee             #+#    #+#             */
/*   Updated: 2021/05/14 01:24:23 by salee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *ret_adr;
	char *found_adr;
	char *s2;
	char c2;

	s2 = (char *)s;
	c2 = (char)c;
	ret_adr = NULL;
	found_adr = ft_strchr(s, c2);
	if (c2 == '\0')
		return (ft_strchr(s2, '\0'));
	while (found_adr != NULL)
	{
		ret_adr = found_adr;
		s2 = found_adr + 1;
		found_adr = ft_strchr(s2, c2);
	}
	return (ret_adr);
}
