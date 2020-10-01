/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 23:44:08 by xgeorge           #+#    #+#             */
/*   Updated: 2019/10/20 01:51:16 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*a;

	a = (char *)s;
	while (*a)
	{
		if (*a == (char)c)
			return (a);
		a++;
	}
	if (*a == c)
		return (a);
	return (NULL);
}
