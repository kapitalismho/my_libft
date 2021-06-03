/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salee <salee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 12:43:01 by salee             #+#    #+#             */
/*   Updated: 2021/06/01 12:43:09 by salee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ret_string;
	unsigned int	i;

	i = 0;
	ret_string = ft_strdup((char *)s);
	if (ret_string == NULL)
		return (NULL);
	while (ret_string[i] != '\0')
	{
		ret_string[i] = f(i, s[i]);
		i++;
	}
	return (ret_string);
}
