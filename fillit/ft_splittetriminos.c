/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_splittetriminos.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbateau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 12:21:36 by jbateau           #+#    #+#             */
/*   Updated: 2015/12/23 17:38:20 by jbateau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_splittetriminos(char *buf, size_t len)
{
	size_t			i;
	size_t			j;
	size_t			legallen;
	char			*tetrimino;

	i = 0;
	j = 0;
	legallen = 21;
	while (j <= len && i <= legallen)
	{
		if (i == legallen || ((i == legallen - 1) && j == len))
		{
			tetrimino = ft_strsub(buf, j - legallen, legallen);
			if (ft_checktetriminos(tetrimino) == 0)
				return (0);
			if (ft_checktab(ft_strsplit(tetrimino, '\n')) == 0)
				return (0);
			i = 0;
			ft_putendl("tetrimino =");
			ft_putstr(tetrimino);
		}
		i++;
		j++;
	}
	ft_lentab(len, legallen);
	return (1);
}
