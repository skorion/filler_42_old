/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 05:08:54 by xgeorge           #+#    #+#             */
/*   Updated: 2020/11/05 05:08:56 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void	const *content, size_t content_size)
{
	t_list	*list;

	if (!(list = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (!content)
	{
		list->content = NULL;
		list->content_size = 0;
		list->next = NULL;
		return (list);
	}
	if (!(list->content = malloc(content_size)))
		return (NULL);
	ft_memcpy((list->content), content, content_size);
	if (!list->content)
	{
		free(list);
		return (NULL);
	}
	list->content_size = content_size;
	list->next = NULL;
	return (list);
}
