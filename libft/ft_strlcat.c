/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 21:55:46 by xgeorge           #+#    #+#             */
/*   Updated: 2019/10/20 01:50:57 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

size_t	ft_strlcat(char *s1, const char *s2, size_t size)
{
	size_t	iter;
	size_t	new;

	iter = ft_strlen(s1);
	new = 0;
	while (s2[new] != '\0' && iter + new + 1 < size)
	{
		s1[iter + new] = s2[new];
		new++;
	}
	s1[iter + new] = '\0';
	if (size < iter)
		return (size + ft_strlen(s2));
	else
		return (iter + ft_strlen(s2));
}
