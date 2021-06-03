/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salee <salee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 08:25:12 by salee             #+#    #+#             */
/*   Updated: 2021/06/02 09:06:36 by salee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *lst_tmp;
	t_list *lst_tmp_next;

	lst_tmp = *lst;
	lst_tmp_next = *lst;
	while (lst_tmp != NULL)
	{
		lst_tmp_next = lst_tmp->next;
		ft_lstdelone(lst_tmp, del);
		lst_tmp = lst_tmp_next;
	}
	*lst = NULL;
}
