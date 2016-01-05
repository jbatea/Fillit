/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 15:04:24 by tbaril            #+#    #+#             */
/*   Updated: 2016/01/05 13:41:37 by tbaril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	if (s2[i] == '\0')
		return ((char *)s1);
	while (i < n && s1[i] != '\0')
	{
		j = 0;
		if (s1[i] == s2[j])
		{
			while ((s1[i] == s2[j]) && s2[j] != '\0' && i < n)
			{
				i++;
				j++;
			}
			i = i - j;
			if (s2[j] == '\0')
				return ((char *)s1 + i);
		}
		i++;
	}
	return (NULL);
}
