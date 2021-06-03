/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salee <salee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 09:18:04 by salee             #+#    #+#             */
/*   Updated: 2021/06/02 12:22:08 by salee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list *lst_tmp;

	if (lst == NULL)
		lst = lst->next;
	lst_tmp = lst;
	while (lst_tmp != NULL)
	{
		f(lst_tmp->content);
		lst_tmp = lst_tmp->next;
	}
}
