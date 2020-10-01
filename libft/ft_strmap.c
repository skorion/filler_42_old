/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 11:56:12 by xgeorge           #+#    #+#             */
/*   Updated: 2019/10/20 01:50:55 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
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
		ans[iter] = (*f)(s[iter]);
		iter++;
	}
	ans[iter] = 0;
	return (ans);
}
