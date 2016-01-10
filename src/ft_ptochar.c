/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptochar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 15:02:53 by tbaril            #+#    #+#             */
/*   Updated: 2016/01/08 18:39:43 by tbaril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**ft_ptochar(t_point *ptab, size_t size)
{
	char	**ctab;
	size_t	i;

	ctab = ft_createtab(size);
	if (ctab == NULL)
		return (NULL);
	i = 0;
	while (i < (size * size))
	{
		ctab[(ptab + i)->y][(ptab + i)->x] = (ptab + i)->name;
		i++;
	}
	return (ctab);
}
