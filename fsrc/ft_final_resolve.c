/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_final_resolve.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 18:52:15 by tbaril            #+#    #+#             */
/*   Updated: 2016/01/15 06:10:31 by tbaril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_final_resolve(t_tetrimino *tetri, size_t tabsize)
{
	char *str;

	ft_putendl("ft_final_resolve");
	str = ft_resolve_tetri(tetri, tabsize);
	if (str == NULL)
		return (ft_final_resolve(tetri, tabsize + 1));
	else
		ft_fillit_putres(str, tabsize);
}
