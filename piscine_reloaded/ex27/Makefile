# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ikoloshy <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/22 18:48:23 by ikoloshy          #+#    #+#              #
#    Updated: 2018/03/22 19:02:06 by ikoloshy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_display_file.c
HDR = includes/
FLG = -Wall -Wextra -Werror
LIB = libft.a
OFL = ft_putchar.o ft_putstr.o ft_display_file.o

all: $(NAME)

$(NAME):
	gcc $(FLAG) -I $(HDR) -c $(SRC)
	ar rc $(LIB) $(OFL)
	gcc $(FLG) -o $(NAME) main.c -I $(HDR) -L. -lft

clean:
	/bin/rm -f $(OFL)

fclean: clean
	/bin/rm -f $(NAME) $(LIB)

re: fclean all
