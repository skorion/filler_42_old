/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 15:02:25 by xgeorge           #+#    #+#             */
/*   Updated: 2019/10/20 01:51:26 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	iter;

	iter = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst > src)
		while (len-- > 0)
			((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
	else
		while (len-- > 0)
		{
			((unsigned char *)dst)[iter] = ((unsigned char *)src)[iter];
			iter++;
		}
	return (dst);
}
