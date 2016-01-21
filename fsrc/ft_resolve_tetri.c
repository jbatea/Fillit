/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolve_tetri.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 19:58:12 by tbaril            #+#    #+#             */
/*   Updated: 2016/01/21 16:26:49 by jbateau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_resolve_tetri(char *str, t_tetrimino *tetri, size_t tabsize)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_resolve(str + i, tetri, tabsize, tabsize * tabsize - i) == 1)
		{
			ft_print_tetri(tetri, &str[i], tabsize);
			if (tetri->next == NULL)
				return (str);
			if (ft_resolve_tetri(str, tetri->next, tabsize) == str)
				return (str);
			ft_unprint_tetri(tetri, &str[i], tabsize);
		}
		i++;
	}
	return (NULL);
}
