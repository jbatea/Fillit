/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolve_tetri.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 19:58:12 by tbaril            #+#    #+#             */
/*   Updated: 2016/01/12 17:28:47 by tbaril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_resolve_tetri(t_tetrimino *tetri, size_t tabsize)
{
	int		i;
	char	*str;

	ft_putendl("ft_resolve_tetri");
	str = ft_create_resolvetab(tabsize);
	i = 0;
	while ((tetri + i)->next != NULL)
	{
		if (ft_resolve(str, tetri + i, tabsize, tabsize * tabsize) == 0)
			return (NULL);
		++i;
	}
	if (ft_resolve(str, tetri + i, tabsize, tabsize * tabsize) == 0)
		return (0);
	return (str);
}
