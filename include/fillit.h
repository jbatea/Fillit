/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbateau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2016/01/07 14:20:49 by jbateau           #+#    #+#             */
/*   Updated: 2016/01/10 15:36:44 by tbaril           ###   ########.fr       */
=======
/*   Updated: 2016/01/08 17:23:15 by jbateau          ###   ########.fr       */
<<<<<<< HEAD
/*   Updated: 2016/01/10 15:11:16 by jbateau          ###   ########.fr       */
=======
/*   Updated: 2016/01/08 17:37:37 by jbateau          ###   ########.fr       */
>>>>>>> 4592b5277579671ae87ebc45c510dc4a5e554fe4
>>>>>>> 20f7d66e819fcdf1e46c1de6d16a2a0971899fd2
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

typedef struct	s_resolve
{
	int			*x;
	int			*y;
	char		*tab;
}				t_resolve;

t_resolve		*ft_create_resolvetab(size_t size);
t_point			*ft_create_pointtab(size_t x, size_t y);
int				ft_check_tetri(t_tetrimino tetri, int cnt, int j);
void			ft_create_tetri(char *buf, t_tetrimino *tetri, char a);
t_tetrimino		*ft_create_tetritab(char *buf);
int				ft_check_ret(int ret);
int				ft_check_tetrifile(t_tetrimino *ptetri, char *buf);
int				ft_check_value(char *str);
int				ft_check_allvalue(char *buf, size_t len);

#endif
