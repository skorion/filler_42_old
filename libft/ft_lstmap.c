/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 05:08:49 by xgeorge           #+#    #+#             */
/*   Updated: 2020/11/05 05:08:50 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *list;
	t_list *new;

	list = f(lst);
	new = list;
	if (!lst || !f)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
		if (!(list->next = f(lst)))
			return (NULL);
		list = list->next;
	}
	return (new);
}
