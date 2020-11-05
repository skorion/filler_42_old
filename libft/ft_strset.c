/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 05:13:04 by xgeorge           #+#    #+#             */
/*   Updated: 2020/11/05 05:13:05 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strset(char c, size_t n)
{
	char	*str;
	size_t	i;

	i = -1;
	str = ft_strnew(n);
	while (++i < n)
		str[i] = c;
	return (str);
}
