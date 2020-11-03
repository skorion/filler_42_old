/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_need_data.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scorion <scorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 13:42:33 by xgeorge           #+#    #+#             */
/*   Updated: 2020/11/02 20:19:43 by scorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"


int	get_need_data(t_data *data)
{
	char *line;

	while (get_next_line(STD_IN, &line) > 0)
	{
	if ((line != NULL) && !ft_strncmp(line, "Plateau", 6))
	{
		get_maps(&(data->map), &line);
		ft_strdel(&line);
		return (1);
	}
	else if (line && !ft_strncmp(line, "Piece", 4))
	{
		get_tetramina(&(data->piece), &line);
		return (1);
	}
	ft_strdel(&line);
	}
	return (1);
}
