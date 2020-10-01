/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 12:12:04 by xgeorge           #+#    #+#             */
/*   Updated: 2019/10/20 01:50:47 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

static size_t	ft_gt(char const *s, char c)
{
	size_t	size;
	int		flag;
	char	*byf;

	byf = (char *)s;
	flag = 0;
	size = 0;
	while (*byf != '\0')
	{
		if (flag == 0 && *byf != c)
		{
			flag = 1;
			size++;
		}
		if (flag == 1 && *byf == c)
			flag = 0;
		byf++;
	}
	return (size);
}

static size_t	ft_gl(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0' && s[len] != c)
		len++;
	return (len);
}

static void		ft_init(size_t *o, size_t *o1)
{
	*o = 0;
	*o1 = 0;
}

char			**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		flag;
	size_t	index;
	size_t	numindex;

	ft_init(&numindex, &index);
	flag = 0;
	if (!s)
		return (NULL);
	if ((tab = (char **)ft_memalloc((ft_gt(s, c) + 1) * sizeof(char*))) == NULL)
		return (NULL);
	while (s[index] != '\0')
	{
		if (flag == 0 && s[index] != c)
		{
			flag = 1;
			if ((tab[numindex] = ft_strnew(ft_gl(&s[index], c) + 1)) == NULL)
				return (ft_clean_tab(tab));
			ft_strncpy(tab[numindex++], &s[index], ft_gl(&s[index], c));
		}
		if (s[index++] == c && flag == 1)
			flag = 0;
	}
	tab[numindex] = NULL;
	return (tab);
}
