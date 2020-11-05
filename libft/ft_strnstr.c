/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 05:12:52 by xgeorge           #+#    #+#             */
/*   Updated: 2020/11/05 05:12:53 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, int n)
{
	int i;
	int a;

	i = 0;
	if (!(*str2))
		return ((char *)str1);
	while (str1[i])
	{
		a = 0;
		if (str2[a] == str1[i])
		{
			while (str2[a] == str1[i])
			{
				a++;
				if (!str2[a] && i < n)
					return ((char *)&str1[i - a + 1]);
				i++;
			}
			i -= a;
		}
		i++;
	}
	return (NULL);
}
