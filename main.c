/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 15:13:58 by xgeorge           #+#    #+#             */
/*   Updated: 2020/11/05 02:47:58 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void		set_player_or_enemy_symbol(t_data *data)
{
	char *line;

	get_next_line(0, &line);
	data->map.enemy_symbol = (line[10] == '1') ? 'X' : 'O';
	data->map.player_symbol = (line[10] == '1') ? 'O' : 'X';
	free(line);
}

int			main(void)
{
	t_data data;

	set_player_or_enemy_symbol(&data);
	data.map.field = NULL;
	data.piece.field = NULL;
	while (1)
	{
		get_need_data(&data);
	}
	del_data(&data);
	return (1);
}
