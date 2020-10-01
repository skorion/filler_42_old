/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cleardlist.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 21:25:38 by gzoltan           #+#    #+#             */
/*   Updated: 2019/11/16 18:20:46 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_cleardlist(t_dlist **box, void (*del)(void*, size_t))
{
	if (box == NULL)
		return ;
	if (*box == NULL)
		return ;
	while ((*box)->prev != NULL)
		*box = (*box)->prev;
	while ((*box) != NULL)
		*box = ft_removedlist(box, del);
}
