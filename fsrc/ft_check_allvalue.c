/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_allvalue.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbateau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 12:21:36 by jbateau           #+#    #+#             */
/*   Updated: 2016/01/10 18:02:51 by jbateau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int					ft_check_allvalue(char *buf, size_t len)
{
	size_t			i;
	size_t			j;
	char			*tetrimino;

	i = 0;
	j = 0;
	while (j <= len && i <= 21)
	{
		if (i == 21 || (i == 20 && j == len))
		{
			if (j != len)
				tetrimino = ft_strsub(buf, j - 21, 21);
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
