# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdemiche <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/05 10:19:28 by mdemiche          #+#    #+#              #
#    Updated: 2018/11/05 10:39:05 by mdemiche         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

OUT = ft_putchar.o ft_putstr.o ft_swap.o ft_strlen.o ft_strcmp.o

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c ./srcs/ft_*.c -I ./includes/ft.h
	ar rc $(NAME) $(OUT)
	ranlib $(NAME)	

clean:
	/bin/rm -f $(OUT)

fclean:	clean
	/bin/rm -f $(NAME)

re: fclean all
