/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_filltab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/20 20:08:20 by tbaril            #+#    #+#             */
/*   Updated: 2015/12/21 12:42:34 by jbateau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_filltab(char **tab, size_t c)
{
	size_t		i;
	size_t		j;

	if (tab == NULL || c == 0)
		return (NULL);
	i = 0;
	j = 0;
	while (tab[i])
	{
		while (j < c)
		{
			tab[i][j] = '.';
			j++;
		}
		j = 0;
		i++;
	}
	return (tab);
}
