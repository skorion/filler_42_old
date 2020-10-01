/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gcvt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/31 20:35:14 by xgeorge           #+#    #+#             */
/*   Updated: 2020/08/07 05:34:17 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

double		get_round_delta(long double value, int prec)
{
	double	delta;
	int		remember;
	int		i;

	i = 0;
	delta = 5;
	while (i <= prec)
	{
		i += 1;
		if (i != prec)
			remember = (long long int)value;
		value = 10 * (value - (long double)((long long int)value));
		delta = delta / 10;
	}
	if ((long long int)value % 10 == 5)
		return (delta * (((long long int)remember % 2 == 0) ? 0 : 1));
	else
		return (delta);
}

char		*set_body(long double value, size_t size, int precision, char *ans)
{
	size_t i;

	i = 0;
	while (size > 0)
	{
		value = 10 * (value - (long double)((long long int)value));
		ans[i++] = '0' + (int)value;
		size--;
	}
	if (precision == 0)
		return (ans);
	ans[i++] = '.';
	while (precision-- > 0)
	{
		value = 10 * (value - (long double)((long long int)value));
		ans[i++] = (long long int)value + '0';
	}
	return (ans);
}

char		*ft_gcvt(long double value, int precision)
{
	size_t			size;
	char			*ans;

	precision = (precision < 0) ? 6 : precision;
	value = value + ((value >= 0) ? 1 : -1) * get_round_delta(value, precision);
	value = (value < 0) ? -1 * value : value;
	size = 0;
	while (value >= 1.0)
	{
		size = size + 1;
		value = value / 10;
	}
	if (size == 0)
	{
		value = value / 10;
		size++;
	}
	if (!(ans = ft_strnew(size + ((precision == 0) ? 0 : precision + 1))))
		return (NULL);
	return (set_body(value, size, precision, ans));
}
