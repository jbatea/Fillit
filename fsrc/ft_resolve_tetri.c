/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolve_tetri.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 19:58:12 by tbaril            #+#    #+#             */
/*   Updated: 2016/01/12 14:52:08 by jbateau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_resolve_tetri(t_tetrimino *tetri, size_t tabsize)
{
	int		i;
	char	*str;

	str = ft_create_resolvetab(tabsize);
	i = 0;
	while ((tetri + i)->a != '\0')
	{
		if (ft_resolve(str, tetri + i, tabsize) == 0)
			return (NULL);
		++i;
	}
	return (str);
}
