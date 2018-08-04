# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ikoloshy <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/21 22:30:07 by ikoloshy          #+#    #+#              #
#    Updated: 2018/03/21 22:40:52 by ikoloshy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c \
	  srcs/ft_strlen.c srcs/ft_swap.c
HDR = includes/
OFL = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -I $(HDR) -c $(SRC)
	ar rc $(NAME) $(OFL)

clean:
	/bin/rm -f $(OFL)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
