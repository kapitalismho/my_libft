/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salee <salee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 09:28:40 by salee             #+#    #+#             */
/*   Updated: 2021/06/02 12:21:25 by salee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst_tmp;
	t_list	*new_lst;
	t_list	*new_first_lst;
	size_t	is_first_lst_made;

	if (lst == NULL)
		lst = lst->next;
	lst_tmp = lst;
	is_first_lst_made = 0;
	new_first_lst = NULL;
	while (lst_tmp != NULL)
	{
		new_lst = ft_lstnew((*f)(lst_tmp->content));
		if (new_lst == NULL)
		{
			if (is_first_lst_made == 1)
				ft_lstclear(&new_first_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_first_lst, new_lst);
		if (is_first_lst_made++ == 0)
			new_first_lst = new_lst;
		lst_tmp = lst_tmp->next;
	}
	return (new_first_lst);
}
