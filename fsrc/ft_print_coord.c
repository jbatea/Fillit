/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_coord.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/12 16:13:00 by tbaril            #+#    #+#             */
/*   Updated: 2016/01/12 16:15:30 by tbaril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_print_coord(t_tetrimino *tetri)
{
	int i;

	i = 0;
	while (i < 4)
	{
		ft_putnbr(tetri->x[i]);
		ft_putstr(", ");
		ft_putnbrl(tetri->y[i]);
		++i;
	}
}
