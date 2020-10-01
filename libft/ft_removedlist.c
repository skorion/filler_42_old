/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_removedlist.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 20:57:27 by gzoltan           #+#    #+#             */
/*   Updated: 2019/11/15 18:46:38 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

t_dlist	*ft_removedlist(t_dlist **box, void (*del)(void*, size_t))
{
	t_dlist	*tmp;

	if (box == NULL || *box == NULL)
		return (NULL);
	if ((tmp = (*box)->next) != NULL)
		tmp->prev = (*box)->prev;
	else
	{
		if ((tmp = (*box)->prev) != NULL)
			tmp->next = (*box)->next;
	}
	del((*box)->content, (*box)->content_size);
	free(*box);
	*box = tmp;
	return (*box);
}
