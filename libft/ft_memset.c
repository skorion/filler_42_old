/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 14:17:55 by xgeorge           #+#    #+#             */
/*   Updated: 2019/10/20 01:51:25 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*adres;
	unsigned char	elem;
	size_t			iter;

	adres = (unsigned char *)b;
	elem = (unsigned char)c;
	iter = 0;
	while (iter < len)
	{
		adres[iter] = elem;
		iter++;
	}
	return (adres);
}
