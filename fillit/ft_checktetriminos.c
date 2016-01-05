/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checktetriminos.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbateau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 15:18:27 by jbateau           #+#    #+#             */
/*   Updated: 2015/12/23 17:01:20 by jbateau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_checktetriminos(char *str)
{
	int		i;
	int		countblock;
	int		countpoint;

	i = 0;
	countblock = 0;
	countpoint = 0;
	while (str[i])
	{
		if (str[i] != '.' && str[i] != '#' && str[i] != '\n')
			return (0);
		if (str[i] == '#')
			countblock++;
		if (str[i] == '.')
			countpoint++;
		if (str[i] == '\n' && (str[i + 1] == '\n') && i != 19)
			return (0);
		i++;
	}
	if (countblock != 4 || countpoint != 12)
		return (0);
	return (1);
}
