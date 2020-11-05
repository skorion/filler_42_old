/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_solition.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 23:41:18 by xgeorge           #+#    #+#             */
/*   Updated: 2020/11/05 05:04:44 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

static int		step_2(t_map *map, t_solution *solution,
												t_piece *piece, int *possibly)
{
	*possibly = 0;
	if ((solution->x + piece->w - 1 >= map->w)
						|| (solution->y + piece->h - 1 >= map->h))
		return (FALSE);
	return (TRUE);
}

int				solution_exist(t_map *map, t_piece *piece, t_solution *solution)
{
	int	x;
	int	y;
	int	possibly;

	if (step_2(map, solution, piece, &possibly) == FALSE)
		return (FALSE);
	y = 0;
	while (y < piece->h)
	{
		x = 0;
		while (x < piece->w)
		{
			if ((((map->field[(solution->y + y)
				* map->w + solution->x + x]) == 1))
			&& (piece->field[y * piece->w + x] == 1))
				return (FALSE);
			if (((map->field[(solution->y + y)
				* map->w + x + solution->x]) == -1)
			&& (piece->field[y * piece->w + x] == 1))
				possibly++;
			x++;
		}
		y++;
	}
	return ((possibly != 1) ? (FALSE) : (TRUE));
}

int				set_cause(t_solution *solution, t_map *map, t_piece *piece)
{
	int	x;
	int	y;

	y = 0;
	while (y < piece->h)
	{
		x = 0;
		while (x < piece->w)
		{
			if ((((map->field[(solution->y + y) * map->w + solution->x + x])
			!= -1)
			|| ((map->field[(solution->y + y) * map->w + solution->x + x])
			!= 1)) && (piece->field[y * piece->w + x] == 1))
				solution->cause = solution->cause +
				map->field[(solution->y + y) * map->w + solution->x + x];
			x++;
		}
		y++;
	}
	return (TRUE);
}

void			check_solution(t_solution *solution, t_map *map, t_piece *piece)
{
	solution->exist = solution_exist(map, piece, solution);
	if (solution->exist == TRUE)
		set_cause(solution, map, piece);
}

t_solution		get_solution(t_map *map, t_piece *piece)
{
	t_solution	ans;
	t_solution	test;

	init_solution(&ans, 0, 0);
	init_solution(&test, 0, 0);
	ans.cause = INT32_MAX;
	while (test.y < map->h)
	{
		test.x = 0;
		while (test.x < map->w)
		{
			init_solution(&test, test.x, test.y);
			check_solution(&test, map, piece);
			ans = more_best_solition(test, ans);
			test.x = test.x + 1;
		}
		test.y = test.y + 1;
	}
	return (ans);
}
