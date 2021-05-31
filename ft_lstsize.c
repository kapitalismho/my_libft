/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salee <salee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 06:48:19 by salee             #+#    #+#             */
/*   Updated: 2021/06/01 06:48:19 by salee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t i;

	i = 0;
	while (1)
	{
		if (lst == NULL)
			break ;
		else
		{
			i++;
			lst = lst->next;
		}
	}
	return (i);
}
