/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_llinumlen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/31 20:34:27 by xgeorge           #+#    #+#             */
/*   Updated: 2020/07/31 20:34:28 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

size_t	ft_llinumlen(long long int n)
{
	size_t	len;

	len = 0;
	if (n < 0)
		len++;
	while (n >= 10 || n <= -10)
	{
		n = n / 10;
		len++;
	}
	return (len + 1);
}
