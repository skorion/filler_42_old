/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 03:39:22 by xgeorge           #+#    #+#             */
/*   Updated: 2019/10/20 01:51:41 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int		ft_atoi(const char *str)
{
	int					sign;
	unsigned long long	body;

	sign = 1;
	body = 0;
	while (ft_invisible(*str) == 1)
		str++;
	if (*str == '-' || *str == '+')
		sign = (*str++ == '-') ? -1 : 1;
	while (ft_isdigit(*str) > 0)
	{
		if (sign == 1 && (body > __LONG_LONG_MAX__ / 10 || body * 10
		> (unsigned long long)__LONG_LONG_MAX__
							+ 1 - (unsigned long long)(*str - '0')))
			return (-1);
		if (sign == -1 && (body > __LONG_LONG_MAX__ || body * 10
		> (unsigned long long)__LONG_LONG_MAX__
							+ 1 - (unsigned long long)(*str - '0')))
			return (0);
		body = body * 10 + *str - '0';
		str++;
	}
	return (sign * (int)body);
}
