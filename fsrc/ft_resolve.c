/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolve.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 18:19:52 by tbaril            #+#    #+#             */
/*   Updated: 2016/01/15 06:27:14 by tbaril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_resolve(char *str, t_tetrimino *tetri, size_t s, size_t cnt)
{
	size_t	i;

	i = 0;
	ft_putendl("ft_resolve");
	ft_putnbrl(ft_return_xmax(tetri));
	if (str[0] == '\0')
		return (0);
	while (i < 4)
	{
		printf("tetri->x[i] = %d\n", tetri->x[i]);
		printf("tetri->y[i] = %d\n", tetri->y[i]);
		if (str[(tetri->y[i] * s) + tetri->x[i]] != '.' ||
			ft_return_xmax(tetri) > (int)((cnt - 1) % s) ||
			(tetri->y[i] * s) + tetri->x[i] > cnt)
			return (ft_resolve(str + 1, tetri, s, cnt - 1));
		++i;
	}
	ft_print_tetri(tetri, str, s);
	return (1);
}
