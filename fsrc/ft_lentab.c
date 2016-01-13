/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lentab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbateau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 14:55:31 by jbateau           #+#    #+#             */
/*   Updated: 2016/01/12 18:13:14 by tbaril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			ft_lentab(t_tetrimino *tetri)
{
	int	nb;
	int	i;

	ft_putendl("ft_lentab");
	i = 0;
	while ((tetri + i)->next != NULL)
		++i;
	nb = ft_nextsqrt((i + 1) * 4);
	i = 0;
	while ((tetri + i)->next != NULL && nb < 4)
	{
		if (ft_return_xmax(tetri + i) >= nb)
			nb = ft_return_xmax(tetri + i) + 1;
		if (ft_return_ymax(tetri + i) >= nb)
			nb = ft_return_ymax(tetri + i) + 1;
		++i;
	}
	if (ft_return_xmax(tetri + i) >= nb)
		nb = ft_return_xmax(tetri + i) + 1;
	if (ft_return_ymax(tetri + i) >= nb)
		nb = ft_return_ymax(tetri + i) + 1;
	return (nb);
}
