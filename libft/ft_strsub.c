/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 12:59:45 by xgeorge           #+#    #+#             */
/*   Updated: 2019/10/20 01:50:45 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"
#include <stdio.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	iter;
	char	*ans;

	iter = 0;
	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		return (NULL);
	if ((ans = ft_strnew(len)) == NULL)
		return (NULL);
	while (iter < len && s[iter + start] != '\0')
	{
		ans[iter] = (char)s[start + iter];
		iter++;
	}
	return (ans);
}
