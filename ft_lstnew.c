/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salee <salee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 12:26:04 by salee             #+#    #+#             */
/*   Updated: 2021/06/01 12:26:53 by salee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *ld_pointer;

	ld_pointer = (t_list *)malloc(sizeof(t_list) * 1);
	if (ld_pointer == NULL)
		return (NULL);
	ld_pointer->content = content;
	ld_pointer->next = NULL;
	return (ld_pointer);
}
