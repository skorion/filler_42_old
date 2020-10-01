/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_a_inf_or_nan.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 01:42:29 by xgeorge           #+#    #+#             */
/*   Updated: 2020/08/07 07:36:16 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int	ft_is_a_inf_or_nan(long double num)
{
	if (num != num)
		return (1);
	if (num == (-1 * INFINITY))
		return (1);
	if (num == (INFINITY))
		return (1);
	return (-1);
}
