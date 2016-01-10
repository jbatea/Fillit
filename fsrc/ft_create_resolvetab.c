/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_resolvetab.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/10 15:10:37 by tbaril            #+#    #+#             */
/*   Updated: 2016/01/10 15:44:22 by tbaril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_resolve	*ft_create_resolvetab(size_t size)
{
	size_t		i;
	t_resolve	*res;

	res = (t_resolve*)malloc(sizeof(t_resolve));
	if (res == NULL)
		return (NULL);
	res->x = ft_range(1, size);
	res->y = ft_range(1, size);
	res->tab = ft_strnew(size * size);
	i = 0;
	while (i < (size * size))
	{
		res->tab[i] = '.';
		++i;
	}
	return (res);
}
