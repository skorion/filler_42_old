/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 19:52:02 by xgeorge           #+#    #+#             */
/*   Updated: 2019/10/20 01:51:13 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strdup(const char *s1)
{
	int		iter;
	char	*ans;

	iter = 0;
	if (ft_strlen(s1) + 1 == 0
			|| !(ans = (char *)ft_memalloc(sizeof(char) * ft_strlen(s1) + 1)))
		return (NULL);
	while (s1[iter] != '\0')
	{
		ans[iter] = s1[iter];
		iter++;
	}
	ans[iter] = '\0';
	return (ans);
}
