/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lentab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbateau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 14:55:31 by jbateau           #+#    #+#             */
/*   Updated: 2016/01/21 17:10:33 by jbateau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			ft_lentab(t_tetrimino *tetri)
{
	int	nb;
	int	xmax;
	int	ymax;

	nb = ft_nextsqrt((tetri->nb) * 4);
	while (tetri != NULL)
	{
		if (ft_return_xmax(tetri) > xmax)
			xmax = ft_return_xmax(tetri);
		if (ft_return_ymax(tetri) > ymax)
			ymax = ft_return_ymax(tetri);
		tetri = tetri->next;
	}
	if ((xmax == 3 || ymax == 3) && nb < 4)
		return (4);
	if (xmax == 3 && ymax == 3 && nb < 5)
		return (5);
	return (nb);
}
