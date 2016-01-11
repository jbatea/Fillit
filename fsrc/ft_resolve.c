/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolve.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 15:36:55 by tbaril            #+#    #+#             */
/*   Updated: 2016/01/11 17:20:42 by tbaril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_resolve(t_tetrimino *tetri, char *tab, int len)
{
	int i;
	int x;
	int y;

	i = 0;
	while (i < 4)
	{
		x = (tetri + 2)->x[i];
		y = (tetri + 2)->y[i];
		tab[(y * len) + x] = (tetri + 2)->a;
		++i;
	}
}
