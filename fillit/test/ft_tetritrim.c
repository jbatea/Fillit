/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tetritrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbateau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 14:45:47 by jbateau           #+#    #+#             */
/*   Updated: 2015/12/15 15:15:09 by jbateau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_tetritrim(char *str)
{
	char	*tetrimino;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i] == '.' && str[i])
		i++;
	tetrimino = (char *)malloc(sizeof(char) * ((ft_strlen(str) - i) + 1));
	if (tetrimino == NULL)
		return (NULL);
	i = 0;
	while (str[i])
	{
		if (str[i] == '.')
			i++;
		else
		{
			tetrimino[j] = str[i];
			i++;
			j++;
		}
	}
	tetrimino[j] = '\0';
	return (tetrimino);
}
