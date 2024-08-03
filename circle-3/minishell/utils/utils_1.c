/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caakkaya <caakkaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 14:56:34 by caakkaya          #+#    #+#             */
/*   Updated: 2024/08/03 14:56:35 by caakkaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

void	put_char(int fd, char c)
{
	write(fd, &c, 1);
}

void	put_str(int fd, char *str)
{
	while (*str)
		write(fd, str++, 1);
}

int		str_cmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

char	*str_cpy(char *dst, const char *src)
{
	char	*save;

	save = dst;
	if (!src || !dst)
		return (dst);
	while (*src)
		*dst++ = *src++;
	*dst = '\0';
	return (save);
}

int		char_in_set(char c, char *charset)
{
	int i;

	i = -1;
	if (!charset)
		return (i);
	while (charset[++i])
		if (charset[i] == c)
			return (i);
	return (-1);
}
