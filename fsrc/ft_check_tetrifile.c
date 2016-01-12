/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_tetrifile.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbateau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 15:56:39 by jbateau           #+#    #+#             */
/*   Updated: 2016/01/12 16:17:47 by tbaril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int				ft_check_tetrifile(t_tetrimino *ptetri, char *buf)
{
	int			i;

	i = 0;
	while (buf[20] != '\0')
	{
		ft_print_coord(ptetri + i);
		if (ft_check_tetri((ptetri + i), 0, 0) == 0)
			return (0);
		++i;
		buf = ft_strstr(buf, "\n\n") + 2;
	}
	if (ft_check_tetri((ptetri + i), 0, 0) == 0)
		return (0);
	else
		return (1);
}
