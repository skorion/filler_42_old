/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 05:12:01 by xgeorge           #+#    #+#             */
/*   Updated: 2020/11/05 05:12:02 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	a;
	size_t	b;
	size_t	c;

	a = 0;
	b = 0;
	c = 0;
	while (dst[a])
		++a;
	while (src[b])
		++b;
	if (size <= a)
		b = b + size;
	else
		b = b + a;
	while (src[c] && (a + 1) < size)
	{
		dst[a] = src[c];
		c++;
		a++;
	}
	dst[a] = '\0';
	return (b);
}
