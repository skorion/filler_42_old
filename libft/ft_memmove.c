/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 05:09:39 by xgeorge           #+#    #+#             */
/*   Updated: 2020/11/05 05:09:40 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char *)dest;
	b = (unsigned char *)src;
	if (dest > src)
	{
		while (n-- > 0)
		{
			a[n] = b[n];
		}
	}
	if (dest < src)
	{
		while (n-- > 0)
			*a++ = *b++;
	}
	return (dest);
}
