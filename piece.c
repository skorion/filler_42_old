/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   piece.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scorion <scorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 08:51:01 by scorion           #+#    #+#             */
/*   Updated: 2020/10/05 08:54:18 by scorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

t_piece		read_piece(void)
{
	t_piece	new;


// TODO
	new.h = 5;
	new.w = 6;
	new.block = ft_memalloc(new.h * new.w * sizeof(int));
	return (new);
}
