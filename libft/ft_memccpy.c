/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 05:09:08 by xgeorge           #+#    #+#             */
/*   Updated: 2020/11/05 05:09:09 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;
	unsigned char	l;

	l = (unsigned char)c;
	a = (unsigned char *)dest;
	b = (unsigned char *)src;
	while (n-- > 0)
	{
		*a = *b;
		a++;
		if (*b == l)
			return (a);
		b++;
	}
	return (NULL);
}
