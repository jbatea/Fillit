/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolve.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 18:19:52 by tbaril            #+#    #+#             */
/*   Updated: 2016/01/19 13:51:28 by tbaril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_resolve(char *str, t_tetrimino *tetri, size_t s, size_t cnt)
{
	size_t	i;

	i = 0;
	ft_putendl("ft_resolve");
	while (i < 4)
	{
		if((tetri->y[i] * s) + tetri->x[i] >= cnt)
			return (0);
		if (str[(tetri->y[i] * s) + tetri->x[i]] != '.' ||
			ft_return_xmax(tetri) > (int)((cnt - 1) % s))
			return (ft_resolve(str + 1, tetri, s, cnt - 1));
		++i;
	}
	ft_print_tetri(tetri, str, s);
	return (1);
}
