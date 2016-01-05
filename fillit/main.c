/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbateau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 14:21:30 by jbateau           #+#    #+#             */
/*   Updated: 2015/12/23 17:26:35 by jbateau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define BUF_SIZE 567

void		ft_checkfile(int argc, char **argv)
{
	int		fd;
	size_t	len;
	char	buf[BUF_SIZE + 1];

	fd = open(argv[1], O_RDONLY);
	if (argc != 2)
		fd = -1;
	len = read(fd, buf, BUF_SIZE);
	buf[len] = '\0';
	if (ft_checkret(len) == 0)
		fd = -1;
	if (fd != -1)
		if (ft_splittetriminos(buf, len) == 0)
			fd = -1;
	if (fd == -1)
		ft_putstrerror();
	if (fd != -1 && (close(fd) == -1))
		ft_putendl("close() error");
}

int			main(int argc, char **argv)
{
	ft_checkfile(argc, argv);
	return (0);
}
