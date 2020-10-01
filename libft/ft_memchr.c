/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 17:51:16 by xgeorge           #+#    #+#             */
/*   Updated: 2019/10/20 01:51:29 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *adres;

	adres = (unsigned char *)s;
	while (n-- > 0)
	{
		if (adres[0] == (unsigned char)c)
			return (adres);
		adres++;
	}
	return (NULL);
}
