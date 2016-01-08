/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_file.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbateau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 13:29:59 by jbateau           #+#    #+#             */
/*   Updated: 2016/01/08 15:34:21 by jbateau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char		*ft_check_file(int argc, char **argv, char *buf)
{
	int		fd;
	size_t	len;

	fd = open(argv[1], O_RDONLY);
	if (argc != 2)
		fd = -1;
	len = read(fd, buf, BUFF_SIZE);
	buf[len] = '\0';
	if (ft_check_ret(len) == 0)
		fd = -1;
	if (fd == -1)
		ft_putendl("error");
	return (buf);
}
