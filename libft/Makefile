# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ikoloshy <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/24 17:36:13 by ikoloshy          #+#    #+#              #
#    Updated: 2018/04/03 21:31:11 by ikoloshy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft
LIB = libft.a
SRC = ft_putchar.c ft_putstr.c ft_bzero.c ft_memalloc.c ft_memdel.c ft_strnew.c \
	  ft_strdel.c ft_strclr.c ft_strequ.c ft_strnequ.c ft_memset.c ft_memcpy.c \
	  ft_memccpy.c ft_strlen.c ft_strcpy.c ft_strncpy.c ft_strcat.c ft_strncat.c \
	  ft_strchr.c ft_strrchr.c ft_strcmp.c ft_strncmp.c ft_strstr.c ft_strnstr.c \
	  ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	  ft_toupper.c ft_tolower.c ft_strdup.c ft_memmove.c ft_memchr.c ft_memcmp.c \
	  ft_strlcat.c ft_putendl.c ft_strsub.c
OFL = ft_putchar.o ft_putstr.o ft_bzero.o ft_memalloc.o ft_memdel.o ft_strnew.o \
	  ft_strdel.o ft_strclr.o ft_strequ.o ft_strnequ.o ft_memset.o ft_memcpy.o \
	  ft_memccpy.o ft_strlen.o ft_strcpy.o ft_strncpy.o ft_strcat.o ft_strncat.o \
	  ft_strchr.o ft_strrchr.o ft_strcmp.o ft_strncmp.o ft_strstr.o ft_strnstr.o \
	  ft_atoi.o ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o \
	  ft_toupper.o ft_tolower.o ft_strdup.o ft_memmove.o ft_memchr.o ft_memcmp.o \
	  ft_strlcat.o ft_putendl.o ft_strsub.o
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
