/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 21:55:46 by xgeorge           #+#    #+#             */
/*   Updated: 2019/10/20 01:51:17 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t	iter;
	size_t	new;

	new = 0;
	iter = ft_strlen(s1);
	while (s2[new] != '\0')
	{
		s1[iter] = s2[new];
		iter++;
		new++;
	}
	s1[iter] = s2[new];
	return (s1);
}
