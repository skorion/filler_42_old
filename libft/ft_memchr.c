/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 05:09:15 by xgeorge           #+#    #+#             */
/*   Updated: 2020/11/05 05:09:16 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*a;
	unsigned char	k;
	int				i;

	i = 0;
	k = (unsigned char)c;
	a = (unsigned char *)s;
	while (n-- > 0)
	{
		if (a[i] == k)
			return (a + i);
		i++;
	}
	return (0);
}
