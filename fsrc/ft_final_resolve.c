/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_final_resolve.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 18:52:15 by tbaril            #+#    #+#             */
/*   Updated: 2016/01/12 15:51:05 by jbateau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_final_resolve(t_tetrimino *tetri, size_t tabsize)
{
	char *str;

	str = ft_resolve_tetri(tetri, tabsize);
	if (str == NULL)
		return (ft_final_resolve(tetri, tabsize + 1));
	else
		return (str);
}
