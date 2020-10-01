/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 22:16:27 by xgeorge           #+#    #+#             */
/*   Updated: 2020/08/07 06:36:49 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;

	if (!(new = ft_memalloc(sizeof(t_list))))
		return (NULL);
	if (content != NULL)
	{
		if ((new->content = malloc(content_size)) != NULL)
		{
			new->content_size = content_size;
			ft_memcpy(new->content, content, content_size);
		}
		else
		{
			free(new);
			return (NULL);
		}
	}
	else
	{
		new->content_size = 0;
		new->content = NULL;
	}
	new->next = NULL;
	return (new);
}
