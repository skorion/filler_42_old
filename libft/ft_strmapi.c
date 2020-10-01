/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 12:07:03 by xgeorge           #+#    #+#             */
/*   Updated: 2019/10/20 01:50:54 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int		iter;
	char				*ans;

	if (!f)
		return (NULL);
	if (!s)
		return (NULL);
	if (sizeof(char) * ft_strlen(s) + 1 < ft_strlen(s)
		|| !(ans = (char *)ft_memalloc(sizeof(char) * ft_strlen(s) + 1)))
		return (NULL);
	iter = 0;
	while (s[iter] != '\0')
	{
		ans[iter] = (*f)(iter, s[iter]);
		iter++;
	}
	ans[iter] = 0;
	return (ans);
}
