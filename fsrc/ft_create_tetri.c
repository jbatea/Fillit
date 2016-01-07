/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_tetri.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/07 16:38:39 by tbaril            #+#    #+#             */
/*   Updated: 2016/01/07 19:08:21 by tbaril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_create_tetri(char *buf, t_tetrimino *tetri)
{
	int			i;
	int			j;
	int			k;

	i = 0;
	j = 0;
	k = 0;
	while (buf[i + j] != '\n' && buf[i + j] != '\0')
	{
		while (buf[i + j] != '\n')
		{
			if (buf[i + j] == '#')
			{
				tetri->value[k].x = (i - j * 4);
				tetri->value[k].y = j;
				k++;
			}
			i++;
		}
		j++;
	}
}
