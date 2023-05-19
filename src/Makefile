# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jchakir <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/23 15:14:39 by jchakir           #+#    #+#              #
#    Updated: 2021/11/23 15:52:35 by jchakir          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = @gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
SRC = ft_itoa_for_printf.c ft_len_put_unsign_nbr.c ft_len_putchar.c\
	  ft_len_puthex.c ft_len_putnbr.c ft_len_putstr.c ft_printf.c
OBJ = $(SRC:.c=.o)

all: $(NAME)
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
clean:
	rm -rf $(OBJ)
fclean: clean
	rm -rf $(NAME)
re: fclean all

