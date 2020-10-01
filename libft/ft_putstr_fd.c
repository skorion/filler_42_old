/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 07:13:49 by xgeorge           #+#    #+#             */
/*   Updated: 2019/10/20 01:51:19 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	size_t	iter;

	if (!s)
		return ;
	iter = 0;
	while (s[iter] != '\0')
		ft_putchar_fd(s[iter++], fd);
}
