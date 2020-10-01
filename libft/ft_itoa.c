/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 16:12:59 by xgeorge           #+#    #+#             */
/*   Updated: 2019/10/20 01:51:34 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_itoa(int n)
{
	char	*ans;
	size_t	len;
	size_t	sign;

	sign = 0;
	len = ft_numlen(n);
	if ((ans = ft_strnew(len)) == NULL)
		return (NULL);
	if (n < 0)
	{
		sign = 1;
		if (n == -2147483648)
		{
			ft_strcpy(ans, "-2147483648");
			return (ans);
		}
		ans[0] = '-';
		n = -n;
	}
	while (sign < len--)
	{
		ans[len] = n % 10 + '0';
		n = n / 10;
	}
	return (ans);
}
