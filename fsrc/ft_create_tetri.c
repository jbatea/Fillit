/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_tetri.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/10 16:31:14 by tbaril            #+#    #+#             */
/*   Updated: 2016/01/12 15:54:02 by jbateau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void	ft_norm_y(t_tetrimino *tetri)
{
	int i;
	int j;

	j = 0;
	while (j != 1)
	{
		i = 0;
		while (i < 4)
		{
			tetri->y[i] -= 1;
			if (tetri->y[i] == 0)
				j = 1;
			++i;
		}
	}
}

static void	ft_norm_x(t_tetrimino *tetri)
{
	int	i;
	int	j;

	j = 0;
	while (j != 1)
	{
		i = 0;
		while (i < 4)
		{
			tetri->x[i] -= 1;
			if (tetri->x[i] == 0)
				j = 1;
			++i;
		}
	}
}

static void	ft_norm_tetri(t_tetrimino *tetri)
{
	ft_norm_y(tetri);
	ft_norm_x(tetri);
}

void		ft_create_tetri(char *buf, t_tetrimino *tetri, char a)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	tetri->x = (int *)malloc(sizeof(int) * 4);
	tetri->y = (int *)malloc(sizeof(int) * 4);
	while (buf[i + j] != '\n' && buf[i + j] != '\0')
	{
		while (buf[i + j] != '\n')
		{
			if (buf[i + j] == '#')
			{
				tetri->a = a;
				tetri->x[k] = (i - j * 4) + 1;
				tetri->y[k] = j + 1;
				++k;
			}
			++i;
		}
		++j;
	}
	ft_norm_tetri(tetri);
	i = 0;
	while (i < 4)
	{
		printf("%d, %d\n", tetri->x[i], tetri->y[i]);
		++i;
	}
}
