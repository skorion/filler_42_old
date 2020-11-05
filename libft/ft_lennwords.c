/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lennwords.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 05:08:19 by xgeorge           #+#    #+#             */
/*   Updated: 2020/11/05 05:08:21 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lennwords(char *str, int n)
{
	int i;
	int a;

	i = 0;
	a = 0;
	while (str[i])
	{
		if (str[i] == ' ')
			i++;
		if (n == 0)
		{
			while (str[i] != ' ' && str[i])
			{
				i++;
				a++;
			}
		}
		n--;
		while (str[i] != ' ' && str[i])
			i++;
	}
	return (a);
}
