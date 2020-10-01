# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/01 15:30:23 by xgeorge           #+#    #+#              #
#    Updated: 2020/10/01 15:40:38 by xgeorge          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC=	main.c\
		data.c\
		map_fill.c\
		map_work.c
FLAG=-Wall -Wextra -Werror


all:
	gcc $(FLAG) $(SRC) libft.a