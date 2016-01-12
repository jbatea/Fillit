/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_tetritab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/07 17:08:40 by tbaril            #+#    #+#             */
/*   Updated: 2016/01/12 16:53:31 by tbaril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_tetrimino	*ft_create_tetritab(char *buf)
{
	int			i;
	int			nbtetri;
	t_tetrimino	*tetritab;

	nbtetri = (ft_strlen(buf) + 1) / 21;
	tetritab = (t_tetrimino*)malloc(sizeof(t_tetrimino) * nbtetri + 1);
	if (tetritab == NULL)
		return (NULL);
	i = 0;
	while (buf[20] != '\0')
	{
		ft_create_tetri(buf, tetritab + i, (i + 'A'));
		(tetritab + i)->next = (tetritab + i + 1);
		buf = ft_strstr(buf, "\n\n") + 2;
		i++;
	}
	ft_create_tetri(buf, tetritab + i, (i + 'A'));
	(tetritab + i)->next = NULL;
	ft_print_coord(tetritab);
	return (tetritab);
}
