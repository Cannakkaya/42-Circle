/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caakkaya <caakkaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 14:33:12 by caakkaya          #+#    #+#             */
/*   Updated: 2024/08/03 14:33:13 by caakkaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		ft_check(int fd, int *ret, char *buffer, int *i)
{
	*ret = 0;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (-1);
	if (*i == 0)
	{
		*ret = read(fd, buffer, BUFFER_SIZE);
		buffer[*ret] = '\0';
	}
	if (*ret < 0)
		return (-1);
	return (1);
}

int		get_next_line(int fd, char **line)
{
	static	char	buffer[BUFFER_SIZE + 1];
	static	int		i = 0;
	int				ret;

	*line = ft_malloc_null();
	if (ft_check(fd, &ret, buffer, &i) == -1)
		return (-1);
	while (buffer[i] != '\n')
	{
		if (!buffer[i])
		{
			ret = read(fd, buffer, BUFFER_SIZE);
			buffer[ret] = '\0';
			if (ret <= 0)
				return (ret);
			i = 0;
		}
		if (buffer[i] == '\n')
			break ;
		if (!(*line = ft_str_add_char(*line, buffer[i])))
			return (-1);
		i++;
	}
	i++;
	return (1);
}
