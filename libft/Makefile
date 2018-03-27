# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ikoloshy <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/24 17:36:13 by ikoloshy          #+#    #+#              #
#    Updated: 2018/03/27 15:39:34 by ikoloshy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft
LIB = libft.a
SRC = *.c
OBJ = *.o
HEAD = includes/
FLAG = -Wall -Wextra -Werror

.PHONY: all clean fclean re

.NOTPARALLEL: all clean fclean re

all: $(NAME)

$(NAME): $(LIB)
	gcc $(FLAG) -I $(HDR) $(SRC)

$(LIB): $(OBJ)
	ar rc $(LIB) $(OBJ)

%.o: %.c
	gcc $(FLAG) $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f $(LIB)

re: fclean all
