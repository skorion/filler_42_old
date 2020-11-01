/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_need_data.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 13:42:33 by xgeorge           #+#    #+#             */
/*   Updated: 2020/11/01 07:14:26 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"


int	get_need_data(t_data *data)
{
	char *line;

	get_next_line(STD_IN, &line);
	if ((line != NULL) && !ft_strncmp(line, "Plateau", 6))
	{
		get_maps(&(data->map), &line);
		ft_strdel(&line);

		get_next_line(STD_IN, &line);
		if (line && !ft_strncmp(line, "Piece", 5))
		{
			get_tetramina(&(data->piece), &line);
			return (1);
		}
	}
	ft_strdel(&line);
	return (-1);
}