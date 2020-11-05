/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solition.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 04:45:28 by xgeorge           #+#    #+#             */
/*   Updated: 2020/11/05 04:49:31 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void		print_solution(t_solution solution)
{
	ft_putnbr(solution.y);
	ft_putchar(' ');
	ft_putnbr(solution.x);
	ft_putchar('\n');
}

void		init_solution(t_solution *solution, int x, int y)
{
	solution->x = x;
	solution->y = y;
	solution->exist = FALSE;
	solution->cause = 0;
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
		return (test);
	return (now);
}
