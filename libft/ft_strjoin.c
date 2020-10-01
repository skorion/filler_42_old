/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 13:10:02 by xgeorge           #+#    #+#             */
/*   Updated: 2019/10/22 21:47:42 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

static char	*ft_savetimecat(char *s1, size_t len1, const char *s2)
{
	size_t	new;

	new = 0;
	while (s2[new] != '\0')
	{
		s1[len1] = s2[new];
		len1++;
		new++;
	}
	s1[len1] = s2[new];
	return (s1);
}

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*ans;
	size_t	s1len;
	size_t	s2len;

	if (!s1)
		return (NULL);
	if (!s2)
		return (NULL);
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	if (s1len + s2len
						< ft_max_t_size(s1len, s2len)
		|| (ans = ft_strnew(s1len + s2len)) == NULL)
		return (NULL);
	ans = ft_savetimecat(ans, 0, s1);
	ans = ft_savetimecat(ans, s1len, s2);
	return (ans);
}
