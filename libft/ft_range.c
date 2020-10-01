/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 18:56:52 by xgeorge           #+#    #+#             */
/*   Updated: 2019/10/20 01:51:18 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int		*ft_range(int min, int max)
{
	int	*new;
	int iter;

	if (min >= max)
	{
		new = NULL;
		return (new);
	}
	iter = 0;
	if (sizeof(int) * (max - min) < ft_max_t_size((max - min), sizeof(int))
		|| (new = ft_memalloc(sizeof(int) * (max - min))) == NULL)
		return (NULL);
	while (min + iter < max)
	{
		new[iter] = min + iter;
		iter++;
	}
	return (new);
}
