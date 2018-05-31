#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/11 15:27:53 by azaporoz          #+#    #+#              #
#    Updated: 2018/05/18 18:00:31 by ikoloshy         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = gnl
FLAGS = -Wall -Wextra -Werror
SOURCE = main.c \
			get_next_line.c
HEADER = fget_next_line.h
OBJECTS = $(SOURCE:.c=.o)
FILLLIB = gnl.a
LIBFT = libft/libft.a

.NOTPARALLEL: all clean fclean re

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(LIBFT) $(OBJECTS)
	ar rc $(FILLLIB) $(OBJECTS)
	gcc $(FLAGS) -o $(NAME) $(FILLLIB) $(LIBFT)

%.o: %.c $(HEADER)
	gcc -c $< -o $@ $(FLAGS) 

$(LIBFT):
	make -C ./libft

clean:
	/bin/rm -f $(OBJECTS)
	make clean -C ./libft

fclean: clean
	/bin/rm -f $(FILLLIB) $(NAME)
	make fclean -C ./libft

re: fclean all
