/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolve_tetri.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 19:58:12 by tbaril            #+#    #+#             */
/*   Updated: 2016/01/19 13:57:45 by tbaril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_resolve_tetri(char *str, t_tetrimino *tetri, size_t tabsize)
{
	char	*str;

	ft_putendl("ft_resolve_tetri");
	while (tetri != NULL)
	{
		if (ft_resolve(str, tetri, tabsize, tabsize * tabsize) == 0)
			return (NULL);
		tetri = tetri->next;
	}
	return (str);
}
