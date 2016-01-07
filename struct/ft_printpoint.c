/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printpoint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbateau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/07 15:44:31 by jbateau           #+#    #+#             */
/*   Updated: 2016/01/07 15:44:53 by jbateau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void			ft_printpoint(tetrimino tetri)
{
	int			j;

	j = 0;
	while (j < J)
	{
		printf("(%d, %d, %c)\n", tetri.value[j].x, tetri.value[j].y, tetri.name);
		j++;
	}
}
