/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 22:54:05 by xgeorge           #+#    #+#             */
/*   Updated: 2020/08/07 06:36:45 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*tmp;

	if (!lst || !f)
		return (NULL);
	if ((new = f(lst)) == NULL)
		return (NULL);
	tmp = new;
	if (lst->next)
		lst = lst->next;
	else
		return (new);
	while (lst)
	{
		if ((tmp->next = f(lst)) == NULL)
			return (NULL);
		tmp = tmp->next;
		lst = lst->next;
	}
	return (new);
}
