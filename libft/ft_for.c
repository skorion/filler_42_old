/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_for.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 05:07:07 by xgeorge           #+#    #+#             */
/*   Updated: 2020/11/05 05:07:09 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	stat_for(int start, int sum, int end)
{
	static int	i;
	int			final;

	if (i == 0 && start > 0)
	{
		i = start;
		return (i);
	}
	if (i == end)
	{
		final = sum + i;
		i = 0;
		return (final);
	}
	if (i > end)
	{
		final = i;
		i = 0;
		return (final);
	}
	i += sum;
	return (i);
}

int			ft_for(int start, int sum, int end)
{
	int i;

	if (sum < 0)
		return (0);
	i = stat_for(start, sum, end);
	if (start == 0 && i <= end)
		return (i);
	if (i < end)
		return (i);
	return (0);
}
