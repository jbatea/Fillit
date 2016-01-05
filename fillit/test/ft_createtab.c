/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_createtab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbateau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/18 15:51:06 by jbateau           #+#    #+#             */
/*   Updated: 2015/12/21 11:21:49 by jbateau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			**ft_createtab(int nb)
{
	char		**tab;
	int			i;
	int			j;
	char		*s;

	ft_putnbrendl(nb);
	i = nb;
	j = 0;
	s = "........";
	tab = (char **)malloc(sizeof(char *) * (nb + 1));
	if (tab == NULL)
		return (NULL);
	while (j < i)
	{
		tab[j] = (char *)malloc(sizeof(char) * (nb + 1));
		if (tab[j] == NULL)
			return (NULL);
		tab[j] = ft_strncpy(tab[j], s + nb, nb);
		tab[j][nb] = '\0';
		j++;
	}
	tab[i] = NULL;
	return (tab);
}
