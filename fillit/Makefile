#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/11 15:27:53 by azaporoz          #+#    #+#              #
#    Updated: 2018/05/02 17:45:42 by azaporoz         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = fillit
FLAGS = -Wall -Wextra -Werror
SOURCE = main.c \
			ft_x_left.c \
			ft_x_right.c \
			ft_y_down.c \
			ft_y_up.c \
			ft_check_all.c \
			ft_list_push_back.c \
			ft_lstnew_pos.c \
			ft_create_map.c \
			ft_map_filler.c \
			ft_check_int.c \
			ft_solver.c \
			ft_mover.c \
			ft_valid_catch.c \
			ft_raise_err.c \
			ft_last_terminos.c

HEADER = fillit.h
OBJECTS = $(SOURCE:.c=.o)
FILLLIB = fillit.a
LIBFT = include/libft.a

.NOTPARALLEL: all clean fclean re

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(LIBFT) $(OBJECTS)
	@ar rc $(FILLLIB) $(OBJECTS)
	@gcc $(FLAGS) -o $(NAME) $(FILLLIB) $(LIBFT)

%.o: %.c $(HEADER)
	gcc -c $< -o $@ $(FLAGS) 

$(LIBFT):
	@make -C ./include

clean:
	@/bin/rm -f $(OBJECTS)
	@make clean -C ./include

fclean: clean
	@/bin/rm -f $(FILLLIB) $(NAME)
	@make fclean -C ./include

re: fclean all
