/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 05:11:57 by tbaril            #+#    #+#             */
/*   Updated: 2015/12/04 05:18:58 by tbaril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		*ft_range(int min, int max)
{
	int diff;
	int i;
	int *tab;

	diff = max - min;
	i = 0;
	tab = (int *)malloc(sizeof(int) * diff);
	if (max < min)
		return (NULL);
	while (min != max + 1)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
