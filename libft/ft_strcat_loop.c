/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat_loop.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/31 20:36:44 by xgeorge           #+#    #+#             */
/*   Updated: 2020/07/31 20:36:44 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strcat_loop(char *dest, int x_times, char *source)
{
	int i;
	int j;

	i = 0;
	j = ft_strlen(dest);
	if (x_times)
		while (x_times--)
		{
			if (source)
				while (source[i])
					dest[j++] = source[i++];
			i = 0;
		}
	dest[j] = '\0';
	return (dest);
}
