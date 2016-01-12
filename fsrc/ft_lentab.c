/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lentab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbateau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 14:55:31 by jbateau           #+#    #+#             */
/*   Updated: 2016/01/12 16:59:31 by tbaril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			ft_lentab(t_tetrimino *tetri)
{
	int	nb;
	int	i;

	i = 0;
	while ((tetri + i)->next != NULL)
		++i;
	nb = ft_nextsqrt((i + 1) * 4);
	ft_print_coord(tetri);
	i = 0;
	while ((tetri + i)->a != '\0' && nb < 4)
	{
		if (ft_return_xmax(tetri + i) > nb)
			nb = ft_return_xmax(tetri + i) + 1;
		if (ft_return_ymax(tetri + i) > nb)
			nb = ft_return_ymax(tetri + i) + 1;
		++i;
	}
	return (nb);
}
