/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 05:11:31 by xgeorge           #+#    #+#             */
/*   Updated: 2020/11/05 05:11:32 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	int		a;
	char	*str;

	i = 0;
	a = 0;
	while (src[a])
		a++;
	if (!(str = (char *)malloc(sizeof(*str) * (a + 1))))
		return (NULL);
	while (i < a)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
