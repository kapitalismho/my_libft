/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salee <salee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 17:11:48 by salee             #+#    #+#             */
/*   Updated: 2021/05/14 18:03:15 by salee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t num)
{
	unsigned char	*dest2;
	unsigned char	*src2;
	size_t	i;

	if (src == NULL && dest == NULL)
	{
		return (NULL);
	}
	dest2 = (unsigned char *)dest;
	src2 = (unsigned char *)src;
	i = 0;
	while (i < num)
	{
		dest2[i] = src2[i];
		i++;
	}
	return (dest);
}
