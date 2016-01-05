/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 04:44:35 by tbaril            #+#    #+#             */
/*   Updated: 2015/12/04 04:49:45 by tbaril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(const char *s)
{
	char	*str;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(s) - 1;
	str = ft_strnew(len + 1);
	if (str == NULL)
		return (NULL);
	while (len >= 0)
	{
		str[i] = s[len];
		i++;
		len--;
	}
	return (str);
}
