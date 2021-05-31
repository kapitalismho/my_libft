/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salee <salee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 07:56:47 by salee             #+#    #+#             */
/*   Updated: 2021/05/29 07:56:47 by salee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int argument)
{
	if ('A' <= argument && argument <= 'Z' )
		return (1);
	if ('a' <= argument && argument <= 'z' )
		return (2);
	return (0);
}
