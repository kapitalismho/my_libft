/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salee <salee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 12:18:58 by salee             #+#    #+#             */
/*   Updated: 2021/06/01 12:19:23 by salee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*pointer;
	size_t	calculated_size;

	calculated_size = count * size;
	pointer = malloc(calculated_size);
	if (pointer == NULL)
	{
		return (NULL);
	}
	ft_bzero(pointer, calculated_size);
	return (pointer);
}
