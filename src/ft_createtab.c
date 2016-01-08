/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_createtab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbateau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/18 15:51:06 by jbateau           #+#    #+#             */
/*   Updated: 2016/01/08 16:00:55 by tbaril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			**ft_createtab(size_t size)
{
	char		**tab;
	size_t		j;

	j = 0;
	tab = (char **)malloc(sizeof(char *) * (size + 1));
	if (tab == NULL)
		return (NULL);
	while (j < size)
	{
		tab[j] = (char *)malloc(sizeof(char) * (size + 1));
		if (tab[j] == NULL)
			return (NULL);
		tab[j][size] = '\0';
		j++;
	}
	tab[size] = NULL;
	return (tab);
}
