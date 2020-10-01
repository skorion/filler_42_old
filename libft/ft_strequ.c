/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 12:46:56 by xgeorge           #+#    #+#             */
/*   Updated: 2019/10/20 01:51:12 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	if (!s1)
		return (-1);
	if (!s2)
		return (-1);
	if (ft_strcmp(s1, s2) == 0)
		return (1);
	else
		return (0);
}
