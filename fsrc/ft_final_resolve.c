/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_final_resolve.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 18:52:15 by tbaril            #+#    #+#             */
/*   Updated: 2016/01/14 15:43:12 by jbateau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_final_resolve(t_tetrimino *tetri, size_t tabsize)
{
	char *str;

	ft_putendl("ft_final_resolve");
	str = ft_resolve_tetri(tetri, tabsize);
	if (str == NULL)
		return (ft_final_resolve(tetri, tabsize + 1));
	else
	{
		ft_putstrtab(ft_make_tab(str, tabsize));
		return (str);
	}
}
