/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_tetri.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 12:14:31 by tbaril            #+#    #+#             */
/*   Updated: 2016/01/08 17:01:49 by jbateau          ###   ########.fr       */
/*   Updated: 2016/01/08 13:22:35 by jbateau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_check_tetri(t_tetrimino tetri, int cnt, int j)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (tetri.value[i].x == tetri.value[j].x + 1 &&
			tetri.value[i].y == tetri.value[j].y)
			cnt++;
		if (tetri.value[i].y == tetri.value[j].y + 1 &&
			tetri.value[i].x == tetri.value[j].x)
			cnt++;
		if (tetri.value[i].x == tetri.value[j].x - 1 &&
			tetri.value[i].y == tetri.value[j].y)
			cnt++;
		if (tetri.value[i].y == tetri.value[j].y - 1 &&
			tetri.value[i].x == tetri.value[j].x)
			cnt++;
		i++;
	}
	if (cnt >= 6)
		return (1);
	else if (j == 4)
		return (0);
	else
		return (ft_check_tetri(tetri, cnt, j + 1));
	return (0);
}
