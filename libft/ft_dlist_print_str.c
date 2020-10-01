/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlist_print_str.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/03 20:30:12 by xgeorge           #+#    #+#             */
/*   Updated: 2019/11/15 18:46:22 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_dlist_print_str(t_dlist *top)
{
	while (top != NULL)
	{
		if (top->content != NULL)
		{
			ft_putstr("[");
			ft_putstr(top->content);
			ft_putstr("]->");
		}
		else
			ft_putstr("[NULL]->");
		top = top->next;
	}
	ft_putstr("NULL");
}
