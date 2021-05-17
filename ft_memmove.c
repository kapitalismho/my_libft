/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salee <salee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 18:41:28 by salee             #+#    #+#             */
/*   Updated: 2021/05/14 18:03:34 by salee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t num)
{
	unsigned char	*dest2;
	unsigned char	*src2;

	if (src == NULL && dest == NULL)
		return (0);
	dest2 = (unsigned char *)dest;
	src2 = (unsigned char *)src;
	if (dest < src)
	{
		while (num--)
			*dest2++ = *src2++;
	}
	else
	{
		dest2 = dest2 + num - 1;
		src2 = src2 + num - 1;
		while (num--)
			*dest2-- = *src2--;
	}
	return (dest);
}
