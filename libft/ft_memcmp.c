/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 18:38:30 by xgeorge           #+#    #+#             */
/*   Updated: 2019/10/20 01:51:28 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			iter;
	unsigned char	*adress1;
	unsigned char	*adress2;

	iter = 0;
	adress1 = (unsigned char *)s1;
	adress2 = (unsigned char *)s2;
	while (iter < n)
	{
		if (adress1[iter] != adress2[iter])
			return (adress1[iter] - adress2[iter]);
		iter++;
	}
	return (0);
}
