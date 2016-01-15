# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbaril <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/07 13:48:40 by tbaril            #+#    #+#              #
#    Updated: 2016/01/14 20:35:06 by tbaril           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILLIT = fillit

NAME = libft.a

TMPLIB = tmp/libft.a

SRC =	ft_atoi.c			\
		ft_bzero.c			\
		ft_isalnum.c		\
		ft_isalpha.c		\
		ft_isascii.c		\
		ft_isdigit.c		\
		ft_isprint.c		\
		ft_itoa.c			\
		ft_memalloc.c		\
		ft_memccpy.c		\
		ft_memchr.c			\
		ft_memcmp.c			\
		ft_memcpy.c			\
		ft_memdel.c			\
		ft_memmove.c		\
		ft_memset.c			\
		ft_putchar.c		\
		ft_putchar_fd.c		\
		ft_putendl.c		\
		ft_putendl_fd.c		\
		ft_putnbr.c			\
		ft_putnbr_fd.c		\
		ft_putstr.c			\
		ft_putstr_fd.c		\
		ft_strcat.c			\
		ft_strchr.c			\
		ft_strclr.c			\
		ft_strcmp.c			\
		ft_strcpy.c			\
		ft_strdel.c			\
		ft_strdup.c			\
		ft_strequ.c			\
		ft_striter.c		\
		ft_striteri.c		\
		ft_strjoin.c		\
		ft_strlcat.c		\
		ft_strlen.c			\
		ft_strmap.c			\
		ft_strmapi.c		\
		ft_strncat.c		\
		ft_strncmp.c		\
		ft_strncpy.c		\
		ft_strnequ.c		\
		ft_strnew.c			\
		ft_strnstr.c		\
		ft_strrchr.c		\
		ft_strsplit.c		\
		ft_strstr.c			\
		ft_strsub.c			\
		ft_strtrim.c		\
		ft_tolower.c		\
		ft_toupper.c		\
		ft_power.c			\
		ft_range.c			\
		ft_strrev.c			\
		ft_strtrimplus.c	\
		ft_putnbrl.c		\
		ft_createtab.c		\
		ft_putstrtab.c		\
		ft_nextsqrt.c		\

FTFILLIT =	main.c					\
			ft_create_tetri.c		\
			ft_create_tetritab.c	\
			ft_check_ret.c			\
			ft_check_tetrifile.c	\
			ft_check_tetri.c		\
			ft_check_value.c		\
			ft_check_allvalue.c		\
			ft_create_resolvetab.c	\
			ft_make_tab.c			\
			ft_lentab.c				\
			ft_print_tetri.c		\
			ft_tetritab_len.c		\
			ft_resolve.c			\
			ft_final_resolve.c		\
			ft_resolve_tetri.c		\
			ft_return_max.c			\
			ft_print_coord.c		\
			ft_fillit_putres.c		\

SRCC = $(patsubst %.c,src/%.c,$(SRC))

SRCFILLIT = $(patsubst %.c,fsrc/%.c,$(FTFILLIT))

OBJET = $(SRC:.c=.o) $(FTFILLIT:.c=.o)

TMPO = $(patsubst %.o,tmp/%.o,$(OBJET))

CC = clang -Wall -Wextra -Werror -Iinclude

all : $(NAME)

$(NAME) :
	$(CC) $(SRCC) $(SRCFILLIT) -c
	@ar rc $(NAME) $(OBJET)
	@mkdir tmp
	@mv $(OBJET) $(NAME) tmp
	$(CC) -o $(FILLIT) $(TMPO)

clean :
	@rm -rf $(OBJET) $(NAME)
	@rm -rf $(TMPO)

fclean : clean
	@rm -rf $(FILLIT)
	@rm -rf tmp

re : fclean all

