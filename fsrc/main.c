/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 18:52:13 by tbaril            #+#    #+#             */
/*   Updated: 2016/01/08 17:27:52 by jbateau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

#define BUFF_SIZE 546

int		main(int argc, char **argv)
{
	//t_point *test;

	//char buf[42] = "...#\n..#.\n.#..\n#...\n\n...#\n...#\n...#\n...#\n";
	//test = ft_create_pointtab(4, 4);
	//ft_putstrtab(ft_ptochar(test, 4));
	char 		buf[BUFF_SIZE + 1];
	int			fd;
	size_t		len;
	t_tetrimino *ptetri;

	fd = open(argv[1], O_RDONLY);
	if (argc != 2)
		fd = -1;
	len = read(fd, buf, BUFF_SIZE);
	buf[len] = '\0';
	if (ft_check_ret(len) == 0)
		fd = -1;
	ptetri = ft_create_tetritab(buf);
	if (ft_check_tetrifile(ptetri, buf) == 0)
		fd = -1;
	if (fd == -1)
		ft_putendl("error");
	return 0;
}
