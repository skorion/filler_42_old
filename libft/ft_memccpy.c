/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 15:03:38 by xgeorge           #+#    #+#             */
/*   Updated: 2019/10/20 01:51:29 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t iter;

	if (dst == NULL && src == NULL)
		return (NULL);
	iter = 0;
	while (n-- > 0)
	{
		((unsigned char *)dst)[iter] = ((unsigned char *)src)[iter];
		if (((unsigned char *)src)[iter] == (unsigned char)c)
			return (&dst[iter + 1]);
		iter++;
	}
	return (NULL);
}
