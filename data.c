/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 21:54:50 by xgeorge           #+#    #+#             */
/*   Updated: 2020/11/05 04:41:00 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void	del_data(t_data *data)
{
	if (data->map.field != NULL)
	{
		free(data->map.field);
		data->map.field = NULL;
	}
	if (data->piece.field != NULL)
	{
		free(data->piece.field);
		data->piece.field = NULL;
	}
	return ;
}
