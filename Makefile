# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: panoirou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/25 14:12:10 by panoirou          #+#    #+#              #
#    Updated: 2016/11/28 17:05:49 by panoirou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
FLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRCS = ft_putchar.c ft_putstr.c ft_strlen.c
OBJ = $(patsubst %.c, %.o, $(SRCS))

all: $(NAME)

$(NAME):
		@$(CC) $(FLAGS) -c $(SRCS)
		@ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

clean:
		rm -rf $(OBJ);

fclean: clean
		rm -rf $(NAME)

re: fclean all
