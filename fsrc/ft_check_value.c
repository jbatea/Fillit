/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_value.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbateau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 15:18:27 by jbateau           #+#    #+#             */
/*   Updated: 2016/01/10 17:31:51 by jbateau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			ft_check_value(char *str)
{
	size_t	i;
	size_t	countblock;
	size_t	countpoint;

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
	if (countblock != 4  || countpoint != 12)
		return (0);
	return (1);
}
