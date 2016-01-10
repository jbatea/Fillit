/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_tetrifile.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbateau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 15:56:39 by jbateau           #+#    #+#             */
/*   Updated: 2016/01/08 19:10:35 by tbaril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int				ft_check_tetrifile(t_tetrimino *ptetri)
{
	int			i;

	i = 0;
	while (ptetri + i)
	{
		if (ft_check_tetri(ptetri[i], 0 , 0) == 0)
			return (0);
		++i;
	}
	return (1);
}
