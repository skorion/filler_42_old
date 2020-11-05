FLAG=-Wall -Wextra -Werror

LIBA=libft.a

NAME=xgeorge.filler

SRCS := main.c
SRCS +=	data.c
SRCS +=	get_maps.c
SRCS +=	get_need_data.c
SRCS += get_tetramina.c
SRCS += make_solition.c
SRCS += map_fill.c
SRCS += map_work.c
SRCS += solition.c

OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@make -C libft
	@gcc -o $(NAME) $(FLAG) $(OBJ) libft/libft.a
	@echo "Filler done"

clean:
	@make clean -C libft
	@rm -f $(OBJ)

fclean: clean
	@make fclean -C libft
	@rm -f $(NAME)

re: fclean all