/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unprint_tetri.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbateau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/21 16:22:59 by jbateau           #+#    #+#             */
/*   Updated: 2016/01/21 16:24:07 by jbateau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		ft_unprint_tetri(t_tetrimino *tetri, char *tab, int len)
{
	int		i;
	int		x;
	int		y;

	i = 0;
	while (i < 4)
	{
		x = (tetri)->x[i];
		y = (tetri)->y[i];
		tab[(y * len) + x] = '.';
		i++;
	}
}
