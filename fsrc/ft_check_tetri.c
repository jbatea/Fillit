/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_tetri.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/10 17:41:46 by tbaril            #+#    #+#             */
/*   Updated: 2016/01/12 16:30:17 by tbaril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_check_tetri(t_tetrimino *tetri, int cnt, int j)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (tetri->x[i] == tetri->x[j] + 1 && tetri->y[i] == tetri->y[j])
			cnt++;
		if (tetri->y[i] == tetri->y[j] + 1 && tetri->x[i] == tetri->x[j])
			cnt++;
		if (tetri->x[i] == tetri->x[j] - 1 && tetri->y[i] == tetri->y[j])
			cnt++;
		if (tetri->y[i] == tetri->y[j] - 1 && tetri->x[i] == tetri->x[j])
			cnt++;
		++i;
	}
	if (cnt >= 6)
		return (1);
	else if (j == 3)
		return (0);
	else
		return (ft_check_tetri(tetri, cnt, j + 1));
}
