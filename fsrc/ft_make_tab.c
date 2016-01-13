/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/10 15:44:49 by tbaril            #+#    #+#             */
/*   Updated: 2016/01/12 18:15:11 by tbaril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**ft_make_tab(char *str, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	char			**tab;

	ft_putendl("ft_make_tab");
	tab = ft_createtab(len);
	j = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (i % len == 0 && i != 0)
			++j;
		tab[j][i - (len * j)] = str[i];
		++i;
	}
	return (tab);
}
