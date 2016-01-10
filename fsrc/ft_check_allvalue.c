/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_allvalue.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbateau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 12:21:36 by jbateau           #+#    #+#             */
/*   Updated: 2016/01/10 16:10:13 by jbateau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int					ft_check_allvalue(char *buf, size_t len)
{
	size_t			i;
	size_t			j;
	size_t			legallen;
	char			*tetrimino;

	i = 0;
	j = 0;
	legallen = 21;
	while (j <= len && i <= legallen)
	{
		if (i == legallen || (i == (legallen - 1) && j == len))
		{
			if (j != len)
				tetrimino = ft_strsub(buf, j - legallen, legallen);
			if (j == len)
				tetrimino = ft_strsub(buf, j - 20, 20);
			if (ft_check_value(tetrimino) == 0)
				return (0);
			i = 0;
		}
		i++;
		j++;
	}
	return (1);
}
