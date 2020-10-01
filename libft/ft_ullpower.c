/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ullpower.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/31 20:34:42 by xgeorge           #+#    #+#             */
/*   Updated: 2020/07/31 20:36:27 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

unsigned long long int	ft_ullpower(unsigned long long num, int power)
{
	unsigned long long int	ans;

	ans = 1;
	while (power > 0)
	{
		ans = ans * num;
		power--;
	}
	return (ans);
}
