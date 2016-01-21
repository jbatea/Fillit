/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_return_max.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbateau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/12 14:14:41 by jbateau           #+#    #+#             */
/*   Updated: 2016/01/12 14:28:13 by jbateau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_return_xmax(t_tetrimino *tetri)
{
	int i;
	int xmax;

	i = 0;
	xmax = 0;
	while (i < 4)
	{
		if (tetri->x[i] > xmax)
			xmax = tetri->x[i];
		++i;
	}
	return (xmax);
}

int		ft_return_ymax(t_tetrimino *tetri)
{
	int i;
	int ymax;

	i = 0;
	ymax = 0;
	while (i < 4)
	{
		if (tetri->y[i] > ymax)
			ymax = tetri->y[i];
		++i;
	}
	return (ymax);
}
