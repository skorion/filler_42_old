/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ullnumlen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/31 20:36:14 by xgeorge           #+#    #+#             */
/*   Updated: 2020/07/31 20:36:17 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

size_t	ft_ullnumlen(unsigned long long n)
{
	size_t	len;

	len = 0;
	while (n >= 10)
	{
		n = n / 10;
		len++;
	}
	return (len + 1);
}
