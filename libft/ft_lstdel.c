/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 05:08:33 by xgeorge           #+#    #+#             */
/*   Updated: 2020/11/05 05:08:34 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *new;
	t_list *list;

	list = *alst;
	while (list)
	{
		new = list->next;
		del(list->content, list->content_size);
		free(list);
		list = new;
	}
	*alst = NULL;
}
