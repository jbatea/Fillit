/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolve.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 18:19:52 by tbaril            #+#    #+#             */
/*   Updated: 2016/01/12 13:58:16 by jbateau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_resolve(char *str, t_tetrimino *tetri, size_t tabsize)
{
	int		i;

	i = 0;
	if (str[0] == '\0')
		return (0);
	while (i < 4)
	{
		if (str[(tetri->y[i] * tabsize) + tetri->x[i]] != '.')
			return (ft_resolve(str + 1, tetri, tabsize));
		++i;
	}
	ft_print_tetri(tetri, str, tabsize);
	return (1);
}
