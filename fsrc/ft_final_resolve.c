/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_final_resolve.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 18:52:15 by tbaril            #+#    #+#             */
/*   Updated: 2016/01/11 20:22:31 by tbaril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_final_resolve(t_tetrimino *tetri, char *str, size_t tabsize)
{
	if (ft_resolve_tetri(tetri, str, tabsize) == NULL)
		return (ft_final_resolve(tetri, str, tabsize + 1));
	else
		return (ft_resolve_tetri(tetri, str, tabsize));
}
