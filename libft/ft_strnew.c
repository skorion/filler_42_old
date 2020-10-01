/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 09:38:48 by xgeorge           #+#    #+#             */
/*   Updated: 2019/10/20 01:50:50 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;

	if (size + 1 < size)
		return (NULL);
	if (size + 1 == 0 || !(str = ft_memalloc(size + 1)))
		return (NULL);
	str = (char *)ft_memset(str, 0, size + 1);
	return (str);
}
