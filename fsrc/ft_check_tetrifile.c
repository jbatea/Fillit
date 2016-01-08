/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_tetrifile.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbateau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 15:56:39 by jbateau           #+#    #+#             */
/*   Updated: 2016/01/08 17:24:40 by jbateau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int				ft_check_tetrifile(t_tetrimino *ptetri, char *buf)
{
	int			i;

	i = 0;
	while (buf[20] != '\0')
	{
		if (ft_check_tetri(*(ptetri + i), 0 , 0) == 0)
			return (0);
		buf = ft_strstr(buf, "\n\n") + 2;
		i++;
	}
	if (ft_check_tetri(*(ptetri + i), 0, 0) == 0)
		return (0);
	else
		return (1);
}