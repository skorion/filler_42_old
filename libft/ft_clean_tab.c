/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clean_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 00:53:39 by xgeorge           #+#    #+#             */
/*   Updated: 2019/10/20 01:51:40 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	**ft_clean_tab(char **tab)
{
	size_t	iter;

	iter = 0;
	while (tab[iter] != NULL)
		free(tab[iter++]);
	free(tab[iter]);
	free(tab);
	return (NULL);
}
