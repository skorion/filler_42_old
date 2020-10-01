/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 20:04:22 by xgeorge           #+#    #+#             */
/*   Updated: 2019/10/20 01:51:14 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	size_t	iter;

	iter = 0;
	while (src[iter] != '\0')
	{
		dst[iter] = src[iter];
		iter++;
	}
	dst[iter] = src[iter];
	return (dst);
}
