/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newdlist.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 19:38:21 by gzoltan           #+#    #+#             */
/*   Updated: 2019/11/15 18:46:32 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

t_dlist		*ft_newdlist(void *content, size_t content_size)
{
	t_dlist	*new;

	if ((new = malloc(sizeof(t_dlist))) == NULL)
		return (NULL);
	if (content == NULL)
	{
		new->content = NULL;
		new->content_size = 0;
	}
	else
	{
		if ((new->content = malloc(content_size)) == NULL)
		{
			free(new);
			return (NULL);
		}
		new->content_size = content_size;
		ft_memcpy(new->content, content, content_size);
	}
	new->next = NULL;
	new->prev = NULL;
	return (new);
}
