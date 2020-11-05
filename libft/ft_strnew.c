/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 05:12:47 by xgeorge           #+#    #+#             */
/*   Updated: 2020/11/05 05:12:48 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *str;

	if (size + 1)
	{
		if (!(str = (char *)malloc(sizeof(char) * (size + 1))))
			return (NULL);
		ft_memset(str, '\0', (size + 1));
		return (str);
	}
	return (NULL);
}
