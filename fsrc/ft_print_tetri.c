/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_tetri.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 15:36:55 by tbaril            #+#    #+#             */
/*   Updated: 2016/01/12 17:52:48 by tbaril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_print_tetri(t_tetrimino *tetri, char *tab, int len)
{
	int i;
	int x;
	int y;

	ft_putendl("ft_print_tetri");
	i = 0;
	while (i < 4)
	{
		x = (tetri)->x[i];
		y = (tetri)->y[i];
		tab[(y * len) + x] = (tetri)->a;
		++i;
	}
}
