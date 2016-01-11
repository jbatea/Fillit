/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbateau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/07 14:20:49 by jbateau           #+#    #+#             */
/*   Updated: 2016/01/11 15:33:16 by tbaril           ###   ########.fr       */
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
	int			*x;
	int			*y;
	char		a;
}				t_tetrimino;

char			*ft_create_resolvetab(size_t size);
int				ft_check_tetri(t_tetrimino tetri, int cnt, int j);
void			ft_create_tetri(char *buf, t_tetrimino *tetri, char a);
t_tetrimino		*ft_create_tetritab(char *buf);
int				ft_check_ret(int ret);
int				ft_check_tetrifile(t_tetrimino *ptetri, char *buf);
int				ft_check_value(char *str);
int				ft_check_allvalue(char *buf, size_t len);
int				ft_lentab(int len);

#endif
