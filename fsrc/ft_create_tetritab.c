/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_tetritab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/07 17:08:40 by tbaril            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2016/01/10 15:07:47 by jbateau          ###   ########.fr       */
=======
<<<<<<< HEAD
/*   Updated: 2016/01/10 14:43:14 by tbaril           ###   ########.fr       */
=======
/*   Updated: 2016/01/08 17:37:04 by jbateau          ###   ########.fr       */
>>>>>>> 4592b5277579671ae87ebc45c510dc4a5e554fe4
>>>>>>> 20f7d66e819fcdf1e46c1de6d16a2a0971899fd2
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_tetrimino	*ft_create_tetritab(char *buf)
{
	int			i;
	int			nbtetri;
	t_tetrimino	*tetritab;

	nbtetri = (ft_strlen(buf) + 1) / 21;
	tetritab = (t_tetrimino*)malloc(sizeof(t_tetrimino) * nbtetri);
	if (tetritab == NULL)
		return (NULL);
	i = 0;
	while (buf[20] != '\0')
	{
		ft_create_tetri(buf, tetritab + i, (i + 'A'));
		buf = ft_strstr(buf, "\n\n") + 2;
		i++;
	}
	ft_create_tetri(buf, tetritab + i, (i + 'A'));
	return (tetritab);
}
