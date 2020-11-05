/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 05:12:57 by xgeorge           #+#    #+#             */
/*   Updated: 2020/11/05 05:12:58 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;
	int b;
	int k;

	i = 0;
	b = 0;
	k = 0;
	if (c == '\0')
	{
		while (s[i])
			i++;
		return ((char *)&s[i]);
	}
	while (s[i])
	{
		if (s[i] == c)
			b = i;
		i++;
	}
	if (s[b] == c)
		return ((char *)&s[b]);
	return (NULL);
}
