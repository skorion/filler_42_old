/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insertdlist.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 20:32:06 by gzoltan           #+#    #+#             */
/*   Updated: 2019/11/15 18:46:25 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

t_dlist		*ft_insertdlist(t_dlist **box, t_dlist *item)
{
	t_dlist *tmp;

	if (box == NULL)
		return (NULL);
	if (item == NULL)
		return (*box);
	tmp = *box;
	item->prev = tmp;
	if (*box != NULL)
		tmp = (*box)->next;
	else
		tmp = NULL;
	if (*box != NULL)
		(*box)->next = item;
	item->next = tmp;
	if (tmp != NULL)
		tmp->prev = item;
	return (item);
}
