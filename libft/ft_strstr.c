/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 00:26:53 by xgeorge           #+#    #+#             */
/*   Updated: 2019/10/20 01:50:46 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	iter1;
	size_t	iter2;
	int		flag;

	iter1 = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[iter1] != '\0')
	{
		flag = 1;
		iter2 = 0;
		while (needle[iter2] != 0 && flag != -1)
		{
			if (haystack[iter1 + iter2] != needle[iter2])
				flag = -1;
			iter2++;
		}
		if (flag == 1)
			return ((char *)&haystack[iter1]);
		iter1++;
	}
	return (NULL);
}
