/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 15:13:58 by xgeorge           #+#    #+#             */
/*   Updated: 2020/11/01 06:07:36 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void	ft_strsplit_free(char ***strsplit)
{
	char	**current;

	if (strsplit && *strsplit)
	{
		current = ((*strsplit));
		while ((*current))
			free((*(current++)));
		free((*strsplit));
		(*strsplit) = NULL;
	}
}

size_t	ft_strsplit_len(char **strsplit)
{
	size_t	size;

	size = 0;
	if (strsplit)
		while (*strsplit)
		{
			size++;
			strsplit++;
		}
	return (size);
}

void	print_field_map(t_map *map)
{
	int i;
	int j;

	i = 0;
	printf("\nw - %d\nh - %d\n", map->w, map->h);

	printf("--------------------\n");
	while (i < map->h)
	{
		j = 0;
		while (j < map->w)
		{
			printf("%3d ", map->field[i * map->w + j]);
			j++;
		}
		printf("\n");
		i++;
	}
}

static int	validate_player(char **strsplit)
{
	if (ft_strsplit_len(strsplit) != 5
		|| ft_strcmp(strsplit[0], "$$$")
		|| ft_strcmp(strsplit[1], "exec")
		|| (ft_strcmp(strsplit[2], "p1") && ft_strcmp(strsplit[2], "p2"))
		|| ft_strcmp(strsplit[3], ":")
		|| strsplit[4][0] != '['
		|| !ft_strstr(strsplit[4], "xgeorge.filler]"))
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}

int			parse_player(t_data *data)
{
	char	*line;
	char	**strsplit;

	line = NULL;
	strsplit = NULL;
	if (get_next_line(STD_IN, &line) != 1
		|| !(strsplit = ft_strsplit(line, ' '))
		|| validate_player(strsplit) != EXIT_SUCCESS)
	{
		ft_strdel(&line);
		ft_strsplit_free(&strsplit);
		return (EXIT_FAILURE);
	}
	data->map.player_symbol = (!ft_strcmp(strsplit[2], "p1")) ? 'O' : 'X';
	data->map.enemy_symbol = (!ft_strcmp(strsplit[2], "p1")) ? 'X' : 'O';
	ft_strdel(&line);
	ft_strsplit_free(&strsplit);
	return (EXIT_SUCCESS);
}

void	print_field_piece(t_piece *piece)
{
	int i;
	int j;

	i = 0;
	printf("\npiece\nw - %d\nh - %d\n", piece->w, piece->h);

	printf("--------------------\n");
	while (i < piece->h)
	{
		j = 0;
		while (j < piece->w)
		{
			printf("%d", piece->field[i * piece->w + j]);
			j++;
		}
		printf("\n");
		i++;
	}
}

int		main(void)
{
	t_data data;


	parse_player(&data);
	data.map.field = NULL;
	data.piece.field = NULL;

//	new_fild(&(data.map));
//	data.map.field[5 * data.map.w + 7] = 1;
//	data.map.field[4 * data.map.w + 3] = 1;
//	print_field_map(&(data.map));
//	print_field_piece(&(data.piece));

	while (get_need_data(&data) > 0)
	{
		filling_map(&(data.map));
		data.solution = get_solution(&(data.map), &(data.piece));
//		write(STD_IN, "123", 3);
		if (data.solution.exist == FALSE)
		{
			ft_putstr("0 0\n");
			del_data(&data);
			return (-1);
		}
		else
			print_solution(data.solution);
		print_field_map(&(data.map));
		print_field_piece(&(data.piece));
		free(data.piece.field);
		data.piece.field = NULL;
	}

	printf("player - %c\nememy - %c\n", data.map.player_symbol, data.map.enemy_symbol);

//	filling_map(&(data.map));
// $$$ exec p2 : [players/xgeorge.filler]
//	print_field_map(&(data.map));

	del_data(&data);
	return (0);
}
