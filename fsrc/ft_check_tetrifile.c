/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_tetrifile.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbateau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 15:56:39 by jbateau           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2016/01/08 19:10:35 by tbaril           ###   ########.fr       */
=======
/*   Updated: 2016/01/08 17:24:40 by jbateau          ###   ########.fr       */
>>>>>>> 4592b5277579671ae87ebc45c510dc4a5e554fe4
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int				ft_check_tetrifile(t_tetrimino *ptetri, char *buf)
{
	int			i;

	i = 0;
	while (buf[20] != '\0')
	{
		if (ft_check_tetri(*(ptetri + i), 0 , 0) == 0)
			return (0);
<<<<<<< HEAD
		++i;
=======
		buf = ft_strstr(buf, "\n\n") + 2;
		i++;
>>>>>>> 4592b5277579671ae87ebc45c510dc4a5e554fe4
	}
	if (ft_check_tetri(*(ptetri + i), 0, 0) == 0)
		return (0);
	else
		return (1);
}
