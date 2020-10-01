/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 02:13:56 by xgeorge           #+#    #+#             */
/*   Updated: 2019/10/20 01:51:15 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	return (ft_strncmp(s1, s2, ft_max_t_size(ft_strlen(s1), ft_strlen(s2))));
}
