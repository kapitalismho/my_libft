/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salee <salee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 18:04:11 by salee             #+#    #+#             */
/*   Updated: 2021/06/02 08:16:21 by salee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *tail_pointer;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	tail_pointer = *lst;
	while (tail_pointer->next != NULL)
		tail_pointer = tail_pointer->next;
	tail_pointer->next = new;
}
