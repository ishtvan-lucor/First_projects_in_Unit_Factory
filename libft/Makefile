# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ikoloshy <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/24 17:36:13 by ikoloshy          #+#    #+#              #
#    Updated: 2018/04/01 22:20:51 by ikoloshy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft
LIB = libft.a
SRC = ft_putchar.c ft_putstr.c ft_bzero.c ft_memalloc.c ft_memdel.c ft_strnew.c \
	  ft_strdel.c ft_strclr.c ft_strequ.c ft_strnequ.c ft_memset.c ft_memcpy.c \
	  ft_memccpy.c ft_strlen.c ft_strcpy.c ft_strncpy.c ft_strcat.c ft_strncat.c \
	  ft_strchr.c ft_strrchr.c ft_strcmp.c ft_strncmp.c ft_strstr.c ft_strnstr.c
OFL = ft_putchar.o ft_putstr.o ft_bzero.o ft_memalloc.o ft_memdel.o ft_strnew.o \
	  ft_strdel.o ft_strclr.o ft_strequ.o ft_strnequ.o ft_memset.o ft_memcpy.o \
	  ft_memccpy.o ft_strlen.o ft_strcpy.o ft_strncpy.o ft_strcat.o ft_strncat.o \
	  ft_strchr.o ft_strrchr.o ft_strcmp.o ft_strncmp.o ft_strstr.o ft_strnstr.o
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
