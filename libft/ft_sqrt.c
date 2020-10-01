/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 19:45:41 by xgeorge           #+#    #+#             */
/*   Updated: 2019/10/20 01:51:17 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int		ft_sqrt(int nb)
{
	int	iter;

	iter = 1;
	while (nb >= iter * iter)
	{
		if (nb == iter * iter && nb % iter == 0)
			return (iter);
		iter++;
	}
	return (0);
}
