/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_solition.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 23:41:18 by xgeorge           #+#    #+#             */
/*   Updated: 2020/11/01 03:22:57 by xgeorge          ###   ########.fr       */
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
	while (index < SCORE_CAUSE)
	{
		solution->cause[index].weight = -1;
		solution->cause[index].coefficient = -1;
		index++;
	}
}

int			solution_exist(t_map *map, t_piece *piece, t_solution *solution)
{
	int	x;
	int	y;

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
			if ((((map->field[(solution->y + y) * map->w + solution->x + x]) != -1) ||
			((map->field[(solution->y + y) * map->w + solution->x + x]) != 1)) &&
			(piece->field[y * piece->w + x] == 1))
				return (FALSE);
			x++;
		}
		y++;
	}
	return (TRUE);
}

void	pop_cause(t_solution *solution, int may)
{
	int index;
	t_solution tmp;

	index = SCORE_CAUSE - 1;
	while ((may) != index)
	{
		solution->cause[index] = solution->cause[index - 1];
		index--;
	}
}

void	push_cause(t_solution *solution, int weight)
{
	int	may;

	may = 0;
	while ((solution->cause[may].weight != weight) && (may < SCORE_CAUSE)
		&& (solution->cause[may].weight < weight) && (solution->cause[may].weight != -1))
		may++;
	if (solution->cause[may].weight == weight)
	{
		solution->cause[may].coefficient++;
		return ;
	}
	// need write
	pop_cause(solution, may);
	solution->cause[may].coefficient = 1;
	solution->cause[may].weight = weight;
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
				return (FALSE);
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
	int index;

	if (test.exist == FALSE)
		return (now);
	if ((now.exist == FALSE) && (test.exist == TRUE))
		return (test);
	index = 0;
	while (index < SCORE_CAUSE)
	{
		if (now.cause[index].weight != test.cause[index].weight)
		{
			if (now.cause[index].weight < now.cause[index].weight)
				return (now);
			else
				if (now.cause[index].weight > now.cause[index].weight)
					return (test);
		}
		if (now.cause[index].weight == test.cause[index].weight)
		{
			if (now.cause[index].coefficient > now.cause[index].coefficient)
				return (now);
			else
				if (now.cause[index].coefficient < now.cause[index].coefficient)
					return (test);
		}
		index++;
	}
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
	while (test.y < map->h)
	{
		test.x = 0;
		while (test.x < map->w)
		{
			check_solution(&test, map, piece);
			ans = more_best_solition(ans, test);
			test.x = test.x + 1;
		}
		test.y = test.y + 1;
	}
	return (ans);
}