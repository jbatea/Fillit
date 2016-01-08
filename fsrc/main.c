/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 18:52:13 by tbaril            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2016/01/08 16:31:05 by tbaril           ###   ########.fr       */
=======
/*   Updated: 2016/01/08 16:37:07 by jbateau          ###   ########.fr       */
>>>>>>> e84ac6c1e09fee06aff57a645c2199c4aab4099c
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

#define BUFF_SIZE 546

int		main(int argc, char **argv)
{
<<<<<<< HEAD
	t_point *test;

	//char buf[42] = "...#\n..#.\n.#..\n#...\n\n...#\n...#\n...#\n...#\n";
	test = ft_create_pointtab(4, 4);
	ft_putstrtab(ft_ptochar(test, 4));
=======
	t_tetrimino *ptetri;
	char 		buf[BUFF_SIZE + 1];
	int			fd;
	size_t		len;

	fd = open(argv[1], O_RDONLY);
	if (argc != 2)
		fd = -1;
	len = read(fd, buf, BUFF_SIZE);
	buf[len] = '\0';
	if (ft_check_ret(len) == 0)
		fd = -1;
	if (fd == -1)
		ft_putendl("error");
	ptetri = ft_create_tetritab(buf);
	ft_putnbrl(ft_check_tetrifile(ptetri));
>>>>>>> e84ac6c1e09fee06aff57a645c2199c4aab4099c
	return 0;
}
