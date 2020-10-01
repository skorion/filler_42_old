/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 20:13:57 by xgeorge           #+#    #+#             */
/*   Updated: 2019/10/20 01:50:51 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	iter;

	iter = 0;
	while (src[iter] != 0 && iter < len)
	{
		dst[iter] = src[iter];
		iter++;
	}
	while (iter < len)
	{
		dst[iter] = 0;
		iter++;
	}
	return (dst);
}
