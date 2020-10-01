/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 12:47:08 by xgeorge           #+#    #+#             */
/*   Updated: 2019/10/20 01:50:50 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (!s1)
		return (-1);
	if (!s2)
		return (-1);
	if (ft_strncmp(s1, s2, n) == 0)
		return (1);
	else
		return (0);
}
