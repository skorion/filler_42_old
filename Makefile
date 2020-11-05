# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/01 15:30:23 by xgeorge           #+#    #+#              #
#    Updated: 2020/11/05 05:03:28 by xgeorge          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC=	main.c\
		data.c\
		map_fill.c\
		map_work.c \
		get_maps.c \
		get_need_data.c \
		get_tetramina.c \
		make_solition.c \
		solition.c
FLAG=-Wall -Wextra -Werror


LIBA=libft.a

NAME=xgeorge.filler

all:
	gcc -o $(NAME) $(FLAG) $(SRC) $(LIBA)