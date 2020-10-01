/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 21:55:46 by xgeorge           #+#    #+#             */
/*   Updated: 2019/10/20 01:50:53 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	iter;
	size_t	new;

	new = 0;
	iter = ft_strlen(s1);
	while (s2[new] != '\0' && new < n)
	{
		s1[iter] = s2[new];
		iter++;
		new++;
	}
	s1[iter] = '\0';
	return (s1);
}
