/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lentab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbateau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 14:55:31 by jbateau           #+#    #+#             */
/*   Updated: 2016/01/14 19:24:02 by tbaril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			ft_lentab(t_tetrimino *tetri)
{
	int	nb;
	int	i;
	int	xmax;
	int	ymax;

	ft_putendl("ft_lentab");
	i = 0;
	while ((tetri + i)->next != NULL)
		++i;
	nb = ft_nextsqrt((i + 1) * 4);
	i = 0;
	xmax = ft_return_xmax(tetri + i);
	while (++i, (tetri + i)->next != NULL)
	{
		if (ft_return_xmax(tetri + i) > xmax)
			xmax = ft_return_xmax(tetri + i);
		if (ft_return_ymax(tetri + i) > ymax)
			ymax = ft_return_ymax(tetri + i);
	}
	if ((xmax == 3 || ymax == 3) && nb < 4)
		return (4);
	if (xmax == 3 && ymax == 3 && nb < 5)
		return (5);
	return (nb);
}
