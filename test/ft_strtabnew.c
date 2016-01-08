/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_createtab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/20 19:06:12 by tbaril            #+#    #+#             */
/*   Updated: 2015/12/23 16:19:14 by jbateau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strtabnew(size_t l, size_t c)
{
	char	**tab;
	char	*str;
	size_t	i;

	if (l == 0 || c == 0)
		return (NULL);
	tab = (char **)malloc(sizeof(char *) * (l + 1));
	str = (char *)malloc(sizeof(char) * (l * (c + 1)));
	if (tab == NULL || str == NULL)
		return (NULL);
	tab[l] = NULL;
	i = c;
	while (i <= (c + 1) * l)
	{
		str[i] = '\0';
		i += c + 1;
	}
	i = 0;
	while (i < l)
	{
		tab[i] = &str[i * (c + 1)];
		i++;
	}
	return (tab);
}
