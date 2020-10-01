/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 10:11:22 by xgeorge           #+#    #+#             */
/*   Updated: 2019/10/20 01:51:11 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	index;

	index = 0;
	if (!s)
		return ;
	if (!f)
		return ;
	while (s[index] != '\0')
	{
		(*f)(index, &s[index]);
		index++;
	}
}
