# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hczuba <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/03 11:41:00 by hczuba            #+#    #+#              #
#    Updated: 2016/08/03 11:41:01 by hczuba           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-2
CC = gcc
FLAGS = -Wall -Werror -Wextra
FILES = ./ft_putstr.c \
		./rush03.c \
		./rush04.c \
		./rush01.c \
		./test_rush.c \
		./rush00.c \
		./main.c \
		./ft_atoi.c \
		./rush02.c \
		./w_h.c 
HEADER = rush_2.h

all: $(NAME)

$(NAME):
		$(CC) $(FLAGS) -o $(NAME) -I $(HEADER) $(FILES)

.PHONY: clean fclean all re

fclean:
		rm ./$(NAME)

re: fclean	all
