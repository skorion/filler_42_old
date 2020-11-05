/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 05:13:10 by xgeorge           #+#    #+#             */
/*   Updated: 2020/11/05 05:13:10 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		a(char *str, char c)
{
	int i;
	int a;

	i = 0;
	a = 0;
	while (str[i])
	{
		if (str[i] == c)
			i++;
		if (str[i] != c && str[i])
		{
			a++;
			while (str[i] != c && str[i])
				i++;
		}
	}
	return (a);
}

static int		r(char *str, char c)
{
	int i;
	int a;

	i = 0;
	a = 0;
	while (str[i])
	{
		if (str[i] == c)
			i++;
		if (str[i] != c && str[i])
		{
			while (str[i] != c && str[i])
			{
				i++;
				a++;
			}
		}
		while (str[i] != c && str[i])
			i++;
	}
	return (a);
}

static char		**ft_free(char **str, int j)
{
	int i;

	i = 0;
	while (i < j)
		free(str[i]);
	free(str);
	return (NULL);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	char	**t;

	i = 0;
	j = 0;
	if (!s || (!(t = (char **)malloc(sizeof(char *) * (a((char *)s, c) + 1)))))
		return (NULL);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s != c && *s)
		{
			if (!(t[j] = (char *)malloc(sizeof(*t) * (r((char *)s, c) + 1))))
				return (ft_free(t, j));
			while (*s != c && *s)
				t[j][i++] = (char)*s++;
			t[j][i] = '\0';
			i = 0;
			j++;
		}
	}
	t[j] = NULL;
	return (t);
}
