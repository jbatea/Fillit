/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolve.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 18:19:52 by tbaril            #+#    #+#             */
/*   Updated: 2016/01/12 17:56:34 by tbaril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_resolve(char *str, t_tetrimino *tetri, size_t tabsize, size_t cnt)
{
	int		i;

	i = 0;
	ft_putendl("ft_resolve");
	if (str[0] == '\0')
		return (0);
	while (i < 4)
	{
		if (str[(tetri->y[i] * tabsize) + tetri->x[i]] != '.' ||
			(tetri->y[i] * tabsize) + tetri->x[i] > cnt)
			return (ft_resolve(str + 1, tetri, tabsize, cnt - 1));
		++i;
	}
	ft_print_tetri(tetri, str, tabsize);
	return (1);
}
