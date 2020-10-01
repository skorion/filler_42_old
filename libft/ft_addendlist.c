/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addendlist.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 20:02:22 by gzoltan           #+#    #+#             */
/*   Updated: 2019/11/17 17:21:00 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

t_dlist	*ft_addenddlist(t_dlist **box, t_dlist *item)
{
	t_dlist	*tmp;

	if (box == NULL)
		return (NULL);
	if (*box == NULL)
		return ((*box) = item);
	tmp = *box;
	while ((tmp->next) != NULL)
		tmp = tmp->next;
	tmp->next = item;
	if (item != NULL)
		item->prev = tmp;
	return (*box);
}
