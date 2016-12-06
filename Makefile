# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iiliuk <iiliuk@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/06 11:33:37 by iiliuk            #+#    #+#              #
#    Updated: 2016/12/06 11:46:57 by iiliuk           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = test_gnl
FLAG = -Wall -Wextra -Werror
SRC = main.c get_next_line.c
OBJ = $(SRC:.c=.o)

$(NAME):
	make -C libft/ fclean && make -C libft/
	clang $(FLAG) -I libft/ -c $(SRC)
	clang -o $(NAME) $(OBJ) -I libft/ -L libft/ -lft

all: $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re:	fclean all

%.o: %.c
	$(CC) $(FLAG) -c $< -o $@

.PHONY: all clean fclean re