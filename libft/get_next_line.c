/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 23:41:11 by xgeorge           #+#    #+#             */
/*   Updated: 2020/08/10 15:24:03 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

t_list		*get_list_dist(t_list **how, int needfd)
{
	t_list	*list;
	char	*str;

	list = *how;
	while ((list != NULL) && ((int)(list)->content_size) != needfd)
		(list) = (list)->next;
	if (!(list))
	{
		if ((str = ft_strnew(0)) == NULL)
			return (NULL);
		if (((list) = ft_lstnew(str, 1)) == NULL)
		{
			ft_strdel(&str);
			return (NULL);
		}
		list->content_size = needfd;
		ft_strdel(&str);
		ft_lstadd(how, list);
	}
	return (list);
}

int			go_read(const int fd, char **content)
{
	int		ret;
	char	byf[BUFF_SIZE + 1];
	char	*tmpstr;

	while ((ret = read(fd, byf, BUFF_SIZE)) > 0)
	{
		byf[ret] = '\0';
		tmpstr = *content;
		if ((*content = ft_strjoin(*content, byf)) == NULL)
			return (-1);
		ft_strdel(&tmpstr);
		if (ft_strchr(*content, '\n'))
			break ;
	}
	if (ret < 0)
		return (-1);
	if (ret == 0 && (*content == NULL || (*content)[0] == '\0'))
		return (0);
	return (1);
}

int			get_answer(char **content, char **line)
{
	size_t	len;
	char	*tmp;

	len = 0;
	while ((*content)[len] != '\n' && (*content)[len] != '\0')
		len++;
	if ((*content)[len] == '\n')
	{
		if ((*line = ft_strsub(*content, 0, len)) == NULL)
			return (-1);
		(*line)[len] = '\0';
		tmp = *content;
		if ((*content = ft_strdup(&(tmp[len + 1]))) == NULL)
			return (-1);
		ft_strdel(&tmp);
	}
	else
	{
		if ((*line = ft_strsub(*content, 0, len)) == NULL)
			return (-1);
		ft_strdel(content);
	}
	return (1);
}

int			get_next_line(const int fd, char **line)
{
	static	t_list	*top;
	int				cast;
	t_list			*tmp;

	if (fd < 0 || !(line))
		return (-1);
	*line = NULL;
	if ((tmp = get_list_dist(&top, fd)) == NULL)
		return (-1);
	if ((cast = go_read(fd, (char **)&(tmp->content))) <= 0)
		return (cast);
	if (get_answer((char **)&(tmp->content), line) < 0)
		return (-1);
	return (1);
}
