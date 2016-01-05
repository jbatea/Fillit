/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/20 19:21:05 by tbaril            #+#    #+#             */
/*   Updated: 2015/12/20 20:32:58 by tbaril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_filltab(char **tab, size_t c);

int		main(void)
{
	char **tab;

	tab = ft_strtabnew(4, 4);
	if (tab == NULL)
		return (0);
	tab = ft_filltab(tab, 4);
	ft_putstrtab(tab);
	return (0);
}
