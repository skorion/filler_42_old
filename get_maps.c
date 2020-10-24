/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_maps.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 13:55:36 by xgeorge           #+#    #+#             */
/*   Updated: 2020/10/24 16:11:08 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int		get_size_map(t_map *map, char *line)
{
	int i;

	i = 8;
	map->h = ft_atoi(line + i);
	while (line[i] != ' ')
		i++;
	map->w = ft_atoi(line + i);
	if ((map->field = (int *)ft_memalloc(map->w * map->h * sizeof(int))) == NULL)
		return (-1);
	return (1);
}

int	read_map(t_map *map)
{
	int i;
	int j;
	char *line;

	i = 0;
	while (i < map->h)
	{
		j = 4;
		get_next_line(STD_IN, &line);
		while (j < map->w)
		{
			if (line[j] == '.')
			{
				map->field[i * map->w + (j - 4)] = 0;
			}
			else
			{
				if (line[j] == map->player_symbol)
					map->field[i * map->w + (j - 4)] = -1;
				else
					map->field[i * map->w + (j - 4)] = 2;
			}
			write(0, &line[j], 1);
			j++;
		}
		i++;
		write(0, "\n", 1);
	}
	return (1);
}

int	get_maps(t_map *map, char **line)
{
	get_size_map(map, *line);
	free(*line);
	get_next_line(STD_IN, line);
	ft_strdel(line);
	read_map(map);
	return (1);
}