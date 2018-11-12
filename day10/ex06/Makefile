# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdemiche <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/04 14:00:31 by mdemiche          #+#    #+#              #
#    Updated: 2018/11/05 10:19:00 by mdemiche         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PROGRAM  = do-op

OUT = do-op

SRC = main.c operations.c helper_functions.c

all: $(PROGRAM)

$(PROGRAM):
	gcc -Wall -Wextra -Werror $(SRC) -o $(OUT)

clean:
	/bin/rm -f $(OUT)

fclean: clean
	/bin/rm -f $(OUT)

re: fclean all
