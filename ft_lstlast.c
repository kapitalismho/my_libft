/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salee <salee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 17:41:03 by salee             #+#    #+#             */
/*   Updated: 2021/06/02 07:48:41 by salee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list *lst_tmp;

	if (lst == NULL)
		return (NULL);
	lst_tmp = lst;
	while (lst_tmp->next != NULL)
		lst_tmp = lst_tmp->next;
	return (lst_tmp);
}
