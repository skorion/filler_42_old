/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   piece.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 08:51:01 by scorion           #+#    #+#             */
/*   Updated: 2020/10/24 15:09:50 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

t_piece		read_piece(void)
{
	t_piece	new;


// TODO
	new.h = 5;
	new.w = 6;
	new.field = ft_memalloc(new.h * new.w * sizeof(int));
	return (new);
}
