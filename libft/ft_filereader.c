/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_filereader.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgeorge <xgeorge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 05:07:02 by xgeorge           #+#    #+#             */
/*   Updated: 2020/11/05 05:07:03 by xgeorge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_filereader(char *a)
{
	int		fd;
	int		ret;
	char	buf[BUFF_SIZE + 1];

	fd = open(a, O_RDONLY | S_IRUSR);
	if (fd == -1)
	{
		ft_putstr("File name missing.\n");
		return ;
	}
	ret = read(fd, buf, BUFF_SIZE);
	buf[ret] = '\0';
	ft_putstr(buf);
	if (close(fd) == -1)
	{
		ft_putstr("close error.\n");
		return ;
	}
}
