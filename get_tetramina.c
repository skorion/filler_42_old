/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_tetramina.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 14:29:48 by xgeorge           #+#    #+#             */
/*   Updated: 2020/10/24 15:16:21 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int		get_size_tetr(t_piece *piece, char *line)
{
	int i;

	i = 6;
	piece->w = ft_atoi(line + i);
	while (line[i] != ' ')
		i++;
	piece->h = ft_atoi(line + i);
	if ((piece->field = (int *)ft_memalloc(piece->w * piece->h * sizeof(int))) == NULL)
		return (-1);
	return (1);
}

void		get_tetr(t_piece *piece)
{
	char	*line;
	int		i;
	int		j;

	i = 0;
	while (i < piece->h)
	{
		j = 0;
		get_next_line(STD_IN, &line);
		while (j < piece->w)
		{
			piece->field[i * piece->h + j] =
								(line[j] == '*') ? 1 : 0;
			j++;
		}
		ft_strdel(&line);
		i++;
	}
}

int	get_tetramina(t_piece *piece, char **line)
{
	get_size_tetr(piece, *line);
	get_tetr(piece);
//	calc_map(piece);
	ft_strdel(line);
	return (1);
}