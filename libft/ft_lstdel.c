/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 22:38:24 by xgeorge           #+#    #+#             */
/*   Updated: 2019/10/20 01:51:33 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*tmp;

	if (!(*alst) || !(del) || !(alst))
		return ;
	while ((*alst))
	{
		tmp = (*alst)->next;
		ft_lstdelone(alst, del);
		*alst = tmp;
	}
	ft_lstdelone(alst, del);
}
