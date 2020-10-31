/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 20:25:01 by xgeorge           #+#    #+#             */
/*   Updated: 2020/11/01 00:06:42 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_H
# define FILLER_H

# define STD_IN 0
# define SCORE_CAUSE 4
# define TRUE 1
# define FALSE -1
# define BUFF_SIZE 100
# include "libft/includes/libft.h"
#include <stdio.h>

typedef struct				s_map
{
	int						w;
	int						h;
	char					player_symbol;
	char					enemy_symbol;
	int						*field;
}							t_map;

typedef struct				s_piece
{
	int						h;
	int						w;
	int						*field;
}							t_piece;

typedef struct				s_cause
{
	int						weight;
	int						coefficient;
}							t_cause;

typedef struct				s_solution
{
	int						x;
	int						y;
	int						exist;
	t_cause					cause[SCORE_CAUSE];
}							t_solution;

typedef struct				s_data
{
	t_piece					piece;
	t_map					map;
	t_solution				solution;
}							t_data;

int							get_tetramina(t_piece *piece, char **line);
int							get_maps(t_map *map, char **line);
int							get_need_data(t_data *data);
int							new_fild(t_map *map);
int							filling_map(t_map *map);
t_piece						read_piece(void);
void						del_data(t_data *data);
void						print_field_map(t_map *map);
t_solution					get_solution(t_map *map, t_piece *piece);
#endif
