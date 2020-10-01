/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addstartdlist.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 20:24:48 by gzoltan           #+#    #+#             */
/*   Updated: 2019/11/15 18:45:59 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

t_dlist	*ft_addstartdlist(t_dlist **box, t_dlist *item)
{
	t_dlist	*tmp;

	if (box == NULL)
		return (NULL);
	if (*box == NULL)
		return (item);
	tmp = *box;
	while ((tmp->prev) != NULL)
		tmp = tmp->prev;
	tmp->prev = item;
	if (item != NULL)
		item->next = tmp;
	return (*box);
}
