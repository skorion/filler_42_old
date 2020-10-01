/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reduse.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/27 04:56:07 by xgeorge           #+#    #+#             */
/*   Updated: 2020/08/01 08:38:08 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int long long	ft_reduse(int long long delimoe, int long long delitel)
{
	delimoe = (delimoe < 0) ? -1 * delimoe : delimoe;
	delitel = (delitel < 0) ? -1 * delitel : delitel;
	return (delimoe % delitel);
}
