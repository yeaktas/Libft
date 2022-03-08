# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yaktas <yaktas@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/16 11:35:03 by yaktas            #+#    #+#              #
#    Updated: 2022/03/04 14:57:58 by yaktas           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
FLAGS = -Wall -Wextra -Werror

SRC = $(shell find . -type f ! -name "ft_lst*.c" -name "ft_*.c")

OBJ = $(SRC:.c=.o)
BSRC	= $(wildcard ft_lst*.c)
B_OBJ	= $(BSRC:.c=.o)

#%.o: %.c
#	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
		ar -rc $(NAME) $(OBJ)

all: $(NAME)

bonus: $(OBJ) $(B_OBJ)
	ar -rc $(NAME) $(OBJ) $(B_OBJ)
clean: 
	rm -f *.o

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re

git:
	git add .
	git commit -m "$m"
	git push