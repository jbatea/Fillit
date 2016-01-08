/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptochar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 15:02:53 by tbaril            #+#    #+#             */
/*   Updated: 2016/01/08 16:34:17 by tbaril           ###   ########.fr       */
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
		printf("%d, %d\n", (ptab + i)->y, (ptab + i)->x);
		ctab[(ptab + i)->y][(ptab + i)->x] = '.';
		i++;
	}
	return (ctab);
}
