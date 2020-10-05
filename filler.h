/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scorion <scorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 20:25:01 by xgeorge           #+#    #+#             */
/*   Updated: 2020/10/05 08:50:26 by scorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_H
# define FILLER_H
# define BUFF_SIZE 100
# include "libft/includes/libft.h"

typedef struct				s_map
{
	int	w;
	int	h;
	int	*field;
}							t_map;

typedef struct				s_data
{
	int		me;
	int		enemy;
	t_map	map;
}							t_data;

typedef struct				s_piece
{
	int		h;
	int		w;
	int		*block;
}							t_piece;


int							new_fild(t_map *map);
int							filling_map(t_map *map);
t_piece						read_piece(void);
void	print_field_map(t_map *map);
#endif
