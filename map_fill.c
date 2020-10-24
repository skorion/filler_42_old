/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_fill.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 21:30:50 by xgeorge           #+#    #+#             */
/*   Updated: 2020/10/24 12:58:31 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int		filling_map(t_map *map)
{
	int *quence;
	int max;
	int now;

	now = 0;
	max = 0;

	quence = (int *)malloc(map->h * map->w * sizeof(int));
	int i;
	int j;

	i = 0;
	while (i < map->h)
	{
		j = 0;
		while (j < map->w)
		{
			if (map->field[i * map->h + j] == 1)
				quence[max++] = i * map->h + j;
			j++;
		}
		i++;
	}

//	print_field_map(map);
	while (now < max)
	{
		if ((quence[now] % map->w != (map->w - 1)) && (map->field[quence[now] + 1] == 0))
		{
			map->field[quence[now] + 1] = map->field[quence[now]] + 1;
			quence[max++] = quence[now] + 1;
		}
		if ((quence[now] % map->w != 0) && (map->field[quence[now] - 1] == 0))
		{
			map->field[quence[now] - 1] = map->field[quence[now]] + 1;
			quence[max++] = quence[now] - 1;
		}
		if ((quence[now] / map->w != (0)) && (map->field[quence[now] - map->w] == 0))
		{
			map->field[quence[now] - map->w] = map->field[quence[now]] + 1;
			quence[max++] = quence[now] - map->w;
		}
		if ((quence[now] / map->w != (map->h - 1)) && (map->field[quence[now] + map->w] == 0))
		{
			map->field[quence[now] + map->w] = map->field[quence[now]] + 1;
			quence[max++] = quence[now] + map->w;
		}
		now++;
//	print_field_map(map);

	}
	return (1);
}