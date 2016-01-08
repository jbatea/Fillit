/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbateau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/07 14:20:49 by jbateau           #+#    #+#             */
/*   Updated: 2016/01/07 15:48:06 by jbateau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
#include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include "libft.h"

# define N 10
# define J 4

typedef	struct	point
{
	int			x;
	int			y;
}				point;

typedef struct	tetrimino
{
	char		name;
	point		value[J];
}				tetrimino;

int				ft_checkret(int ret);
int				ft_splittetriminos(char *buf, size_t len);
int				ft_checktetriminos(char *str);
void			ft_initarray(tetrimino *tetri);
void			ft_printpoint(tetrimino tetri);
void			ft_printarray(tetrimino *tetri);

#endif
