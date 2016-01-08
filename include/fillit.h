/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbateau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Updated: 2016/01/08 17:23:15 by jbateau          ###   ########.fr       */
/*   Updated: 2016/01/08 17:37:37 by jbateau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include "libft.h"

# define N 10
# define J 4

typedef struct	s_tetrimino
{
	char		name;
	t_point		value[J];
}				t_tetrimino;

t_point			*ft_create_pointtab(size_t x, size_t y);
int				ft_check_tetri(t_tetrimino tetri, int cnt, int j);
void			ft_create_tetri(char *buf, t_tetrimino *tetri);
t_tetrimino		*ft_create_tetritab(char *buf);
int				ft_check_ret(int ret);
int				ft_check_tetrifile(t_tetrimino *ptetri, char *buf);
//char			*ft_check_file(int argc, char **argv);
//int			ft_checktetriminos(char *str);
//void			ft_initarray(t_tetrimino *tetri);
//void			ft_printpoint(t_tetrimino tetri);
//void			ft_printarray(t_tetrimino *tetri);

#endif
