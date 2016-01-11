/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_tetritab.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 17:30:13 by tbaril            #+#    #+#             */
/*   Updated: 2016/01/11 17:36:41 by tbaril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_free_tetritab(t_tetrimino *tetri, size_t len)
{
	int i;

	i = 0;
	while ((tetri + i)->a != '\0')
	{
		free((tetri + i)->x);
		free((tetri + i)->y);
		++i;
	}
	free(tetri);
}
