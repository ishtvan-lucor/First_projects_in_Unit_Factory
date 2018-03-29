# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ikoloshy <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/24 17:36:13 by ikoloshy          #+#    #+#              #
#    Updated: 2018/03/29 21:02:59 by ikoloshy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft
LIB = libft.a
SRC = ft_putchar.c ft_putstr.c ft_bzero.c ft_memalloc.c ft_memdel.c ft_strnew.c \
	  ft_strdel.c ft_strclr.c ft_strequ.c ft_strnequ.c
OFL = ft_putchar.o ft_putstr.o ft_bzero.o ft_memalloc.o ft_memdel.o ft_strnew.o \
	  ft_strdel.o ft_strclr.o ft_strequ.o ft_strnequ.o
HDR = includes/
FLAG = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(FLAG) -I $(HDR) -c $(SRC)
	ar rc $(LIB) $(OFL)

main: all
	gcc $(FLAG) -o $(NAME) main.c -I $(HDR) -L. -lft

clean:
	/bin/rm -f $(OFL)

fclean: clean
	/bin/rm -f $(NAME) $(LIB)

re: fclean all

rem: fclean all main clean
