/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printarray.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbateau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/07 15:45:09 by jbateau           #+#    #+#             */
/*   Updated: 2016/01/07 15:45:32 by jbateau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void			ft_printarray(tetrimino *tetri)
{
	int			i;

	i = 0;
	while (i < N)
	{
		printf("tetri[%d] = \n", i);
		ft_printpoint(tetri[i]);
		ft_putchar('\n');
		i++;
	}
}
