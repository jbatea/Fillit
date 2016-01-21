/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 17:12:32 by tbaril            #+#    #+#             */
/*   Updated: 2015/12/14 15:30:45 by tbaril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	if (len == 0)
		return (dest);
	if (dest > src)
	{
		while (len != 0)
		{
			len--;
			d[len] = s[len];
		}
	}
	else
		ft_memcpy(dest, src, len);
	return (d);
}
