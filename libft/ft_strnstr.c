/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 01:46:33 by xgeorge           #+#    #+#             */
/*   Updated: 2019/10/20 01:50:49 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	iter1;
	size_t	iter2;
	int		flag;

	iter1 = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[iter1] != '\0' && iter1 < len)
	{
		flag = 1;
		iter2 = 0;
		while (needle[iter2] != 0 && flag != -1)
		{
			if (haystack[iter1 + iter2] != needle[iter2]
									|| iter1 + iter2 + 1 > len)
				flag = -1;
			iter2++;
		}
		if (flag == 1)
			return ((char *)&haystack[iter1]);
		iter1++;
	}
	return (NULL);
}
