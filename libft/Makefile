# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/19 14:56:44 by xgeorge           #+#    #+#              #
#    Updated: 2020/11/04 21:05:04 by xgeorge          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_isalpha.c ft_isdigit.c ft_isprint.c ft_memset.c ft_strlen.c ft_tolower.c ft_toupper.c ft_bzero.c ft_memmove.c \
		ft_memccpy.c ft_memcpy.c ft_memchr.c ft_putchar.c ft_memcmp.c ft_strdup.c ft_strcpy.c ft_strncpy.c ft_strcat.c \
		ft_strncat.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strstr.c ft_strnstr.c ft_strcmp.c ft_strncmp.c ft_max_t_size.c \
		ft_isascii.c ft_isalnum.c ft_invisible.c ft_atoi.c ft_putchar_fd.c ft_putchar.c ft_putstr_fd.c ft_putstr.c ft_putendl.c \
		ft_putendl_fd.c ft_putnbr.c ft_putnbr_fd.c ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c ft_striter.c \
		ft_striteri.c ft_strmapi.c ft_strmap.c ft_strequ.c ft_strnequ.c ft_strsub.c ft_strjoin.c ft_itoa.c ft_numlen.c ft_strsplit.c \
		ft_strtrim.c ft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_lstadd.c ft_lstiter.c ft_lstmap.c ft_clean_tab.c ft_sqrt.c ft_range.c \
		ft_newdlist.c ft_addendlist.c ft_insertdlist.c ft_addstartdlist.c ft_removedlist.c ft_cleardlist.c ft_reduse.c \
		ft_gcvt.c ft_ullpower.c ft_ullnumlen.c ft_strcat_loop.c ft_llinumlen.c ft_is_a_inf_or_nan.c get_next_line.c
OBJ = ft_bzero.o ft_isalpha.o ft_isdigit.o ft_isprint.o ft_memset.o ft_strlen.o ft_tolower.o ft_toupper.o ft_memcpy.o ft_memccpy.o \
		ft_memmove.o ft_memchr.o ft_putchar.o ft_memcmp.o ft_strdup.o ft_strcpy.o ft_strncpy.o ft_strcat.o ft_strncat.o \
		ft_strlcat.o ft_strchr.o ft_strrchr.o ft_strstr.o ft_strnstr.o ft_strcmp.o ft_strncmp.o ft_max_t_size.o ft_isascii.o \
		ft_isalnum.o ft_invisible.o ft_atoi.o ft_putchar_fd.o ft_putstr.o ft_putstr_fd.o ft_putendl.o ft_putendl_fd.o ft_putnbr.o \
		ft_putnbr_fd.o ft_memalloc.o ft_memdel.o ft_strnew.o ft_strdel.o ft_strclr.o ft_striter.o ft_striteri.o ft_strmapi.o ft_strmap.o \
		ft_strequ.o ft_strnequ.o ft_strsub.o ft_strjoin.o ft_itoa.o ft_numlen.o ft_strsplit.o ft_strtrim.o ft_lstnew.o ft_lstdelone.o \
		ft_lstdel.o ft_lstadd.o ft_lstiter.o ft_lstmap.o ft_clean_tab.o ft_sqrt.o ft_range.o \
		ft_newdlist.o ft_addendlist.o ft_insertdlist.o ft_addstartdlist.o ft_removedlist.o ft_cleardlist.o ft_reduse.o \
		ft_gcvt.o ft_ullpower.o ft_ullnumlen.o ft_strcat_loop.o ft_llinumlen.o ft_is_a_inf_or_nan.o get_next_line.o
NAME = libft.a
INC = includes
FLAG = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

$(OBJ): %.o : %.c $(INC)
	gcc $(FLAG) -c $< -I $(INC)
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
