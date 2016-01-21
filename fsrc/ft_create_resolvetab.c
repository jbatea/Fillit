/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_resolvetab.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/10 15:10:37 by tbaril            #+#    #+#             */
/*   Updated: 2016/01/21 16:19:13 by jbateau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char			*ft_create_resolvetab(size_t size)
{
	size_t		i;
	char		*res;

	res = ft_strnew(size * size);
	i = 0;
	while (i < (size * size))
	{
		res[i] = '.';
		++i;
	}
	return (res);
}
