/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolve.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 18:19:52 by tbaril            #+#    #+#             */
/*   Updated: 2016/01/21 16:25:30 by jbateau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_resolve(char *str, t_tetrimino *tetri, size_t s, size_t cnt)
{
	size_t	i;

	i = 0;
	if (str[0] == '\0')
		return (0);
	while (i < 4)
	{
		if (str[(tetri->y[i] * s) + tetri->x[i]] != '.' ||
				ft_return_xmax(tetri) > (int)((cnt - 1) % s) ||
				(tetri->y[i] * s) + tetri->x[i] >= cnt)
			return (0);
		++i;
	}
	return (1);
}
