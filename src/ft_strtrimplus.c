/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrimplus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 20:50:44 by tbaril            #+#    #+#             */
/*   Updated: 2015/12/14 12:26:49 by tbaril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrimplus(const char *s)
{
	int		i;
	int		j;
	int		len;
	char	*str;

	len = ft_strlen((char *)s);
	str = ft_strnew(len);
	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t' || s[i] == '\r'
			|| s[i] == '\v' || s[i] == '\f')
		i++;
	while (s[len - 1] == ' ' || s[len - 1] == '\n' || s[len - 1] == '\t'
			|| s[len - 1] == '\v' || s[len - 1] == '\r' || s[len - 1] == '\f')
		len--;
	j = 0;
	while (i != len)
	{
		str[j] = s[i];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}
