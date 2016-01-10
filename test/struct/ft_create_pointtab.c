/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_pointtab.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 13:05:03 by tbaril            #+#    #+#             */
/*   Updated: 2016/01/08 19:10:13 by tbaril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_point		*ft_create_pointtab(size_t x, size_t y)
{
	size_t	i;
	size_t	j;
	t_point	*tab;

	i = 0;
	j = 0;
	tab = (t_point*)malloc(sizeof(t_point) * x * y);
	if (tab == NULL)
		return (NULL);
	while (i < (x * y))
	{
		tab[i].name = '.';
		tab[i].x = i % x;
		tab[i].y = j;
		++i;
		j = i / x;
	}
	return (tab);
}
