/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initarray.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbateau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/07 14:53:04 by jbateau           #+#    #+#             */
/*   Updated: 2016/01/07 15:32:51 by jbateau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void			ft_initarray(tetrimino *tetri)
{
	int			i;
	int			j;

	i = 1;
	j = 0;
	tetri[0].value[0].x = 0;
	tetri[0].value[0].y = 0;
	tetri[0].name = 'A';
	while (i < N)
	{
		while (j < J)
		{
			tetri[i].value[j].x = tetri[i - 1].value[j].x + 0;
			tetri[i].value[j].y = tetri[i - 1].value[j].y + 0;
			tetri[i].name = 'A' + i;
			j++;
		}
		i++;
		j = 0;
	}
}
