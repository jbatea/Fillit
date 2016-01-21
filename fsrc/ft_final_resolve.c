/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_final_resolve.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 18:52:15 by tbaril            #+#    #+#             */
/*   Updated: 2016/01/21 17:14:39 by jbateau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void			ft_final_resolve(t_tetrimino *tetri, size_t tabsize)
{
	char		*str;
	t_tetrimino *tmp;

	tmp = tetri;
	while (tmp->a != 'A')
		tmp = tmp - 1;
	tetri = tmp;
	str = ft_create_resolvetab(tabsize);
	if (ft_resolve_tetri(str, tetri, tabsize) == NULL)
	{
		free(str);
		return (ft_final_resolve(tetri, tabsize + 1));
	}
	ft_fillit_putres(str, tabsize);
}
