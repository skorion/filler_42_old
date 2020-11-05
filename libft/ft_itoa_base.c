/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 05:08:06 by xgeorge           #+#    #+#             */
/*   Updated: 2020/11/05 05:08:07 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_base(long long int nbr, int base, char a)
{
	char				*str;
	int					i;
	int					sign;
	long long int		n;

	i = 0;
	sign = (nbr < 0 && base == 10) ? 1 : 0;
	n = (nbr < 0) ? -nbr : nbr;
	while ((n /= base) >= 1)
		i++;
	i += 1;
	n = (nbr < 0) ? -nbr : nbr;
	if (!(str = (char *)ft_memalloc(sizeof(char) * (i + 1))))
		return (NULL);
	while (i--)
	{
		str[i + sign] = (n % base < 10) ? n % base + '0' : n % base + a - 10;
		n /= base;
	}
	(sign) ? str[0] = '-' : 0;
	return (str);
}
