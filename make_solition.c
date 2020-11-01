/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_solition.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 23:41:18 by xgeorge           #+#    #+#             */
/*   Updated: 2020/11/01 09:13:55 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void		init_solution(t_solution *solution, int x, int y)
{
	int index;

	index = 0;
	solution->x = x;
	solution->y = y;
	solution->exist = FALSE;
	solution->cause = 0;
}

int			solution_exist(t_map *map, t_piece *piece, t_solution *solution)
{
	int	x;
	int	y;
	int	possibly;

	possibly = 0;
	if (solution->x + piece->w >= map->w)
		return (FALSE);
	if (solution->y + piece->h >= map->h)
		return (FALSE);
	y = 0;
	while (y < piece->h)
	{
		x = 0;
		while (x < piece->w)
		{
			if ((((map->field[(solution->y + y) * map->w + solution->x + x]) == 1))
			&& (piece->field[y * piece->w + x] == 1))
				return (FALSE);
			if ((map->field[(solution->y + y) * map->w + x + solution->x]) == -1)
			{
				possibly++;
			}
			if (possibly != 1)
				return (FALSE);
			x++;
		}
		y++;
	}
	return (TRUE);
}

int		set_cause(t_solution *solution, t_map *map, t_piece *piece)
{
	int	x;
	int	y;

	y = 0;
	while (y < piece->h)
	{
		x = 0;
		while (x < piece->w)
		{
			if ((((map->field[(solution->y + y) * map->w + solution->x + x]) != -1) ||
			((map->field[(solution->y + y) * map->w + solution->x + x]) != 1)) &&
			(piece->field[y * piece->w + x] == 1))
				solution->cause = solution->cause + map->field[(solution->y + y) * map->w + solution->x + x];
			x++;
		}
		y++;
	}
	return (TRUE);
}

void		check_solution(t_solution *solution, t_map *map, t_piece *piece)
{
	solution->exist = solution_exist(map, piece, solution);
	if (solution->exist == TRUE)
		set_cause(solution, map, piece);
}


t_solution	more_best_solition(t_solution now, t_solution test)
{
	if (test.exist == FALSE)
		return (now);
	if ((now.exist == FALSE) && (test.exist == TRUE))
		return (test);
	if (now.cause < test.cause)
		return (now);
	else
		return(test);
	return (now);
}

void		print_solution(t_solution solution)
{
	ft_putnbr(solution.x);
	ft_putchar(' ');
	ft_putnbr(solution.y);
	ft_putchar('\n');
}




t_solution	get_solution(t_map *map, t_piece *piece)
{
	t_solution	ans;
	t_solution	test;

	init_solution(&ans, 0, 0);
	init_solution(&test, 0, 0);
	ans.cause = 99999999;
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