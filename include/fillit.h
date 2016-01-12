/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbateau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/07 14:20:49 by jbateau           #+#    #+#             */
/*   Updated: 2016/01/12 16:58:32 by tbaril           ###   ########.fr       */
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

typedef struct			s_tetrimino
{
	int					*x;
	int					*y;
	char				a;
	struct s_tetrimino	*next;
}						t_tetrimino;

void					ft_print_coord(t_tetrimino *tetri);
int						ft_return_ymax(t_tetrimino *tetri);
int						ft_return_xmax(t_tetrimino *tetri);
char					*ft_resolve_tetri(t_tetrimino *tetri, size_t tabsize);
char					*ft_final_resolve(t_tetrimino *tetri, size_t tabsize);
int						ft_resolve(char *str, t_tetrimino *tetri, size_t size);
int						ft_tetritab_len(t_tetrimino *tetri);
void					ft_free_tetritab(t_tetrimino *tetri);
void					ft_print_tetri(t_tetrimino *tetri, char *tab, int len);
char					*ft_create_resolvetab(size_t size);
int						ft_check_tetri(t_tetrimino *tetri, int cnt, int j);
void					ft_create_tetri(char *buf, t_tetrimino *tetri, char a);
t_tetrimino				*ft_create_tetritab(char *buf);
int						ft_check_ret(int ret);
int						ft_check_tetrifile(t_tetrimino *ptetri, char *buf);
int						ft_check_value(char *str);
int						ft_check_allvalue(char *buf, size_t len);
int						ft_lentab(t_tetrimino *tetri);

#endif
