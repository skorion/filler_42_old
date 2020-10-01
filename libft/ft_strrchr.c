/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 23:45:02 by xgeorge           #+#    #+#             */
/*   Updated: 2019/10/20 01:50:48 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*a;

	a = (char *)s;
	while (*a)
		a++;
	while (s != a)
	{
		if (*a == c)
			return (a);
		a--;
	}
	if (*a == c)
		return (a);
	return (NULL);
}
