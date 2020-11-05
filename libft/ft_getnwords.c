/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getnwords.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 05:07:20 by xgeorge           #+#    #+#             */
/*   Updated: 2020/11/05 05:07:22 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_getnwords(char *str, int n)
{
	int		i;
	int		a;
	char	*s;

	i = 0;
	a = 0;
	if (!(s = (char *)malloc(sizeof(*s) * (ft_lennwords(str, n) + 1))))
		return (NULL);
	while (str[i])
	{
		if (str[i] == ' ')
			i++;
		if (n == 0)
		{
			while (str[i] != ' ' && str[i])
				s[a++] = str[i++];
		}
		n--;
		while (str[i] != ' ' && str[i])
			i++;
	}
	s[i] = '\0';
	return (s);
}
