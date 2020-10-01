/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 13:40:35 by xgeorge           #+#    #+#             */
/*   Updated: 2019/10/20 01:50:44 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s)
{
	size_t	start;
	size_t	end;
	char	*ans;

	if (!s)
		return (NULL);
	if (!*s)
		return ((ans = ft_strdup("")) == NULL) ? NULL : ans;
	start = 0;
	while (s[start] != '\0' && (s[start] == '\t' || s[start] == '\n'
			|| s[start] == ' '))
		start++;
	end = ft_strlen(s) - 1;
	while (end != 0 && (s[end] == '\t' || s[end] == '\n'
				|| s[end] == ' ' || s[end] == '\0'))
		end--;
	if (end < start || s[end] == '\0')
		return ((ans = ft_strdup("")) == NULL) ? NULL : ans;
	ans = ft_strsub(s, start, end - start + 1);
	return (ans);
}
