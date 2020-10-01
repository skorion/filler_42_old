/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 15:13:58 by xgeorge           #+#    #+#             */
/*   Updated: 2020/10/01 16:54:55 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"
#include <stdio.h>

/*
 * TODO: write this funscishion rigt
 */
void	get_enemy(t_data *data)
{
	data->enemy = 0;
}

/*
 * TODO: write this funscishion rigt
 */
void	get_size_map(t_data *data)
{
	data->map.w = 10;
	data->map.h = 10;
}


/*
 * TODO: write this funscishion rigt
 */
void	get_field_map(t_map *map)
{
	int i;
	int j;

	i = 0;
	while (i < map->h)
	{
		j = 0;
		while (j < map->w)
		{
			map->field[i * map->w + j] = 0;
			j++;
		}
		i++;
	}
}


void	print_field_map(t_map *map)
{
	int i;
	int j;

	i = 0;
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

int		main(void)
{
	t_data data;

	get_enemy(&data);
	get_size_map(&data);
	new_fild(&(data.map));
	get_field_map(&data.map);
	data.map.field[2 * data.map.w + 3] = 1;
	print_field_map(&(data.map));
	filling_map(&(data.map));

	print_field_map(&(data.map));

	return (0);
}
