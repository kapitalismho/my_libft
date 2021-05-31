/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salee <salee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 05:54:54 by salee             #+#    #+#             */
/*   Updated: 2021/06/01 05:54:54 by salee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *LD_pointer;

	LD_pointer = (t_list *)malloc(sizeof(t_list) * 1);
	if (LD_pointer == NULL)
		return (NULL);
	LD_pointer->content = content;
	LD_pointer->next = NULL;
	return (LD_pointer);
}
