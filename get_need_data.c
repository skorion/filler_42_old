/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_need_data.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 13:42:33 by xgeorge           #+#    #+#             */
/*   Updated: 2020/11/05 04:42:59 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int	get_need_data(t_data *data)
{
	char	*line;

	while (get_next_line(STD_IN, &line) > 0)
	{
		if ((line != NULL) && !ft_strncmp(line, "Plateau", 6))
			get_maps(&(data->map), &line);
		else if (line && !ft_strncmp(line, "Piece", 4))
		{
			get_tetramina(&(data->piece), &line);
			filling_map(&(data->map));
			data->solution = get_solution(&(data->map), &(data->piece));
			if (data->solution.exist == FALSE)
			{
				ft_putstr("0 0\n");
				del_data(data);
				exit(1);
			}
			print_solution(data->solution);
			free(data->piece.field);
			data->piece.field = NULL;
			return (1);
		}
		ft_strdel(&line);
	}
	return (1);
}
