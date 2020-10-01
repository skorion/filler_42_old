/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 21:49:58 by xgeorge           #+#    #+#             */
/*   Updated: 2020/08/01 09:16:22 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

size_t		ft_strlen(const char *s)
{
	size_t	size;

	size = 0;
	if (s == NULL)
		return (0);
	while (s[size] != '\0')
		size++;
	return (size);
}
