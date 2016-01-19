/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 18:52:13 by tbaril            #+#    #+#             */
/*   Updated: 2016/01/19 10:52:22 by jbateau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static t_tetrimino	*ft_check_all(int argc, char *buf, size_t len)
{
	int			fd;
	t_tetrimino	*ptetri;

	ft_putendl("ft_check_all");
	fd = 0;
	ptetri = NULL;
	if (argc != 2)
		fd = -1;	
	if (ft_check_ret(len) == 0)
		fd = -1;
	if (fd != -1 && ft_check_allvalue(buf, len) == 0)
		fd = -1;
	if (fd != -1)
		ptetri = ft_create_tetritab(buf);
	if (fd != -1 && (ft_check_tetrifile(ptetri, buf) == 0))
		fd = -1;
	if (fd == -1)
	{
		ft_putendl("error");
		exit(0);
	}
	return (ptetri);
}

int			main(int argc, char **argv)
{
	char		buf[BUFF_SIZE + 1];
	size_t		len;
	int			fd;
	t_tetrimino	*tetri;

	ft_putendl("MAIN");
	fd = open(argv[1], O_RDONLY);
	len = read(fd, buf, BUFF_SIZE);
	buf[len] = '\0';
	tetri = ft_check_all(argc, buf, len);
	ft_final_resolve(tetri, ft_lentab(tetri));
	return (0);
}
