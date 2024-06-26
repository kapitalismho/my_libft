/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salee <salee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 12:35:01 by salee             #+#    #+#             */
/*   Updated: 2021/06/01 13:05:52 by salee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_length;
	size_t	dst_length;

	i = 0;
	src_length = ft_strlen(src);
	dst_length = ft_strlen(dst);
	if (dst_length >= dstsize)
	{
		return (dstsize + src_length);
	}
	while (src[i] != '\0' && (i + 1 + dst_length) < dstsize)
	{
		dst[dst_length + i] = src[i];
		i++;
	}
	dst[dst_length + i] = '\0';
	return (dst_length + src_length);
}
