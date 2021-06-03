/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salee <salee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 12:27:08 by salee             #+#    #+#             */
/*   Updated: 2021/06/02 07:46:40 by salee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	i;
	t_list	*lst_tmp;

	if (lst == NULL)
		return (0);
	i = 1;
	lst_tmp = lst;
	while (lst_tmp->next != NULL)
	{
		lst_tmp = lst_tmp->next;
		i++;
	}
	return (i);
}
