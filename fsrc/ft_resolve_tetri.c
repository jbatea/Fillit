/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolve_tetri.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 19:58:12 by tbaril            #+#    #+#             */
/*   Updated: 2016/01/19 10:48:19 by jbateau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_resolve_tetri(t_tetrimino *tetri, size_t tabsize)
{
	char	*str;

	ft_putendl("ft_resolve_tetri");
	str = ft_create_resolvetab(tabsize);
	while (tetri != NULL)
	{
		if (ft_resolve(str, tetri, tabsize, tabsize * tabsize) == 0)
			return (NULL);
		tetri = tetri->next;
	}
	return (str);
}
