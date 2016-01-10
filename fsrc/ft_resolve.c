/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolve.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 18:53:41 by tbaril            #+#    #+#             */
/*   Updated: 2016/01/08 19:09:23 by tbaril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_point		*ft_resolve(t_tetrimino *tetri, size_t len)
{
	size_t		i;
	t_point		*tab;

	tab = ft_create_pointtab(len * len);
	i = 0;
	while (i < len)
	{
		tab->name = (tetri + i)->value[0].name;
		++i;
	}
