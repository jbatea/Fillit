/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 17:26:47 by tbaril            #+#    #+#             */
/*   Updated: 2015/12/15 16:03:27 by tbaril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_compteur(int n)
{
	int cmp;

	cmp = 1;
	if (n < 0)
	{
		n = -n;
		cmp++;
	}
	while (n >= 10)
	{
		n = n / 10;
		cmp++;
	}
	return (cmp);
}

char		*ft_itoa(int n)
{
	int		i;
	char	*s;

	i = ft_compteur(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	s = ft_strnew(i);
	if (s == NULL)
		return (NULL);
	if (n >= 0)
		i--;
	if (n < 0)
	{
		s[0] = '-';
		n = -n;
		i--;
	}
	while (n >= 10)
	{
		s[i] = (n % 10) + 48;
		n = n / 10;
		i--;
	}
	s[i] = n + 48;
	return (s);
}
