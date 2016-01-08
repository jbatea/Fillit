/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lentab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbateau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/23 16:08:16 by jbateau           #+#    #+#             */
/*   Updated: 2015/12/23 16:40:17 by jbateau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lentab(int len, size_t legallen)
{
	size_t	nb;
	char	**tab;

	nb = ft_nextsqrt((len / legallen) * 4);
	tab = ft_filltab(ft_strtabnew(nb, nb), nb);
	ft_putendl("fillit = ");
	ft_putstrtab(tab);
}
