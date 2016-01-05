/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 16:54:53 by tbaril            #+#    #+#             */
/*   Updated: 2015/12/10 20:32:55 by tbaril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	ld;
	size_t	ls;
	size_t	i;

	ld = ft_strlen(dest);
	ls = ft_strlen((char *)src);
	i = 0;
	if (size > ld)
	{
		while (src[i] != '\0' && (ld + i + 1) < size)
		{
			dest[ld + i] = src[i];
			i++;
		}
		dest[ld + i] = '\0';
		return (ld + ls);
	}
	return ((ld + ls) - (ld - size));
}
