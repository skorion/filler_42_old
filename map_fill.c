/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_fill.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 21:30:50 by xgeorge           #+#    #+#             */
/*   Updated: 2020/11/05 02:41:04 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void	get_quence(int *quence, t_map *map, int *max)
{
	int i;
	int j;

	i = 0;
	while (i < map->h)
	{
		j = 0;
		while (j < map->w)
		{
			if (map->field[i * map->h + j] == 1)
				quence[(*max)++] = i * map->h + j;
			j++;
		}
		i++;
	}
}

void	end_fill(t_map *map)
{
	int i;
	int j;

	i = 0;
	while (i < map->h)
	{
		j = 0;
		while (j < map->w)
		{
			if (map->field[i * map->h + j] == 0)
				map->field[i * map->h + j] = map->h + map->w;
			j++;
		}
		i++;
	}
}

void	first_fill(t_map *map, int now, int *max, int *quence)
{
	if ((quence[now] % map->w != (map->w - 1))
		&& (map->field[quence[now] + 1] == 0))
	{
		map->field[quence[now] + 1] = map->field[quence[now]] + 1;
		quence[(*max)++] = quence[now] + 1;
	}
	if ((quence[now] % map->w != 0)
		&& (map->field[quence[now] - 1] == 0))
	{
		map->field[quence[now] - 1] = map->field[quence[now]] + 1;
		quence[(*max)++] = quence[now] - 1;
	}
	if ((quence[now] / map->w != (0))
		&& (map->field[quence[now] - map->w] == 0))
	{
		map->field[quence[now] - map->w] = map->field[quence[now]] + 1;
		quence[(*max)++] = quence[now] - map->w;
	}
	if ((quence[now] / map->w != (map->h - 1))
		&& (map->field[quence[now] + map->w] == 0))
	{
		map->field[quence[now] + map->w] = map->field[quence[now]] + 1;
		quence[(*max)++] = quence[now] + map->w;
	}
}

void	second_fill(t_map *map, int now, int *quence)
{
	if ((quence[now] % map->w != (map->w - 1))
		&& (map->field[quence[now] + 1] + 1 < map->field[quence[now]])
		&& (map->field[quence[now] + 1] != -1))
	{
		map->field[quence[now]] = map->field[quence[now] + 1] + 1;
	}
	if ((quence[now] % map->w != 0)
			&& (map->field[quence[now] - 1] + 1 < map->field[quence[now]])
		&& (map->field[quence[now] - 1] != -1))
	{
		map->field[quence[now]] = map->field[quence[now] - 1] + 1;
	}
	if ((quence[now] / map->w != (0))
			&& (map->field[quence[now] - map->w] + 1 < map->field[quence[now]])
		&& (map->field[quence[now] - map->w] != -1))
	{
		map->field[quence[now]] = map->field[quence[now] - map->w] + 1;
	}
	if ((quence[now] / map->w != (map->h - 1))
			&& (map->field[quence[now] + map->w] + 1 < map->field[quence[now]])
		&& (map->field[quence[now] + map->w] != -1))
	{
		map->field[quence[now]] = map->field[quence[now] + map->w] + 1;
	}
}

int		filling_map(t_map *map)
{
	int *quence;
	int max;
	int now;

	now = 0;
	max = 0;
	quence = (int *)malloc(map->h * map->w * sizeof(int));
	get_quence(quence, map, &max);
	while (now < max)
	{
		first_fill(map, now, &max, quence);
		second_fill(map, now, quence);
		now++;
	}
	end_fill(map);
	free(quence);
	return (1);
}
